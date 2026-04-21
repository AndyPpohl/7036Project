`timescale 1ns/1ns

module top_os #(
    parameter DIM      = 14,
    parameter DATAW    = 8,
    parameter PSUMW    = 32,
    parameter NUM_TILES = 14   
)(
    input  logic clk,
    input  logic rst_n,

    input  logic activation,
    input  logic last_tile,
    input  logic signed [DATAW-1:0] A [0:DIM-1][0:DIM-1],
    input  logic signed [DATAW-1:0] B [0:DIM-1][0:DIM-1],

    output logic signed [PSUMW-1:0] C [0:DIM-1][0:DIM-1],
    output logic done,
    output logic out_skew_done
);

    logic signed [DIM*DATAW-1:0]     in_a_skew;
    logic signed [DIM*DATAW-1:0]     in_w_skew;
    logic signed [DIM*DIM*PSUMW-1:0] out_c_flat;

    logic skew_start;
    logic in_skew_done;
    logic clear;
    logic drain;
    logic last_tile_seen;

    integer r;

    // ============================================================
    // Set up the skewer
    // ============================================================
    skewer_os #(
        .DIM   (DIM),
        .DATAW (DATAW),
        .PSUMW (PSUMW)
    ) skewer (
        .clk         (clk),
        .rst_n       (rst_n),
        .start       (skew_start),
        .clear       (clear),
        .drain       (drain),
        .in_a        (in_a_skew),
        .in_w        (in_w_skew),
        .out_c       (out_c_flat),
        .in_skew_done(in_skew_done)
    );


    // ============================================================
    // STREAMING A and W in, they go in mostly the same way except
    // one will be transposed basically
    // the first row of A gets fed into the first PE
    // the first column of W gets fed into first PE
    // ============================================================
    logic [31:0] k;
    logic streaming;


    localparam PIPE_DEPTH = 2 * DIM - 1;
    logic [$clog2(PIPE_DEPTH+1)-1:0] drain_ctr;
    logic drain_counting;

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            k              <= '0;
            streaming      <= 1'b0;
            skew_start     <= 1'b0;
            in_a_skew      <= '0;
            in_w_skew      <= '0;
            out_skew_done  <= 1'b0;
            drain          <= 1'b0;
            clear          <= 1'b0;
            last_tile_seen <= 1'b0;
            drain_ctr      <= '0;
            drain_counting <= 1'b0;
        end 
        else begin
            skew_start    <= 1'b0;
            out_skew_done <= 1'b0;
            drain         <= 1'b0;
            clear         <= 1'b0;

            // --------------------------------------------------------
            // Drain counter — counts pipeline depth cycles after
            // last tile finishes streaming before asserting drain
            // --------------------------------------------------------
            if (drain_counting) begin
                if (drain_ctr == PIPE_DEPTH - 1) begin
                    drain          <= 1'b1;
                    drain_counting <= 1'b0;
                    drain_ctr      <= '0;
                    last_tile_seen <= 1'b0;
                end 
                else begin
                    drain_ctr <= drain_ctr + 1'b1;
                end
            end

            // clear fires one cycle after drain
            clear <= drain;

            // --------------------------------------------------------
            // Logic for doing the actual streaming of A and W
            // --------------------------------------------------------
            if (!streaming) begin
                if (activation) begin
                    streaming  <= 1'b1;
                    k          <= 1;
                    skew_start <= 1'b1;

                    if (last_tile) begin
                        last_tile_seen <= 1'b1;
                    end
                    for (r = 0; r < DIM; r++) begin
                        in_a_skew[(r+1)*DATAW-1 -: DATAW] <= A[r][0];
                        in_w_skew[(r+1)*DATAW-1 -: DATAW] <= B[0][r];
                    end
                end 
                else begin
                    in_a_skew <= '0;
                    in_w_skew <= '0;
                end
            end 
            else begin
                for (r = 0; r < DIM; r++) begin
                    in_a_skew[(r+1)*DATAW-1 -: DATAW] <= A[r][k];
                    in_w_skew[(r+1)*DATAW-1 -: DATAW] <= B[k][r];
                end

                if (k == DIM-1) begin
                    streaming     <= 1'b0;
                    out_skew_done <= 1'b1;
                    k             <= '0;

                    // If this was the last, start drain count
                    if (last_tile || last_tile_seen) begin
                        drain_counting <= 1'b1;
                        drain_ctr      <= '0;
                    end
                end 
                else begin
                    if (last_tile) begin
                        last_tile_seen <= 1'b1;
                    end
                    k <= k + 1;
                end
            end
        end
    end

    // ============================================================
    // CAPTURE OUTPUTS — single cycle snapshot on drain
    // ============================================================
    logic signed [PSUMW-1:0] C_buf0 [0:DIM-1][0:DIM-1];
    logic signed [PSUMW-1:0] C_buf1 [0:DIM-1][0:DIM-1];
    logic buf_select;

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            done       <= 1'b0;
            buf_select <= 1'b0;

            for (int i = 0; i < DIM; i++) begin
                for (int j = 0; j < DIM; j++) begin
                    C_buf0[i][j] <= '0;
                    C_buf1[i][j] <= '0;
                end
            end
        end 
        else begin
            done <= 1'b0;

            if (drain) begin
                // Snapshot full matrix from flat output into inactive buffer
                for (int i = 0; i < DIM; i++) begin
                    for (int j = 0; j < DIM; j++) begin
                        if (buf_select == 0) begin
                            C_buf0[i][j] <= out_c_flat[((i*DIM + j)+1)*PSUMW-1 -: PSUMW];
                        end
                        else begin
                            C_buf1[i][j] <= out_c_flat[((i*DIM + j)+1)*PSUMW-1 -: PSUMW];
                        end
                    end
                end
            end

            // done and buffer swap one cycle after drain
            if (clear) begin
                done       <= 1'b1;
                buf_select <= ~buf_select;
            end
        end
    end

    // Present the completed buffer
    always_comb begin
        for (int i = 0; i < DIM; i++) begin 
            for (int j = 0; j < DIM; j++) begin
                if (buf_select == 0) begin
                    C[i][j] = C_buf1[i][j];
                end
                else begin
                    C[i][j] = C_buf0[i][j];
                end
            end
        end
    end

endmodule