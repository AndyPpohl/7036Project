/*
`timescale 1ns/1ns

module old2_mac_array 
#( parameter DIM = 4 )
(
    input  logic clk,  nrst,
    input  logic [15:0] ain  [0:(DIM-1)],
    //input  logic [15:0] bin   [0:(DIM-1)][0:DIM-1],
    input  logic [15:0] win  [0:(DIM-1)][0:(DIM-1)],
    input  logic [15:0] cin  [0:(DIM-1)],
    output logic [15:0] aout [0:(DIM-1)],
    output logic [15:0] cout [0:(DIM-1)]
);

    logic [15:0] a_conn   [0:DIM-1][0:DIM-1];
    logic [15:0] cin_conn [0:DIM-1][0:DIM-1];
    logic [15:0] cout_conn[0:DIM-1][0:DIM-1];
    logic [15:0] b_conn   [0:DIM-1][0:DIM-1];

    logic [31:0] cycle_count;

    always_ff @(posedge clk, negedge nrst) begin
        if (nrst == 0)
            cycle_count <= 0;
        else
            cycle_count <= cycle_count + 1;
    end

    always_ff @(posedge clk, negedge nrst) begin
        if(nrst == 0) begin
            for (int i = 0; i < DIM; i++) begin
                for (int j = 0; j < DIM; j++) 
                begin
                    a_conn[i][j]    <= 0;
                    cin_conn[i][j]  <= 0;
                    cout_conn[i][j] <= 0;
                    b_conn[i][j]    <= 0;
                end
            end
        end
        else begin
            for (int i = 0; i < DIM; i++) begin
                for (int j = 0; j < DIM; j++) 
                begin
                    if(j == 0) begin
                        a_conn[i][j] <= (cycle_count >= i) ? ain[i] : 0;
                    end
                    else begin
                        a_conn[i][j] <= a_conn[i][j-1];
                    end
                    
                    b_conn[i][j] <= win[i][j];

                    if(i == 0) begin
                        cin_conn[i][j] <= (cycle_count >= j) ? cin[j] : 0;
                    end
                    else begin
                        cin_conn[i][j] <= cout_conn[i-1][j];
                    end
                end
            end
        end
    end

    genvar i, j;
    generate
        for (i = 0; i < DIM; i++) begin : row
            for (j = 0; j < DIM; j++) begin : col
                mac mac_inst (
                    .clk(clk),
                    .nrst(nrst),
                    .a(a_conn[i][j]),
                    .b(b_conn[i][j]),
                    .cin(cin_conn[i][j]),
                    .cout(cout_conn[i][j])
                );
            end
        end
    endgenerate

    always_comb begin
        for (int i = 0; i < DIM; i++) begin
            aout[i] = a_conn[i][DIM-1];        // last column
            cout[i] = cout_conn[DIM-1][i];     // last row
        end
    end

endmodule
*/