/*
`timescale 1ns/1ns

module mesh_with_delays #(
    parameter DIM = 4,
    parameter LEN = 16
)(
    input  logic                 clk,
    input  logic                 nrst,
    input  logic                 load_weight,
    input  logic                 clear_psum,
    input  logic [LEN-1:0]       ain  [0:DIM-1],
    input  logic [LEN-1:0]       win  [0:DIM-1][0:DIM-1],
    input  logic [LEN-1:0]       din  [0:DIM-1],      // D row
    output logic [LEN-1:0]       cout [0:DIM-1]
);

    // Stationary weights for the mesh
    logic [LEN-1:0] weights [0:DIM-1][0:DIM-1];

    // Inputs to the mesh
    logic [LEN-1:0] ain_mesh [0:DIM-1];
    logic [LEN-1:0] cin_mesh [0:DIM-1];

    // Outputs from the mesh
    logic [LEN-1:0] aout_mesh [0:DIM-1];
    logic [LEN-1:0] cout_mesh [0:DIM-1];

    // Row counter for weight loading
    logic [$clog2(DIM)-1:0] wrow;

    logic [LEN-1:0] A_delayed [0:DIM-1][0:DIM-1];

    always_ff @(posedge clk or negedge nrst) begin
        if (!nrst) begin
            for (int i=0;i<DIM;i++)
                for (int k=0;k<DIM;k++)
                    A_delayed[i][k] <= '0;
        end else begin
            // Row 0 gets A directly
            for (int k=0;k<DIM;k++)
                A_delayed[0][k] <= ain[k];

            // Lower rows get delayed versions
            for (int i=1;i<DIM;i++)
                for (int k=0;k<DIM;k++)
                    A_delayed[i][k] <= A_delayed[i-1][k];
        end
    end
    
    always_comb begin
        for (int i=0;i<DIM;i++)
            ain_mesh[i] = A_delayed[i][0]; // cycle 0 element
    end
    ////////////////////
    logic [LEN-1:0] D_delayed [0:DIM-1][0:DIM-1];

    always_ff @(posedge clk or negedge nrst) begin
        if (!nrst) begin
            for (int i=0;i<DIM;i++)
                for (int k=0;k<DIM;k++)
                    D_delayed[i][k] <= '0;
        end else begin
            for (int k=0;k<DIM;k++)
                D_delayed[0][k] <= din[k];

            for (int i=1;i<DIM;i++)
                for (int k=0;k<DIM;k++)
                    D_delayed[i][k] <= D_delayed[i-1][k];
        end
    end

    always_comb begin
        for (int i=0;i<DIM;i++)
            cin_mesh[i] = D_delayed[i][0];
    end

    mac_array #(
    .DIM(DIM),
    .LEN(LEN)
    ) mesh (
        .clk        (clk),
        .nrst       (nrst),
        .load_weight(load_weight),
        .clear_psum (clear_psum),
        .ain        (ain_mesh),
        //.win        (weights),
        .win        (win),
        .cin        (cin_mesh),
        .aout       (aout_mesh),
        .cout       (cout_mesh)
    );

    always_comb begin
        for (int j=0;j<DIM;j++)
            cout[j] = cout_mesh[j];
    end

endmodule
*/