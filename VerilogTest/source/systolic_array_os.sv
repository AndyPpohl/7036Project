`timescale 1ns/1ns

module systolic_array_os #(
    parameter DIM   = 14,
    parameter DATAW = 8,
    parameter PSUMW = 32
)(
    input  logic                              clk,
    input  logic                              rst_n,

    // Inputs enter from the left->right
    input  logic signed [DIM*DATAW-1:0]       in_a,

    // Weights enter from the top->bottom
    input  logic signed [DIM*DATAW-1:0]       in_w,

    // Control
    input  logic                              clear,
    input  logic                              drain,

    output logic signed [DIM*DIM*PSUMW-1:0]  out_c
);


    logic signed [DATAW-1:0] a_wire [0:DIM-1][0:DIM];
    logic signed [DATAW-1:0] w_wire [0:DIM][0:DIM-1];

    genvar row, col;

    // -------------------------------------------------------------------------
    // Setting boundaries
    // -------------------------------------------------------------------------
    generate
        for (row = 0; row < DIM; row++) begin : gen_a_input
            assign a_wire[row][0] = in_a[(row+1)*DATAW-1 -: DATAW];
        end

        for (col = 0; col < DIM; col++) begin : gen_w_input
            assign w_wire[0][col] = in_w[(col+1)*DATAW-1 -: DATAW];
        end
    endgenerate


    // -------------------------------------------------------------------------
    // Building DIM x DIM PE array
    // -------------------------------------------------------------------------
    logic signed [PSUMW-1:0] psum_out [0:DIM-1][0:DIM-1];

    generate
        for (row = 0; row < DIM; row++) begin : gen_row
            for (col = 0; col < DIM; col++) begin : gen_col

                mac_os #(
                    .DATAW (DATAW),
                    .PSUMW (PSUMW)
                ) mac (
                    .clk      (clk),
                    .rst_n    (rst_n),
                    .in_a     (a_wire[row][col]),
                    .out_a    (a_wire[row][col+1]),
                    .in_w     (w_wire[row][col]),
                    .out_w    (w_wire[row+1][col]),
                    .clear    (clear),
                    .drain    (drain),
                    .out_psum (psum_out[row][col])
                );

            end
        end
    endgenerate

    // -------------------------------------------------------------------------
    // Map a full pe array into one big flat C value
    // -------------------------------------------------------------------------
    generate
        for (row = 0; row < DIM; row++) begin : gen_out_row
            for (col = 0; col < DIM; col++) begin : gen_out_col
                assign out_c[((row*DIM + col)+1)*PSUMW-1 -: PSUMW] = psum_out[row][col];
            end
        end
    endgenerate

endmodule