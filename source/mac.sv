`timescale 1ns/1ns

module mac(
    input logic clk, reset,
    input logic [3:0] a, b, cin,
    output logic [3:0]cout
);

always_ff @(posedge clk, negedge reset) begin
    if(reset == 1) begin
        cout <= 0;
    end
    else begin
        cout <= cin * (a + b);
    end
end


endmodule 