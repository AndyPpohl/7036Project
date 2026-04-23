`timescale 1ns/1ns

module mac_ws #(
    parameter DATAW = 8,
   //parameter PSUMW = 2*DATAW + 4
    parameter PSUMW = 32
)(
    input  logic                  clk,
    input  logic                  rst_n,    

    input  logic signed                 load_weight,
    input  logic signed [DATAW-1:0]     weight_in,

    input  logic signed [DATAW-1:0]     in_a,
    output logic signed [DATAW-1:0]     out_a,

    input  logic signed [PSUMW-1:0]     in_psum,
    output logic signed [PSUMW-1:0]     out_psum
);

    // -------------------------------------------------------------------------
    // Stored weight register
    // -------------------------------------------------------------------------
    logic signed [DATAW-1:0] weight_reg;
    
    //weights are registered for weight stationary dataflow
    always @(posedge clk) begin
        if (!rst_n) begin
            weight_reg <= {DATAW{1'b0}};
        end
        else if (load_weight) begin
            //$display("LOADED weight = %0d", weight_in);
            weight_reg <= weight_in;
        end
    end

    // -------------------------------------------------------------------------
    // Perform MAC operation using registered weight
    // -------------------------------------------------------------------------
    always @(posedge clk) begin
        if (!rst_n) begin
            out_a    <= {DATAW{1'b0}};
            out_psum <= {PSUMW{1'b0}};
        end else begin
            //$display("MAC: w=%0d a=%0d in_psum=%0d out_psum=%0d", weight, in_a, in_psum, out_psum);
            out_a    <= in_a;
            out_psum <= in_psum + PSUMW'(weight_reg * in_a);
        end
    end

endmodule