/*
`timescale 1ns/1ns

module mac_tb;

  logic clk = 0;
  logic nrst = 0;
  logic [7:0] a, b, cin;
  logic [7:0] cout;


  parameter PERIOD = 10;

  always #(PERIOD/2) clk++;

//word_t add = 32'00000000011100110000001010110011;
  mac dut(.clk(clk), .nrst(nrst), .a(a), .b(b), .cin(cin), .cout(cout));
  
  task nrst_dut;
    begin
      nrst = 0;
      #(PERIOD);
      @(posedge clk);
      nrst = 1;
    end
  endtask

  task macop(input [7:0] at,input [7:0] bt,input [7:0] cint);
    begin
      a = at;
      b = bt;
      cin = cint;
      $display("Performing MAC: (%0d) * (%0d + %0d)\n", cint, at, bt);
      #(PERIOD);
      $display("Output of MAC: %0d\n", cout);
    end
  endtask

  initial begin
    $dumpfile("outputs/wave.vcd");
    $dumpvars(0, mac_tb);

    nrst_dut;

    #(PERIOD);
    macop(1,2,3);
    macop(5,6,3);
    macop(12,4,7);
    macop(20,6,9);
    macop(21,9,11);
    #(PERIOD);

    
    $finish;
  end

endmodule
*/