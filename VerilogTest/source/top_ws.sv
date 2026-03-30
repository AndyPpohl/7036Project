`timescale 1ns/1ns

`timescale 1ns/1ns

// =============================================================================
// top_ws.v — Weight-Stationary Systolic Array Top Level
// =============================================================================
// Timing / skew analysis:
//
//   INPUT SKEWING (rows of A):
//     Row i must be delayed i cycles so the diagonal wavefront aligns.
//     Row 0 => 0 registers (logic direct)
//     Row 1 => 1 register
//     Row i => i registers
//     Implemented: sr_a[row][0..DIM-1], row i uses tap (i-1) for i>0,
//                  row 0 bypasses directly.
//
//   OUTPUT DE-SKEWING (columns of C from array bottom):
//     Activation A[i][k] enters column k at cycle i+k (0-indexed, after skew).
//     It exits p_logic[DIM][k] DIM cycles later at cycle i+k+DIM.
//     Last accumulation for column col: i=DIM-1, k=col => cycle DIM-1+col+DIM.
//     col 0   done at cycle 2*DIM-1  (EARLIEST)
//     col j   done at cycle 2*DIM-1+j
//     col DIM-1 done at cycle 3*DIM-2 (LATEST)
//     Extra delay for col j = (DIM-1-j) registers.
//     col 0   => DIM-1 registers
//     col DIM-1 => 0 (pass-through)
//
//   LATENCY = 3*DIM - 2 cycles from first start-aligned activation.
// =============================================================================

module top_ws #(
    parameter DIM   = 4,
    parameter DATAW = 8,
    //parameter PSUMW = 2*DATAW + 4
    parameter PSUMW = 32
)(
    input  logic                       clk,
    input  logic                       rst_n,

    input  logic                       load_weight,
    input  logic [DIM*DIM*DATAW-1:0]   weights_in,

    input  logic                       start,
    input  logic [DIM*DATAW-1:0]       in_a,

    output logic [DIM*PSUMW-1:0]       out_c,
    output logic                       row_valid
);

    // =========================================================================
    // 1. Input skewing
    //    Row 0: direct wire (0 registers)
    //    Row i (i>0): i registers via shift chain sr_a[i][0..i-1]
    // =========================================================================

    logic  [DATAW-1:0] sr_a [0:DIM-1][0:DIM-2]; // max DIM-1 taps needed
    logic  [DIM*DATAW-1:0] skewed_a;

    genvar row, col, tap;

    generate
        for (row = 0; row < DIM; row++) begin : gen_skew_row

            if (row == 0) begin : gen_skew_direct
                // Row 0: no delay
                assign skewed_a[DATAW-1:0] = in_a[DATAW-1:0];

            end else begin : gen_skew_shift
                // Row i: i registers; sr_a[i][0] captures input,
                // sr_a[i][i-1] is the output.
                always @(posedge clk) begin
                    if (!rst_n) begin
                         sr_a[row][0] <= '0;
                    end
                    else begin  
                        sr_a[row][0] <= in_a[(row+1)*DATAW-1 -: DATAW];
                    end
                end

                for (tap = 1; tap < DIM-1; tap++) begin : gen_skew_tap
                    always @(posedge clk) begin
                        if (!rst_n) sr_a[row][tap] <= '0;
                        else        sr_a[row][tap] <= sr_a[row][tap-1];
                    end
                end

                // Row i output comes from tap i-1 (0-indexed)
                assign skewed_a[(row+1)*DATAW-1 -: DATAW] = sr_a[row][row-1];
            end
        end
    endgenerate

    // =========================================================================
    // 2. Systolic array
    // =========================================================================

    logic [DIM*PSUMW-1:0] raw_psum;

    systolic_array #(
        .DIM    (DIM),
        .DATAW (DATAW),
        .PSUMW (PSUMW)
    ) u_array (
        .clk         (clk),
        .rst_n       (rst_n),
        .load_weight (load_weight),
        .weights_in  (weights_in),
        .in_a        (skewed_a),
        .out_psum    (raw_psum)
    );

    // =========================================================================
    // 3. Output de-skewing
    //    col j needs (DIM-1-j) extra delay registers.
    //    col DIM-1 => 0 registers (pass-through, slowest raw output)
    //    col 0     => DIM-1 registers (fastest raw output, most padding)
    //    Output tap for col j: sr_c[col][DIM-2-j]  (0-indexed)
    // =========================================================================

    logic [PSUMW-1:0] sr_c [0:DIM-1][0:DIM-2];

    generate
        for (col = 0; col < DIM; col++) begin : gen_deskew

            if (col == DIM-1) begin : gen_passthru
                // col DIM-1: slowest — 0 extra delay
                assign out_c[(col+1)*PSUMW-1 -: PSUMW] = raw_psum[(col+1)*PSUMW-1 -: PSUMW];

            end else begin : gen_shift
                // Tap 0: register raw_psum
                always @(posedge clk) begin
                    if (!rst_n) sr_c[col][0] <= '0;
                    else        sr_c[col][0] <= raw_psum[(col+1)*PSUMW-1 -: PSUMW];
                end

                // Taps 1..DIM-2
                for (tap = 1; tap < DIM-1; tap++) begin : gen_shift_tap
                    always @(posedge clk) begin
                        if (!rst_n) sr_c[col][tap] <= '0;
                        else        sr_c[col][tap] <= sr_c[col][tap-1];
                    end
                end

                // col j needs DIM-1-j taps => output at index DIM-2-j
                assign out_c[(col+1)*PSUMW-1 -: PSUMW] = sr_c[col][DIM-2-col];
            end
        end
    endgenerate

    // =========================================================================
    // 4. valid_out counter
    //    LATENCY = (DIM-1) input skew + DIM array depth + (DIM-1) output skew
    //            = 3*DIM - 2
    //    valid_out high for DIM cycles from LATENCY onward (one row of C each).
    // =========================================================================

    localparam LATENCY = 3 * DIM - 2;
    localparam CTR_W   = $clog2(LATENCY + DIM + 1);

    localparam [CTR_W-1:0] CTR_VALID_LO = LATENCY - 1;
    localparam [CTR_W-1:0] CTR_VALID_HI = LATENCY + DIM - 2;

    logic [CTR_W-1:0] ctr;
    logic             counting;

    always @(posedge clk) begin
        if (!rst_n) begin
            ctr       <= '0;
            counting  <= 1'b0;
        end else begin
            if (start) begin
                ctr      <= 1;
                counting <= 1'b1;
            end else if (counting) begin
                ctr <= ctr + 1'b1;
            end

            if (counting && ctr == CTR_VALID_HI) begin
                counting <= 1'b0;
                ctr      <= '0;
            end
        end
    end

    localparam logic [CTR_W-1:0] ROW_START = (DIM + (DIM - 1));
    localparam logic [CTR_W-1:0] ROW_END   = (DIM + (DIM - 1) + DIM);

    assign row_valid = (ctr >= ROW_START) && (ctr < ROW_END);

endmodule
