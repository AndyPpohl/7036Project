`timescale 1ns/1ns

module mac_array 
#( parameter DIM = 2,
   parameter LEN = 16,
   parameter PSUM_WIDTH  = 32
)
(
    input  logic                     clk,
    input  logic                     nrst,
    input  logic                     load_weight,
    input  logic                     clear_psum,
    input  logic [LEN-1:0]          ain  [0:DIM-1],
    input  logic [LEN-1:0]          win  [0:DIM-1],
    input  logic [PSUM_WIDTH-1:0]   cin  [0:DIM-1],
    output logic [LEN-1:0]          aout [0:DIM-1],
    output logic [PSUM_WIDTH-1:0]   cout [0:DIM-1]
);

    // -------------------------
    // All signal declarations first
    // -------------------------
    logic [LEN-1:0]        ain_skewed [0:DIM-1];
    logic                  lw_skewed  [0:DIM-1];
    logic [DIM-2:0]        lw_pipe;

    logic [LEN-1:0]        a_sig    [0:DIM-1][0:DIM-1];
    logic [LEN-1:0]        w_sig    [0:DIM-1][0:DIM-1];
    logic [PSUM_WIDTH-1:0] psum_sig [0:DIM-1][0:DIM-1];

    // -------------------------
    // Activation skew
    // -------------------------
    assign ain_skewed[0] = ain[0];

    genvar s, d;
    generate
        for (s = 1; s < DIM; s++) begin : skew_row
            logic [LEN-1:0] ain_skew_chain [0:s-1];

            always_ff @(posedge clk, negedge nrst) begin
                if (!nrst) ain_skew_chain[0] <= '0;
                else       ain_skew_chain[0] <= ain[s];
            end

            for (d = 1; d < s; d++) begin : skew_chain_stage
                always_ff @(posedge clk, negedge nrst) begin
                    if (!nrst) ain_skew_chain[d] <= '0;
                    else       ain_skew_chain[d] <= ain_skew_chain[d-1];
                end
            end

            assign ain_skewed[s] = ain_skew_chain[s-1];
        end
    endgenerate

    // Replace lw_pipe and the lw_assign generate entirely with this:
    //logic lw_skewed [0:DIM-1];
    logic lw_d1;   // load_weight delayed 1 cycle
    logic lw_d2;   // load_weight delayed 2 cycles — add more for larger DIM

    always_ff @(posedge clk, negedge nrst) begin
        if (!nrst) begin
            lw_d1 <= '0;
            lw_d2 <= '0;
        end else begin
            lw_d1 <= load_weight;
            lw_d2 <= lw_d1;
        end
    end

    assign lw_skewed[0] = load_weight;
    assign lw_skewed[1] = lw_d1;
    // assign lw_skewed[2] = lw_d2;  // uncomment for DIM=3
    // etc.

    // -------------------------
    // MAC array
    // -------------------------
    genvar i, j;
    generate
        for (i = 0; i < DIM; i++) begin : row
            for (j = 0; j < DIM; j++) begin : col

                logic [LEN-1:0]        a_in_local;
                logic [LEN-1:0]        w_in_local;
                logic [PSUM_WIDTH-1:0] psum_in_local;
                logic [PSUM_WIDTH-1:0] psum_pipe1;

                assign a_in_local = (j == 0) ? ain_skewed[i] : a_sig[i][j-1];
                assign w_in_local = (i == 0) ? win[j] : w_sig[i-1][j];

                if (i == 0) begin
                    assign psum_in_local = cin[j];
                end
                else begin
                    always_ff @(posedge clk, negedge nrst) begin
                        if (!nrst) psum_pipe1 <= '0;
                        else       psum_pipe1 <= psum_sig[i-1][j];
                    end
                    assign psum_in_local = psum_pipe1;
                end

                mac #(.LEN(LEN), .PSUM_WIDTH(PSUM_WIDTH)) mac_inst (
                    .clk         (clk),
                    .nrst        (nrst),
                    .load_weight (lw_skewed[i]),
                    .clear_psum  (clear_psum),
                    .a_in        (a_in_local),
                    .w_in        (w_in_local),
                    .psum_in     (psum_in_local),
                    .a_out       (a_sig[i][j]),
                    .psum_out    (psum_sig[i][j]),
                    .w_out       (w_sig[i][j])
                );
            end
        end
    endgenerate

    // -------------------------
    // Outputs
    // -------------------------
    always_comb begin
        for (int k = 0; k < DIM; k++)
            cout[k] = psum_sig[DIM-1][k];
    end

    always_comb begin
        for (int k = 0; k < DIM; k++)
            aout[k] = a_sig[k][DIM-1];
    end

endmodule