`timescale 1ns/1ns

module top_ws #(
    parameter DIM   = 8,
    parameter DATAW = 8,
    parameter PSUMW = 32
)(
    input  logic clk,
    input  logic rst_n,

    input  logic weight_load,
    input  logic signed [DATAW-1:0] B [0:DIM-1][0:DIM-1],

    input  logic activation,
    input  logic signed [DATAW-1:0] A [0:DIM-1][0:DIM-1],

    output logic signed [PSUMW-1:0] C [0:DIM-1][0:DIM-1],
    output logic done,
    output logic out_skew_done
);


    logic signed [DIM*DIM*DATAW-1:0] weights_flat;
    logic signed [DIM*DATAW-1:0]     in_a_skew;
    logic signed [DIM*PSUMW-1:0]     out_c_skew;

    logic load_weight;
    logic skew_start;
    logic row_valid;
    logic in_skew_done;  // still connected, but not used for control here


    integer r, c, a, b;

    //flattening weights
    always_comb begin
        for (a = 0; a < DIM; a++)
            for (b = 0; b < DIM; b++)
                weights_flat[((a*DIM + b)+1)*DATAW-1 -: DATAW] = B[a][b];
    end

    // ============================================================
    // Instantiate skewer
    // ============================================================
    skewer_ws #(
        .DIM   (DIM),
        .DATAW (DATAW),
        .PSUMW (PSUMW)
    ) skewer (
        .clk         (clk),
        .rst_n       (rst_n),
        .load_weight (load_weight),
        .weights_in  (weights_flat),
        .start       (skew_start),
        .in_a        (in_a_skew),
        .out_c       (out_c_skew),
        .row_valid   (row_valid),
        .in_skew_done(in_skew_done)
    );

    // ============================================================
    // LOAD WEIGHTS
    // ============================================================
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            load_weight   <= 1'b0;
        end else begin
            load_weight <= 1'b0;
            if (weight_load)
                load_weight <= 1'b1;
        end
    end

    // ============================================================
    // STREAMING OF INPUT A 
    // One row per cycle, per matrix. As soon as the last row of
    // matrix N is sent, matrix N+1 can start on the next cycle.
    // ============================================================
    logic [31:0] k;          
    logic streaming;  

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            k             <= '0;
            streaming     <= 1'b0;
            skew_start    <= 1'b0;
            in_a_skew     <= '0;
            out_skew_done <= 1'b0;
        end else begin
            // defaults each cycle
            skew_start    <= 1'b0;
            out_skew_done <= 1'b0;

            if (!streaming) begin
                // Idle: wait for activation to start a new matrix
                if (activation) begin
                    streaming  <= 1'b1;
                    k          <= 1;       
                    skew_start <= 1'b1;    

                    // Send row 0 of the new matrix
                    for (r = 0; r < DIM; r++)
                        in_a_skew[(r+1)*DATAW-1 -: DATAW] <= A[0][r];
                end else begin
                    in_a_skew <= '0;
                end
            end else begin
                // Strems, sends one row per cycle
                // skew_start stays 0 here

                for (r = 0; r < DIM; r++)
                    in_a_skew[(r+1)*DATAW-1 -: DATAW] <= A[k][r];

                if (k == DIM-1) begin
                    //Last row of the current matrix was just finished streaming
                    streaming     <= 1'b0;
                    out_skew_done <= 1'b1; 
                    k             <= '0;
                end else begin
                    k <= k + 1;
                end
            end
        end
    end


    // ============================================================
    // CAPTURE OUTPUTS - uses double buffer and collects outputs
    // from the systolic array
    // ============================================================
    logic [31:0] row;

    logic signed [PSUMW-1:0] C_buf0 [0:DIM-1][0:DIM-1];
    logic signed [PSUMW-1:0] C_buf1 [0:DIM-1][0:DIM-1];

    logic buf_select;  

    //We basically needed two buffers because the array would output two fast otherwise
    //By the time the last row would finish the first one would start getting overwritten
    //by the second matrix output, a buffer became needed to prevent this
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            row        <= 0;
            done       <= 0;
            buf_select <= 0;

            for (int i = 0; i < DIM; i++)
                for (int j = 0; j < DIM; j++) begin
                    C_buf0[i][j] <= 0;
                    C_buf1[i][j] <= 0;
                end
        end else begin
            done <= 1'b0;

            if (row < DIM) begin
                if (row_valid) begin
                    for (int c = 0; c < DIM; c++) begin
                        if (buf_select == 0)
                            C_buf0[row][c] <= out_c_skew[(c+1)*PSUMW-1 -: PSUMW];
                        else
                            C_buf1[row][c] <= out_c_skew[(c+1)*PSUMW-1 -: PSUMW];
                    end
                    row <= row + 1;
                end
            end
            else if (row == DIM) begin
                done <= 1'b1;

                // Swaps buffers since we just finished using the current one
                buf_select <= ~buf_select;

                if (row_valid) begin
                    for (int c = 0; c < DIM; c++) begin
                        if (buf_select == 0)
                            C_buf1[0][c] <= out_c_skew[(c+1)*PSUMW-1 -: PSUMW];
                        else
                            C_buf0[0][c] <= out_c_skew[(c+1)*PSUMW-1 -: PSUMW];
                    end
                    row <= 1;  
                end else begin
                    row <= 0;
                end
            end
        end
    end

    //sends the finished output buffer to C
    always_comb begin
        for (int i = 0; i < DIM; i++) begin
            for (int j = 0; j < DIM; j++) begin
                if (buf_select == 0)
                    C[i][j] = C_buf1[i][j];  
                else
                    C[i][j] = C_buf0[i][j];
            end
        end
    end

endmodule
