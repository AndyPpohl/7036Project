/*
`timescale 1ns/1ns

module mac_array_tb_old;
    
    parameter DIM = 4;
    parameter PERIOD = 10;
    parameter SIZE = DIM - 1;

    logic clk = 0;
    logic nrst = 1;

    logic [15:0] ain  [0:SIZE];
    logic [15:0] weights  [0:SIZE][0:SIZE];
    logic [15:0] cin  [0:SIZE];

    logic [15:0] aout [0:SIZE];
    logic [15:0] cout [0:SIZE];

    logic [15:0] a_vec_cycle0 [0:DIM-1] = '{0, 1, 2, 3};
    logic [15:0] c_vec_cycle0 [0:DIM-1] = '{0, 1, 2, 3};

    logic [15:0] a_vec_cycle1 [0:DIM-1] = '{4, 5, 6, 7};
    logic [15:0] c_vec_cycle1 [0:DIM-1] = '{4, 5, 6, 7};

    logic [15:0] a_vec_cycle2 [0:DIM-1] = '{8, 9, 10, 11};
    logic [15:0] c_vec_cycle2 [0:DIM-1] = '{8, 9, 10, 11};

    //clock gen
    always #(PERIOD/2) clk++;

    mac_array #(.DIM(DIM)) dut (
        .clk(clk),
        .nrst(nrst),
        .ain(ain),
        .cin(cin),
        .win(weights),
        .aout(aout),
        .cout(cout)
    );

    task RESETDUT;
    begin
        nrst = 0;
        #(PERIOD);
        @(posedge clk);
        nrst = 1;
    end
    endtask

    task set_inputs(
        input [15:0] a0, a1, a2, a3,
        input [15:0] c0, c1, c2, c3
    );
    begin
        ain[0] = a0; ain[1] = a1; ain[2] = a2; ain[3] = a3;
        cin[0] = c0; cin[1] = c1; cin[2] = c2; cin[3] = c3;
    end
    endtask

    task set_inputs_array(
        input logic [15:0] a_vec [0:DIM-1],
        input logic [15:0] c_vec [0:DIM-1]
    );
    begin
        for (int i = 0; i < DIM; i++) begin
            ain[i] = a_vec[i];
            cin[i] = c_vec[i];
        end
    end
    endtask

    task init_random_weights;
        for (int i = 0; i < DIM; i++)
            for (int j = 0; j < DIM; j++)
                weights[i][j] = 16'(i*DIM + j + 1); 
    endtask


    task display_outputs;
    begin
        $display("---- OUTPUTS ----");
        for (int i = 0; i < DIM; i++) begin
            $display("Row %0d: aout=%0d, cout=%0d", i, aout[i], cout[i]);
        end
        $display("-----------------");
    end
    endtask

    initial begin
        $dumpfile("outputs/wave.vcd");
        $dumpvars(0, mac_array_tb);

        init_random_weights;

        set_inputs_array(a_vec_cycle0, c_vec_cycle0);
        #(PERIOD);
        display_outputs();

        set_inputs_array(a_vec_cycle1, c_vec_cycle1);
        #(PERIOD);
        display_outputs();

        set_inputs_array(a_vec_cycle2, c_vec_cycle2);
        #(PERIOD);
        display_outputs();

        for (int extra = 0; extra < DIM; extra++) begin
            #(PERIOD * DIM);
            display_outputs();
        end
        
        $finish;
    end

endmodule
*/