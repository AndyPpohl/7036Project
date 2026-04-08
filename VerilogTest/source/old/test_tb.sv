`timescale 1ns/1ns

module test_tb;

  logic clk = 0;

  test uut(.clk(clk));

  // Clock generator
  always #5 clk = ~clk;

  initial begin
    $dumpfile("outputs/wave.vcd");
    $dumpvars(0, test_tb);

    #100;
    $finish;
  end

endmodule