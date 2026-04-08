/*
`timescale 1ns/1ns

module mac #(
    parameter LEN = 16,
    parameter PSUM_WIDTH = 32
)(
    input logic clk, nrst,

    input logic load_weight, clear_psum,

    input logic  [LEN-1:0] a_in, w_in, 
    input logic  [PSUM_WIDTH-1:0] psum_in,

    output logic [LEN-1:0] a_out, w_out,
    output logic [PSUM_WIDTH-1:0] psum_out

);

    logic [LEN-1:0]        weight_reg;
    logic [LEN-1:0]        w_out_reg;
    logic [2*LEN-1:0]      product;
    logic [PSUM_WIDTH-1:0] product_ext;
    logic valid_reg;

    assign product     = a_in * weight_reg;
    assign product_ext = {{(PSUM_WIDTH-2*LEN){1'b0}}, product};
    
    logic [PSUM_WIDTH-1:0] psum_reg;
    logic [LEN-1:0]        a_out_reg;
    
    assign psum_out    = psum_reg;
    assign a_out = a_out_reg;
    assign w_out = w_out_reg;

    always_ff @(posedge clk, negedge nrst) begin
        if (!nrst) begin
            weight_reg <= '0;
            psum_reg   <= '0;
            a_out_reg  <= '0;
            w_out_reg  <= '0;
        end
        else begin
            a_out_reg <= a_in;
            w_out_reg <= w_in;

            if (load_weight)
                weight_reg <= w_in;

            if (clear_psum)
                psum_reg <= psum_in;     
            else
                psum_reg <= psum_in + product_ext;  
        end
    end

endmodule 
*/