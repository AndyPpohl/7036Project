`timescale 1ns/1ns

module test(
    input logic clk
);

  always_ff @(posedge clk) begin
    $display("Clock tick at time %0t", $time);
  end

endmodule