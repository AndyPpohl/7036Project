`timescale 1ns/1ns

module skewer_os #(
    parameter DIM   = 14,
    parameter DATAW = 8,
    parameter PSUMW = 32
)(
    input  logic                             clk,
    input  logic                             rst_n,

    input  logic                             start,
    input  logic                             clear,
    input  logic                             drain,

    input  logic signed [DIM*DATAW-1:0]      in_a,
    input  logic signed [DIM*DATAW-1:0]      in_w,

    output logic signed [DIM*DIM*PSUMW-1:0]  out_c,
    output logic                             in_skew_done
);

    // =========================================================================
    // Skew A values
    // =========================================================================
    logic signed [DATAW-1:0]     sr_a     [0:DIM-1][0:DIM-2];
    logic signed [DIM*DATAW-1:0] skewed_a;

    genvar row, col, tap;

    generate
        for (row = 0; row < DIM; row++) begin : gen_skew_a

            if (row == 0) begin : gen_a_direct
                assign skewed_a[DATAW-1:0] = in_a[DATAW-1:0];
            end
            else begin : gen_a_shift
                always @(posedge clk) begin
                    if (!rst_n) sr_a[row][0] <= '0;
                    else        sr_a[row][0] <= in_a[(row+1)*DATAW-1 -: DATAW];
                end

                for (tap = 1; tap < DIM-1; tap++) begin : gen_a_tap
                    always @(posedge clk) begin
                        if (!rst_n) sr_a[row][tap] <= '0;
                        else        sr_a[row][tap] <= sr_a[row][tap-1];
                    end
                end

                assign skewed_a[(row+1)*DATAW-1 -: DATAW] = sr_a[row][row-1];
            end
        end
    endgenerate

    // =========================================================================
    // Skew W values
    // =========================================================================
    logic signed [DATAW-1:0]     sr_w     [0:DIM-1][0:DIM-2];
    logic signed [DIM*DATAW-1:0] skewed_w;

    generate
        for (col = 0; col < DIM; col++) begin : gen_skew_w

            if (col == 0) begin : gen_w_direct
                assign skewed_w[DATAW-1:0] = in_w[DATAW-1:0];
            end
            else begin : gen_w_shift
                always @(posedge clk) begin
                    if (!rst_n) begin 
                        sr_w[col][0] <= '0;
                    end
                    else begin
                        sr_w[col][0] <= in_w[(col+1)*DATAW-1 -: DATAW];
                    end
                end

                for (tap = 1; tap < DIM-1; tap++) begin : gen_w_tap
                    always @(posedge clk) begin
                        if (!rst_n) begin 
                            sr_w[col][tap] <= '0;
                        end
                        else begin
                            sr_w[col][tap] <= sr_w[col][tap-1];
                        end
                    end
                end

                assign skewed_w[(col+1)*DATAW-1 -: DATAW] = sr_w[col][col-1];
            end
        end
    endgenerate

    // =========================================================================
    // Instantiating systolic array
    // =========================================================================
    systolic_array_os #(
        .DIM   (DIM),
        .DATAW (DATAW),
        .PSUMW (PSUMW)
    ) array (
        .clk     (clk),
        .rst_n   (rst_n),
        .in_a    (skewed_a),
        .in_w    (skewed_w),
        .clear   (clear),
        .drain   (drain),
        .out_c   (out_c)
    );

    // =========================================================================
    // Counter FSM, mostly an artifact, partially still used for in_skew_done
    // =========================================================================
    localparam LATENCY = 3 * DIM - 2;
    localparam CTR_W   = $clog2(LATENCY + DIM + 1);

    logic [31:0] ctr;
    logic        counting;

    always @(posedge clk) begin
        if (!rst_n) begin
            ctr      <= '0;
            counting <= 1'b0;
        end else begin
            if (start && !counting) begin
                ctr      <= 1;
                counting <= 1'b1;
            end
            else if (start && counting) begin
                ctr <= ctr + 1'b1;
            end
            else if (counting) begin
                ctr <= ctr + 1'b1;
            end
        end
    end

    localparam logic [31:0] ROW_START = DIM + (DIM - 1);

    //tells top that it can send in a new array
    assign in_skew_done = (ctr == ROW_START - 3);

endmodule