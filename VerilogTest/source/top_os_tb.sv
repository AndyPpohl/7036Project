`timescale 1ns/1ns

module top_os_tb;

  // ===========================================================================
  // Parameters + Internal Signal
  // ===========================================================================
  parameter DIM       = 4;
  parameter DATAW     = 8;
  parameter PSUMW     = 32;
  parameter PERIOD    = 10;
  parameter NUM_TILES = 4;

  parameter PIPE_DEPTH = 2 * DIM - 1;

  logic                    clk       = 0;
  logic                    rst_n     = 0;
  logic                    activation = 0;
  logic                    last_tile  = 0;
  logic signed [DATAW-1:0] A [0:DIM-1][0:DIM-1];
  logic signed [DATAW-1:0] B [0:DIM-1][0:DIM-1];
  logic signed [PSUMW-1:0] C [0:DIM-1][0:DIM-1];
  logic done;
  logic out_skew_done;

  always #(PERIOD/2) clk++;

  top_os #(
    .DIM      (DIM),
    .DATAW    (DATAW),
    .PSUMW    (PSUMW),
    .NUM_TILES(NUM_TILES)
  ) dut (
    .clk          (clk),
    .rst_n        (rst_n),
    .activation   (activation),
    .last_tile    (last_tile),
    .A            (A),
    .B            (B),
    .C            (C),
    .done         (done),
    .out_skew_done(out_skew_done)
  );

  // ===========================================================================
  // Tasks
  // ===========================================================================
  task reset_dut;
  begin
    rst_n = 0;
    #(PERIOD);
    @(posedge clk);
    rst_n = 1;
    $display("[%0t] Reset released.", $time);
  end
  endtask


  task send_tile(
    input logic signed [DATAW-1:0] A_tile [0:DIM-1][0:DIM-1],
    input logic signed [DATAW-1:0] B_tile [0:DIM-1][0:DIM-1],
    input logic                    is_last
  );
  begin
    A          = A_tile;
    B          = B_tile;
    activation = 1'b1;
    last_tile  = is_last;
    @(posedge clk); #1;
    activation = 1'b0;
    last_tile  = 1'b0;
    @(posedge out_skew_done);
  end
  endtask

  task compute_expected (
    ref logic signed [DATAW-1:0] A_in       [0:DIM-1][0:DIM-1],
    ref logic signed [DATAW-1:0] B_in       [0:DIM-1][0:DIM-1],
    ref logic signed [PSUMW-1:0] C_expected [0:DIM-1][0:DIM-1]
  );
    integer r, c, k;
    begin
      for (r = 0; r < DIM; r++)
        for (c = 0; c < DIM; c++) begin
          C_expected[r][c] = '0;
          for (k = 0; k < DIM; k++)
            C_expected[r][c] += A_in[r][k] * B_in[k][c];
        end
    end
  endtask

  task check_results (
    ref logic signed [PSUMW-1:0] C_actual   [0:DIM-1][0:DIM-1],
    ref logic signed [PSUMW-1:0] C_expected [0:DIM-1][0:DIM-1]
  );
    integer r, c;
    integer errors;
    begin
      errors = 0;
      $display("\n[%0t] --- Result Check ---", $time);
      for (r = 0; r < DIM; r++)
        for (c = 0; c < DIM; c++)
          if (C_actual[r][c] !== C_expected[r][c]) begin
            $display("  MISMATCH at C[%0d][%0d]: got %0d, expected %0d",
                     r, c, C_actual[r][c], C_expected[r][c]);
            errors++;
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

  logic signed [DATAW-1:0] B1 [0:DIM-1][0:DIM-1];
  logic signed [DATAW-1:0] B2 [0:DIM-1][0:DIM-1];
  logic signed [DATAW-1:0] B3 [0:DIM-1][0:DIM-1];

  logic signed [PSUMW-1:0] C1_expected [0:DIM-1][0:DIM-1];
  logic signed [PSUMW-1:0] C2_expected [0:DIM-1][0:DIM-1];
  logic signed [PSUMW-1:0] C3_expected [0:DIM-1][0:DIM-1];

  logic signed [PSUMW-1:0] C4_expected [0:DIM-1][0:DIM-1];
  logic signed [PSUMW-1:0] C5_expected [0:DIM-1][0:DIM-1];
  logic signed [PSUMW-1:0] C6_expected [0:DIM-1][0:DIM-1];

  logic signed [PSUMW-1:0] C_tmp1 [0:DIM-1][0:DIM-1];
  logic signed [PSUMW-1:0] C_tmp2 [0:DIM-1][0:DIM-1];
  logic signed [PSUMW-1:0] C_tmp3 [0:DIM-1][0:DIM-1];

  // ===========================================================================
  // Actual test run
  // ===========================================================================
  initial begin

    $dumpfile("outputs/wave.vcd");
    $dumpvars(0, top_os_tb);

    activation = 0;
    last_tile  = 0;

    //building matrices
    for (int i = 0; i < DIM; i++)
      for (int j = 0; j < DIM; j++) begin
        A1[i][j] = DATAW'(i * DIM + j + 1);
        B1[i][j] = DATAW'(i * DIM + j + 1);

        A2[i][j] = (i == j) ? DATAW'(1) : DATAW'(0); 
        B2[i][j] = DATAW'(i * DIM + j + 1);

        A3[i][j] = DATAW'($urandom_range(10, 1));
        B3[i][j] = DATAW'($urandom_range(10, 1));
      end

    reset_dut;

    compute_expected(A1, B1, C1_expected);
    compute_expected(A2, B2, C2_expected);
    compute_expected(A3, B3, C3_expected);

    compute_expected(A1, B1, C_tmp1);
    compute_expected(A1, B2, C_tmp2);
    compute_expected(A1, B3, C_tmp3);

    for (int i = 0; i < DIM; i++) begin 
        for (int j = 0; j < DIM; j++) begin 
            C4_expected[i][j] = C_tmp1[i][j] + C_tmp2[i][j] + C_tmp3[i][j];
        end 
    end

    compute_expected(A2, B1, C_tmp1);
    compute_expected(A2, B2, C_tmp2);
    compute_expected(A2, B3, C_tmp3);

    for (int i = 0; i < DIM; i++) begin
      for (int j = 0; j < DIM; j++) begin 
        C5_expected[i][j] = C_tmp1[i][j] + C_tmp2[i][j] + C_tmp3[i][j];
      end
    end

    compute_expected(A3, B1, C_tmp1);
    compute_expected(A3, B2, C_tmp2);
    compute_expected(A3, B3, C_tmp3);

    for (int i = 0; i < DIM; i++) begin
      for (int j = 0; j < DIM; j++) begin 
        C6_expected[i][j] = C_tmp1[i][j] + C_tmp2[i][j] + C_tmp3[i][j];
      end
    end

    // --------------------------------------------------------
    // Test 1 — single tile multiply, A1 x B1
    // --------------------------------------------------------
    $display("[%0t] Starting Test 1: A1 x B1", $time);
    fork
      begin : feed_t1
        send_tile(A1, B1, 1'b1);
      end
      begin : capture_t1
        @(posedge done);
        check_results(C, C1_expected);
      end
    join
    
    // --------------------------------------------------------
    // Test 2 — identity matrix
    // --------------------------------------------------------
    $display("[%0t] Starting Test 2: A2 x B2 (identity)", $time);
    fork
      begin : feed_t2
        send_tile(A2, B2, 1'b1);
      end
      begin : capture_t2
        @(posedge done);
        check_results(C, C2_expected);
      end
    join

    // --------------------------------------------------------
    // Test 3 — random matrices
    // --------------------------------------------------------
    $display("[%0t] Starting Test 3: A3 x B3 (random)", $time);
    fork
      begin : feed_t3
        send_tile(A3, B3, 1'b1);
      end
      begin : capture_t3
        @(posedge done);
        check_results(C, C3_expected);
      end
    join

    // --------------------------------------------------------
    // Test 4 — multiple arrays in
    // --------------------------------------------------------
    $display("[%0t] Starting Test 4: Multiple arrays into one", $time);
    fork
      begin : feed_t4
        send_tile(A1, B1, 1'b0);
        send_tile(A1, B2, 1'b0);
        send_tile(A1, B3, 1'b1);

        @(posedge done);

        send_tile(A2, B1, 1'b0);
        send_tile(A2, B2, 1'b0);
        send_tile(A2, B3, 1'b1);

        @(posedge done);

        send_tile(A3, B1, 1'b0);
        send_tile(A3, B2, 1'b0);
        send_tile(A3, B3, 1'b1);

        @(posedge done);
      end
      begin : capture_t4
        @(posedge done);
        check_results(C, C4_expected);

        @(posedge done);
        check_results(C, C5_expected);

        @(posedge done);
        check_results(C, C6_expected);
      end
    join
    

    $display("[%0t] All tests complete.", $time);
    $finish;
  end

endmodule