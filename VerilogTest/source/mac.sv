`timescale 1ns/1ns

module mac(
    input logic clk, nrst,
    input logic [7:0] a, b, cin,
    output logic [7:0]cout
);

always_ff @(posedge clk, negedge nrst) begin
    if(nrst == 0) begin
        cout <= 0;
    end
    else begin
        cout <= cin * (a + b);
    end
end


endmodule 