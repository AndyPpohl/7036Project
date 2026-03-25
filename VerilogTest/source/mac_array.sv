`timescale 1ns/1ns

module mac_array 
#( parameter DIM = 4 )
(
    input  logic clk,  nrst,
    input  logic [7:0] ain  [0:(DIM-1)],
    //input  logic [7:0] bin   [0:(DIM-1)][0:DIM-1],
    input  logic [7:0] win  [0:(DIM-1)][0:(DIM-1)],
    input  logic [7:0] cin  [0:(DIM-1)],
    output logic [7:0] aout [0:(DIM-1)],
    output logic [7:0] cout [0:(DIM-1)]
);

    logic [7:0] a_conn   [0:DIM*DIM-1];
    logic [7:0] b_conn   [0:DIM*DIM-1];
    logic [7:0] cin_conn [0:DIM*DIM-1];
    logic [7:0] cout_conn[0:DIM*DIM-1];

    genvar i, j;
    generate
        for (i = 0; i < DIM; i = i + 1) begin : row
            for (j = 0; j < DIM; j = j + 1) begin : col
                localparam int idx = i*DIM + j;
                mac mac_inst (
                    .clk(clk),
                    .nrst(nrst),
                    .a(a_conn[idx]),
                    .b(b_conn[idx]),
                    .cin(cin_conn[idx]),
                    .cout(cout_conn[idx])
                );
            end
        end
    endgenerate

    always_comb begin
        for (int i = 0; i < DIM; i++) 
        begin
            for(int j = 0; j < DIM; j++) 
            begin
                int idx = (i * DIM) + j;
                if(j == 0) begin
                    a_conn[idx] = ain[i];
                end
                else begin
                    a_conn[idx] = a_conn[(i*DIM) + (j - 1)];
                end
                
                b_conn[idx] = win[i][j];

                if(i == 0) begin
                    cin_conn[idx] = cin[j];
                end
                else begin
                    cin_conn[idx] = cout_conn[((i-1) * DIM) + j];
                end

            end
        end

        for (int i = 0; i < DIM; i++) 
        begin
            aout[i]  = a_conn[i*DIM + (DIM-1)];
            cout[i]  = cout_conn[(DIM-1)*DIM + i];
        end
    end

endmodule