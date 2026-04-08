`timescale 1ns/1ns

module top_ws #(
    parameter DIM   = 14,
    parameter DATAW = 8,
    //parameter PSUMW = 2*DATAW + 4
    parameter PSUMW = 32
)(
    input  logic                       clk,
    input  logic                       rst_n,

    input  logic signed                       load_weight,
    input  logic signed [DIM*DIM*DATAW-1:0]   weights_in,

    input  logic signed                       start,
    input  logic signed [DIM*DATAW-1:0]       in_a,

    output logic signed [DIM*PSUMW-1:0]       out_c,
    output logic signed                       row_valid
);

    // =========================================================================
    // 
    // =========================================================================

    logic signed  [DATAW-1:0] sr_a [0:DIM-1][0:DIM-2]; // max DIM-1 taps needed
    logic signed  [DIM*DATAW-1:0] skewed_a;

    genvar row, col, tap;

    generate
        for (row = 0; row < DIM; row++) begin //skews for the rows

            if (row == 0) begin : gen_skew_direct
                // Row 0 gets first A value without any delays
                assign skewed_a[DATAW-1:0] = in_a[DATAW-1:0];
            end 
            else begin : gen_skew_shift
                // Row i: i registers; sr_a[i][0] captures input,
                // sr_a[i][i-1] is the output.
                always @(posedge clk) begin
                    if (!rst_n) begin
                         sr_a[row][0] <= '0;
                    end
                    else begin
                        //shift in the next set of values from the row
                        //i.e. if we have row 1, then we'll be dropping values  
                        //contained within bits 15 to 23 of the input row 
                        sr_a[row][0] <= in_a[(row+1)*DATAW-1 -: DATAW];
                    end
                end

                //Shift all the values down
                //i.e. value in row 1 col 0 gets moved into row 1 col 1 and so on
                for (tap = 1; tap < DIM-1; tap++) begin : gen_skew_tap
                    always @(posedge clk) begin
                        if (!rst_n) sr_a[row][tap] <= '0;
                        else        sr_a[row][tap] <= sr_a[row][tap-1];
                    end
                end

                //the a input value that gets sent into the systolic array is this skewed_a
                //the skewed_a will contain the full input row for each cycle
                assign skewed_a[(row+1)*DATAW-1 -: DATAW] = sr_a[row][row-1];

                //i.e. cycle 1 for a 4x4 matrix numbered 1-16, skewed a will have 1000
                //cycle 2 it will have 5200, cycle 3 will be 9630, cycle 4 will be 13 10 7 4,
                //cycle 5 would be 0 14 11 8, and so on and so forth  
            end
        end
    endgenerate

    // =========================================================================
    // Instantiate the array, feed the input the skewed a and output full psum
    // =========================================================================

    logic signed [DIM*PSUMW-1:0] raw_psum;

    systolic_array #(
        .DIM    (DIM),
        .DATAW (DATAW),
        .PSUMW (PSUMW)
    ) array (
        .clk         (clk),
        .rst_n       (rst_n),
        .load_weight (load_weight),
        .weights_in  (weights_in),
        .in_a        (skewed_a),
        .out_psum    (raw_psum)
    );

    // =========================================================================
    // De-skewing the outputs
    // =========================================================================

    logic signed [PSUMW-1:0] sr_out [0:DIM-1][0:DIM-2];
    
    //here we're bascially doing the opposite of what we did when skewing inputs
    generate
        for (col = 0; col < DIM; col++) begin : gen_deskew

            if (col == DIM-1) begin : gen_passthru
                // col DIM-1: slowest — 0 extra delay
                assign out_c[(col+1)*PSUMW-1 -: PSUMW] = raw_psum[(col+1)*PSUMW-1 -: PSUMW];

            end else begin : gen_shift
                // Tap 0: register raw_psum
                always @(posedge clk) begin
                    if (!rst_n) sr_out[col][0] <= '0;
                    else        sr_out[col][0] <= raw_psum[(col+1)*PSUMW-1 -: PSUMW];
                end

                // Taps 1..DIM-2
                for (tap = 1; tap < DIM-1; tap++) begin : gen_shift_tap
                    always @(posedge clk) begin
                        if (!rst_n) sr_out[col][tap] <= '0;
                        else        sr_out[col][tap] <= sr_out[col][tap-1];
                    end
                end

                // col j needs DIM-1-j taps => output at index DIM-2-j
                assign out_c[(col+1)*PSUMW-1 -: PSUMW] = sr_out[col][DIM-2-col];
            end
        end
    endgenerate

    // =========================================================================
    // Row output valid registering
    // =========================================================================

    localparam LATENCY = 3 * DIM - 2;
    localparam CTR_W   = $clog2(LATENCY + DIM + 1);

    localparam [CTR_W-1:0] CTR_VALID_LO = LATENCY - 1;
    localparam [CTR_W-1:0] CTR_VALID_HI = LATENCY + DIM - 2;

    logic [CTR_W-1:0] ctr;
    logic             counting;
    
    //basically all we're doing here is counting until we know it's time for an output
    //once we know the correct number of cycles has passed for us to receive an output 
    //from the matrix, we'll send a row_valid signal, saying that the row has been completed

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
