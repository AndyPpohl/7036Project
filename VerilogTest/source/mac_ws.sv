// =============================================================================
// mac_ws.v — Weight-Stationary MAC Unit (Processing Element)
// =============================================================================
// Description:
//   A single weight-stationary processing element for use in a DIMxDIM
//   systolic array performing C = A * B (matrix multiplication).
//
// Weight-Stationary dataflow:
//   - weight    : pre-loaded once via load_weight / weight_in; held fixed
//   - in_a      : activation input, passes through (left → right) each cycle
//   - in_psum   : partial sum input from the PE above (top → bottom)
//   - out_psum  : accumulated result passed to the PE below
//
// Bit-widths:
//   - DATAW    : width of activations and weights (default 8)
//   - PSUMW    : width of partial sums; must be wide enough to hold the
//                 full accumulated result: DATAW*2 + $clog2(DIM) extra bits
//                 Caller is responsible for setting PSUMW appropriately.
//                 Default matches the top-level: 2*DATAW + clog2(DIM).
//
// Interface:
//   clk         — system clock (rising-edge triggered)
//   rst_n       — active-low synchronous reset
//   load_weight — when high for one cycle, latches weight_in into the PE
//   weight_in   — weight value to be stored
//   in_a        — activation flowing left → right
//   out_a       — registered copy of in_a (passes to the next PE on the right)
//   in_psum     — partial sum arriving from the PE above (or 0 for top row)
//   out_psum    — accumulated partial sum leaving to the PE below
// =============================================================================
`timescale 1ns/1ns

module mac_ws #(
    parameter DATAW = 8,
   //parameter PSUMW = 2*DATAW + 4
    parameter PSUMW = 32
)(
    input  logic                  clk,
    input  logic                  rst_n,       // active-low synchronous reset

    // Weight loading (done once before the computation starts)
    input  logic                  load_weight,
    input  logic  [DATAW-1:0]     weight_in,

    // Activation datapath (horizontal, left → right)
    input  logic  [DATAW-1:0]     in_a,
    output logic  [DATAW-1:0]     out_a,

    // Partial-sum datapath (vertical, top → bottom)
    input  logic  [PSUMW-1:0]     in_psum,
    output logic  [PSUMW-1:0]     out_psum
);

    // -------------------------------------------------------------------------
    // Stored weight register
    // -------------------------------------------------------------------------
    logic [DATAW-1:0] weight_reg;

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
    // Datapath: accumulate and pass activation
    //
    //   out_psum <= in_psum + weight * in_a   (MAC)
    //   out_a    <= in_a                       (pipeline register)
    //
    // Both are registered on the same rising edge so that latency through the
    // array is uniform (one cycle per PE in each direction).
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