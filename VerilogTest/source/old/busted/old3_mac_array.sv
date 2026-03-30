/*
`timescale 1ns/1ns

module mac_array 
#( parameter DIM = 2,
   parameter LEN = 16,
   parameter PSUM_WIDTH  = 32
)
(
    input  logic                     clk,
    input  logic                     nrst,

    // Control
    input  logic                     load_weight,   // high during weight preload
    input  logic                     clear_psum,    // pulse at start of matmul

    // Streamed inputs
    input  logic [LEN-1:0]          ain  [0:DIM-1],          // one row of A per cycle
    input  logic [LEN-1:0]          win  [0:DIM-1][0:DIM-1], // static weight matrix
    input  logic [PSUM_WIDTH-1:0]   cin  [0:DIM-1],          // top psum inputs (often 0)

    // Outputs
    output logic [LEN-1:0]          aout [0:DIM-1],          // right edge A (for debug)
    output logic [PSUM_WIDTH-1:0]   cout [0:DIM-1]           // bottom row psums = C row
);

    // Internal systolic wires
    logic [LEN-1:0] a_sig    [0:DIM-1][0:DIM-1];
    logic [PSUM_WIDTH-1:0] psum_reg_sig [0:DIM-1][0:DIM-1];
    logic [PSUM_WIDTH-1:0] forward_sig  [0:DIM-1][0:DIM-1];
    logic [PSUM_WIDTH-1:0] forward_reg_sig  [0:DIM-1][0:DIM-1];

    genvar i, j;
    generate
        for (i = 0; i < DIM; i++) begin : row
            for (j = 0; j < DIM; j++) begin : col

                // A input to this PE
                logic [LEN-1:0] a_in;
                logic [PSUM_WIDTH-1:0] psum_in_local;
                logic [PSUM_WIDTH-1:0] psum_pipe1;
                logic [PSUM_WIDTH-1:0] psum_pipe2;

                // Leftmost column gets external A; others get from left neighbor
                assign a_in = (j == 0) ? ain[i] : a_sig[i][j-1];

                // Top row gets external cin; others get from above neighbor
                //assign psum_in = (i == 0) ? cin[j] : psum_sig[i-1][j];
            
                if(i != 0) begin
                    always_ff @(posedge clk, negedge nrst) begin
                        if(!nrst) psum_pipe1 <= '0;
                        else psum_pipe1 <= psum_reg_sig[i-1][j];
                    end
                    assign psum_in_local = psum_pipe1;
                end
                else begin
                    assign psum_in_local = cin[j];
                end

                mac #(.LEN(LEN), .PSUM_WIDTH(PSUM_WIDTH)) mac_inst (
                    .clk        (clk),
                    .nrst       (nrst),
                    .load_weight(load_weight),
                    .clear_psum (clear_psum),
                    .a_in       (a_in),
                    .w_in       (win[i][j]),   // latched only when load_weight=1
                    .psum_in    (psum_in_local),
                    .a_out      (a_sig[i][j]),
                    .psum_out   (psum_reg_sig[i][j]),
                    .forward_psum (forward_sig[i][j]),
                    .forward_reg_out(forward_reg_sig[i][j])
                );

            end
        end
    endgenerate

    // Right edge A (optional)
    always_comb begin
        for (int i = 0; i < DIM; i++) begin
            aout[i] = a_sig[i][DIM-1];
        end
    end

    // Bottom row psums are your C row
    always_comb begin
        for (int j = 0; j < DIM; j++) begin
            cout[j] = psum_reg_sig[DIM-1][j];
        end
    end

endmodule
*/