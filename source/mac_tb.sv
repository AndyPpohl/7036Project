`timescale 1ns/1ns

module mac_tb;

  logic clk = 0;
  logic reset = 0;
  logic [3:0] a, b, cin;
  logic [3:0] cout;


  mac dut(.clk(clk), .reset(reset), .a(a), .b(b), .cin(cin), .cout(cout));

  // Clock generator
  always #5 clk = ~clk;
  initial begin
    $dumpfile("outputs/wave.vcd");
    $dumpvars(0, mac_tb);

    reset = 1;
    a = 0;
    b = 0;
    cin = 0;

    #5 
    reset = 1;
    #5
    reset = 0;
    #5
    a = 1;
    b = 2;
    cin = 3;
    #5
    a = 1;
    b = 5;
    cin = 6;
    #30


    
    $finish;
  end

endmodule