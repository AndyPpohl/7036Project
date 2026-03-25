`timescale 1ns/1ns

module mac_array_tb;
    
    parameter DIM = 4;
    parameter PERIOD = 10;
    parameter SIZE = DIM - 1;

    logic clk = 0;
    logic nrst = 0;

    logic [7:0] ain  [0:SIZE];
    logic [7:0] weights  [0:SIZE][0:SIZE];
    logic [7:0] cin  [0:SIZE];

    logic [7:0] aout [0:SIZE];
    logic [7:0] cout [0:SIZE];

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
        input [7:0] a0, a1, a2, a3,
        input [7:0] c0, c1, c2, c3
    );
    begin
        ain[0] = a0; ain[1] = a1; ain[2] = a2; ain[3] = a3;
        cin[0] = c0; cin[1] = c1; cin[2] = c2; cin[3] = c3;
    end
    endtask

    task init_random_weights;
        for (int i = 0; i < DIM; i++)
            for (int j = 0; j < DIM; j++)
                weights[i][j] = 8'(i*DIM + j + 1); 
    endtask

    /*
    task apply_inputs( 
        input [7:0] a_vec [0:SIZE], 
        input [7:0] c_vec [0:SIZE]
    );
        for (int i = 0; i < DIM; i++) 
        begin
            a_in[i] = a_vec[i];
            cin_in[i] = cin_vec[i];
        end

        // Display outputs
        $display("Cycle outputs:");
        for (int i = 0; i < DIM; i++)
        begin
            $display("Row %0d: a_out=%0d, cout_out=%0d", i, a_out[i], cout_out[i]);
        end
        $display("----------------------------");
    endtask
    */
    task display_outputs;
    begin
        $display("---- OUTPUTS ----");
        for (int i = 0; i < DIM; i++) begin
            $display("Row %0d: aout=%0d cout=%0d", i, aout[i], cout[i]);
        end
        $display("-----------------");
    end
    endtask

    initial begin
        $dumpfile("outputs/wave.vcd");
        $dumpvars(0, mac_array_tb);

        init_random_weights();
        RESETDUT;

        // Cycle 1
        set_inputs(0,1,2,3,  8,7,6,5);
        #(PERIOD);
        display_outputs();

        // Cycle 2
        set_inputs(4,5,6,7,  5,4,3,2);
        #(PERIOD);
        display_outputs();

        // Cycle 3
        set_inputs(8,9,10,11,  1,2,3,4);
        #(PERIOD);
        display_outputs();

        #(PERIOD);

        $finish;
    end

endmodule