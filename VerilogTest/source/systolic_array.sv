`timescale 1ns/1ns

module systolic_array #(
    parameter DIM   = 32,
    parameter DATAW = 8,
    //parameter PSUMW = 2*DATAW + 4
    parameter PSUMW = 32
)(
    input  logic                          clk,
    input  logic                          rst_n,

    input  logic                          load_weight,
    input  logic [DIM*DIM*DATAW-1:0]     weights_in,

    input  logic [DIM*DATAW-1:0]         in_a,

    // Bottom row only: out_psum[col] = p_logic[DIM][col]
    output logic [DIM*PSUMW-1:0]         out_psum
);

    // -------------------------------------------------------------------------
    // Internal interconnect
    // -------------------------------------------------------------------------
    logic [DATAW-1:0] a_wire [0:DIM-1][0:DIM];
    logic [PSUMW-1:0] p_wire [0:DIM][0:DIM-1];

    genvar row, col;

    // -------------------------------------------------------------------------
    // Boundary conditions
    // -------------------------------------------------------------------------
    generate
        for (row = 0; row < DIM; row++) begin : gen_act_input
            assign a_wire[row][0] = in_a[(row+1)*DATAW-1 -: DATAW];
        end

        for (col = 0; col < DIM; col++) begin : gen_psum_top
            assign p_wire[0][col] = {PSUMW{1'b0}};
        end
    endgenerate

    // -------------------------------------------------------------------------
    // PE array
    // -------------------------------------------------------------------------
    generate
        for (row = 0; row < DIM; row++) begin : gen_row
            for (col = 0; col < DIM; col++) begin : gen_col

                mac_ws #(
                    .DATAW (DATAW),
                    .PSUMW (PSUMW)
                ) u_mac (
                    .clk         (clk),
                    .rst_n       (rst_n),
                    .load_weight (load_weight),
                    .weight_in   (weights_in[((row*DIM + col)+1)*DATAW-1 -: DATAW]),
                    .in_a        (a_wire[row][col]),
                    .out_a       (a_wire[row][col+1]),
                    .in_psum     (p_wire[row][col]),
                    .out_psum    (p_wire[row+1][col])
                );

            end
        end
    endgenerate

    // -------------------------------------------------------------------------
    // Output: bottom row only
    // -------------------------------------------------------------------------
    generate
        for (col = 0; col < DIM; col++) begin : gen_output
            assign out_psum[(col+1)*PSUMW-1 -: PSUMW] = p_wire[DIM][col];
        end
    endgenerate

endmodule