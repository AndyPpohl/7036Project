
`timescale 1ns/1ns

module top_ws_tb;

  // ===========================================================================
  // Parameters Instantiation
  // ===========================================================================
  parameter DIM   = 4;
  parameter DATAW = 8;
  //parameter PSUMW = 2*DATAW + 4
  parameter PSUMW = 32;
  parameter PERIOD = 10;

  // Latency must match skewer_ws localparam
  parameter LATENCY = 3 * DIM - 2;

  // ===========================================================================
  // DUT signals
  // ===========================================================================
  logic                     clk    = 0;
  logic                     rst_n  = 0;
  logic signed [DATAW-1:0] A  [0:DIM-1][0:DIM-1];
  logic signed [DATAW-1:0] B [0:DIM-1][0:DIM-1];
  logic signed [PSUMW-1:0] C          [0:DIM-1][0:DIM-1];
  logic done;
  logic weight_load;
  logic activation;
  logic out_skew_done;

  //set up the clock
  always #(PERIOD/2) clk++;



  top_ws #(
    .DIM(DIM),
    .DATAW(DATAW),
    .PSUMW(PSUMW)
  ) dut (
    .clk         (clk),
    .rst_n       (rst_n),

    .weight_load(weight_load),
    .activation(activation),
    
    .A(A),
    .B(B),
    .C(C),
    
    .done(done),
    .out_skew_done(out_skew_done)
);




task reset_dut;
begin
    rst_n       = 0;
    #(PERIOD);
    @(posedge clk);
    rst_n = 1;
    $display("[%0t] Reset released.", $time);
end
endtask

task load_weights;
    begin
      $display("[%0t] Loading weights (matrix B).", $time);
      @(posedge clk); #1;
      weight_load = 1;
      @(posedge clk); #1;
      weight_load = 0;
      $display("[%0t] Weights loaded.", $time);
    end
endtask


task compute_expected (
    input  logic signed [DATAW-1:0] A_in [0:DIM-1][0:DIM-1],
    input  logic signed [DATAW-1:0] B_in [0:DIM-1][0:DIM-1],
    output logic signed [PSUMW-1:0] C_expected [0:DIM-1][0:DIM-1]
);
    integer r, c, k;
    begin
        for (r = 0; r < DIM; r++) begin
            for (c = 0; c < DIM; c++) begin
                C_expected[r][c] = '0;
                for (k = 0; k < DIM; k++) begin
                    C_expected[r][c] += A_in[r][k] * B_in[k][c];
                end
            end
        end
    end
endtask



task check_results (
    input logic signed [PSUMW-1:0] C_actual   [0:DIM-1][0:DIM-1],
    input logic signed [PSUMW-1:0] C_expected [0:DIM-1][0:DIM-1]
);
    integer r, c;
    integer errors;
    begin
        errors = 0;
        $display("\n[%0t] --- Result Check ---", $time);

        for (r = 0; r < DIM; r++) begin
            for (c = 0; c < DIM; c++) begin
                if (C_actual[r][c] !== C_expected[r][c]) begin
                    $display("  MISMATCH at C[%0d][%0d]: got %0d, expected %0d",
                             r, c, C_actual[r][c], C_expected[r][c]);
                    errors++;
                end
            end
        end

        if (errors == 0)
            $display("  PASS — all %0d outputs match.\n", DIM*DIM);
        else
            $display("  FAIL — %0d mismatches found.\n", errors);
    end
endtask


logic signed [DATAW-1:0] A1 [0:DIM-1][0:DIM-1];
logic signed [DATAW-1:0] A2 [0:DIM-1][0:DIM-1];
logic signed [DATAW-1:0] A3 [0:DIM-1][0:DIM-1];
logic signed [DATAW-1:0] A4 [0:DIM-1][0:DIM-1];
logic signed [DATAW-1:0] A5 [0:DIM-1][0:DIM-1];

logic signed [PSUMW-1:0] C1_expected [0:DIM-1][0:DIM-1];
logic signed [PSUMW-1:0] C2_expected [0:DIM-1][0:DIM-1];
logic signed [PSUMW-1:0] C3_expected [0:DIM-1][0:DIM-1];
logic signed [PSUMW-1:0] C4_expected [0:DIM-1][0:DIM-1];
logic signed [PSUMW-1:0] C5_expected [0:DIM-1][0:DIM-1];

logic signed [DATAW-1:0] val;

initial begin

    $dumpfile("outputs/wave.vcd");
    $dumpvars(0, top_ws_tb);


    val = DIM * DIM;

    for (int i = 0; i < DIM; i++)
      for (int j = 0; j < DIM; j++) begin
        A1[i][j] = DATAW'(i*DIM + j + 1);
        B[i][j] = DATAW'(i*DIM + j + 1);

        if(i == j) begin
            A2[i][j] = DATAW'(i + 1);
        end

        A3[i][j] = DATAW'(1);

        A4[i][j] = val;
        val = val - 1;

        A5[i][j] = DATAW'($urandom_range(100, 0));
      end



    reset_dut;
    compute_expected(A1, B, C1_expected);
    compute_expected(A2, B, C2_expected);
    compute_expected(A3, B, C3_expected);
    compute_expected(A4, B, C4_expected);
    compute_expected(A5, B, C5_expected);

    load_weights;

    fork
      begin : feed_thread1
        //@(posedge clk); #1;
        A = A1;
        activation = 1;
        @(posedge clk); #1;
        activation = 0;
        @(posedge out_skew_done);
        
        A = A2;
        activation = 1;
        @(posedge clk); #1;
        activation = 0;  
        @(posedge out_skew_done);
        
        A = A3;
        activation = 1;
        @(posedge clk); #1;
        activation = 0;
        @(posedge out_skew_done);

        A = A4;
        activation = 1;
        @(posedge clk); #1;
        activation = 0;  
        @(posedge out_skew_done);
        
        A = A5;
        activation = 1;
        @(posedge clk); #1;
        activation = 0;  
        @(posedge out_skew_done);
        
      end
      begin : capture_thread1
        @(posedge done);
        check_results(C, C1_expected);

        @(posedge done); #1;  
        check_results(C, C2_expected);

        @(posedge done); #1; 
        check_results(C, C3_expected);

        @(posedge done); #1; 
        check_results(C, C4_expected);

        @(posedge done); #1; 
        check_results(C, C5_expected);
      end
    join

    $finish;
end

endmodule