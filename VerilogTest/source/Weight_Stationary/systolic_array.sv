`timescale 1ns/1ns

module systolic_array #(
    parameter DIM   = 4,
    parameter DATAW = 8,
    //parameter PSUMW = 2*DATAW + 4
    parameter PSUMW = 32
)(
    input  logic                     clk,
    input  logic                     rst_n,

    input  logic signed                     load_weight,
    input  logic signed [DIM*DIM*DATAW-1:0] weights_in,

    input  logic signed [DIM*DATAW-1:0]     in_a,

    //outputs just the bottom row
    output logic signed [DIM*PSUMW-1:0]     out_psum
);


    logic signed [DATAW-1:0] a_wire [0:DIM-1][0:DIM];
    logic signed [PSUMW-1:0] psum_wire [0:DIM][0:DIM-1];

    genvar row, col;
    // -------------------------------------------------------------------------
    // Set array boundaries
    // -------------------------------------------------------------------------
    //making sure the array is sized properly (DIMxDIM)
    generate
        for (row = 0; row < DIM; row++) begin : gen_act_input
            assign a_wire[row][0] = in_a[(row+1)*DATAW-1 -: DATAW];
        end

        for (col = 0; col < DIM; col++) begin : gen_psum_top
            assign psum_wire[0][col] = {PSUMW{1'b0}};
        end
    endgenerate

    // -------------------------------------------------------------------------
    // Build array of processing elements
    // -------------------------------------------------------------------------
    generate
        for (row = 0; row < DIM; row++) begin : gen_row
            for (col = 0; col < DIM; col++) begin : gen_col

                mac_ws #(
                    .DATAW (DATAW),
                    .PSUMW (PSUMW)
                ) mac (
                    .clk         (clk),
                    .rst_n       (rst_n),
                    .load_weight (load_weight),
                    .weight_in   (weights_in[((row*DIM + col)+1)*DATAW-1 -: DATAW]),
                    .in_a        (a_wire[row][col]),
                    .out_a       (a_wire[row][col+1]),
                    .in_psum     (psum_wire[row][col]),
                    .out_psum    (psum_wire[row+1][col])
                );

            end
        end
    endgenerate

    // -------------------------------------------------------------------------
    // Outputs from the bottom row of the array
    // -------------------------------------------------------------------------
    generate
        for (col = 0; col < DIM; col++) begin : gen_output
            assign out_psum[(col+1)*PSUMW-1 -: PSUMW] = psum_wire[DIM][col];
        end
    endgenerate

endmodule