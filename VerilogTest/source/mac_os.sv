`timescale 1ns/1ns

module mac_os #(
    parameter DATAW = 8,
    parameter PSUMW = 32
)(
    input  logic                        clk,
    input  logic                        rst_n,

    input  logic signed [DATAW-1:0]     in_w,
    output logic signed [DATAW-1:0]     out_w,

    input  logic signed [DATAW-1:0]     in_a,
    output logic signed [DATAW-1:0]     out_a,

    // Partial sum control
    input  logic                        clear,   // reset accumulations for new matrix
    input  logic                        drain,   // signal to tell psum to pass down
    output logic signed [PSUMW-1:0]     out_psum // psum output for when drain is asserted
);


    logic signed [PSUMW-1:0] psum_reg;

    always @(posedge clk) begin
        if (!rst_n || clear) begin
            psum_reg <= {PSUMW{1'b0}};
        end else begin
            psum_reg <= psum_reg + PSUMW'(in_w * in_a);
        end
    end


    always @(posedge clk) begin
        if (!rst_n) begin
            out_a <= {DATAW{1'b0}};
            out_w <= {DATAW{1'b0}};
        end else begin
            out_a <= in_a;
            out_w <= in_w;
        end
    end

    always_comb begin
        if(drain) begin
            out_psum = psum_reg;
        end
        else begin
            out_psum = {PSUMW{1'b0}};
        end
    end
    
endmodule