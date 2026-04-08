`timescale 1ns/1ns

module top_ws_tb;

  // ===========================================================================
  // Parameters Instantiation
  // ===========================================================================
  parameter DIM   = 14;
  parameter DATAW = 8;
  //parameter PSUMW = 2*DATAW + 4
  parameter PSUMW = 32;
  parameter PERIOD = 10;

  // Latency must match top_ws localparam
  parameter LATENCY = 3*DIM - 2;

  // ===========================================================================
  // DUT signals
  // ===========================================================================
  logic                     clk    = 0;
  logic                     rst_n  = 0;
  logic signed                     load_weight;
  logic signed [DIM*DIM*DATAW-1:0] weights_in;
  logic signed                     start;
  logic signed [DIM*DATAW-1:0]     in_a;
  wire  [DIM*PSUMW-1:0]     out_c;
  //wire                    valid_out;
  logic signed                     row_valid;

  //set up the clock
  always #(PERIOD/2) clk++;

  // ===========================================================================
  // DUT instantiation
  // ===========================================================================
  top_ws #(
    .DIM    (DIM),
    .DATAW (DATAW),
    .PSUMW (PSUMW)
  ) dut (
    .clk         (clk),
    .rst_n       (rst_n),
    .load_weight (load_weight),
    .weights_in  (weights_in),
    .start       (start),
    .in_a        (in_a),
    .out_c       (out_c),
    //.valid_out   (valid_out),
    .row_valid   (row_valid)
  );

  // ===========================================================================
  // Test matrices
  // ===========================================================================
  logic signed [DATAW-1:0] A [0:DIM-1][0:DIM-1];
  logic signed [DATAW-1:0] B [0:DIM-1][0:DIM-1];
  logic signed [PSUMW-1:0] C_expected [0:DIM-1][0:DIM-1];
  logic signed [PSUMW-1:0] C_got      [0:DIM-1][0:DIM-1];

  // ===========================================================================
  // Tasks
  // ===========================================================================

  //Resets the device, just run this when starting the program
  task reset_dut;
    begin
      rst_n       = 0;
      load_weight = 0;
      start       = 0;
      in_a        = '0;
      weights_in  = '0;
      #(PERIOD);
      @(posedge clk);
      rst_n = 1;
      $display("[%0t] Reset released.", $time);
    end
  endtask


  //loads weights into input weight matrix and then tells the system to load
  //new weights in by pulsing the load_weight signal
  task load_weights;
    integer r, c;
    begin
      $display("[%0t] Loading weights (matrix B):", $time);
      for (r = 0; r < DIM; r++) begin
        for (c = 0; c < DIM; c++) begin
          weights_in[((r*DIM + c)+1)*DATAW-1 -: DATAW] = B[r][c];
          //$write("  B[%0d][%0d] = %0d", r, c, B[r][c]);
        end
        //$write("\n");
      end

      @(posedge clk);
      load_weight = 1;
      #(PERIOD);
      load_weight = 0;
      $display("[%0t] Weights loaded.", $time);
    end
  endtask

  // ---------------------------------------------------------------------------
  // run_multiply: clock-aligned streaming of A rows, then flush
  //   - start is asserted on the posedge when column 0 is driven
  //   - each subsequent column is driven on the next posedge
  //   - in_a is zeroed and LATENCY extra clocks are waited for drain
  // ---------------------------------------------------------------------------

  task run_multiply;
    integer k, r;
    begin
      $display("[%0t] Starting matrix multiply, streaming A columns...", $time);

      //Feeds the values of the first row of the input matrix across the columns
      //of the systolic array
      @(posedge clk); #1;
      start = 1;
      for (r = 0; r < DIM; r++)
        in_a[(r+1)*DATAW-1 -: DATAW] = A[0][r];

      //feeds values of all subsequent rows across the subsequent columns
      //the array will basically keep eating all of these values into column 0
      //go until all rows have been properly fed
      for (k = 1; k < DIM; k++) begin
        @(posedge clk); #1;
        start = 0;
        //$display("[%0t]   Feeding row %0d of A.", $time, k);
        for (r = 0; r < DIM; r++)
          in_a[(r+1)*DATAW-1 -: DATAW] = A[k][r];
      end

      // Clear inputs 
      @(posedge clk); #1;
      start = 0;
      in_a  = '0;

      $display("[%0t] All columns fed.", $time);
    end
  endtask

  // ---------------------------------------------------------------------------
  // capture_outputs: keep polling for the row_valid signal, if we do get a row
  // valid signal, then we'll capture whatever value is on out_c and store it
  // into our big C_got array, once we've collected all output rows to fill the
  // matrix, then we'll finish and print the whole thing
  // ---------------------------------------------------------------------------
  task capture_outputs;
    integer row, c;
    begin
      row = 0;

      $display("[%0t] Waiting for row_valid pulses...", $time);

      // Keep going until we've captured DIM rows
      while (row < DIM) begin
        @(posedge clk);

        if (row_valid) begin
          // Capture this row
          for (c = 0; c < DIM; c++)
            C_got[row][c] = out_c[(c+1)*PSUMW-1 -: PSUMW];

          // Print it
          //$write("[%0t] C_got[%0d] =", $time, row);
          //for (c = 0; c < DIM; c++)
          //  $write(" %4d", C_got[row][c]);
          //$write("\n");

          row++;
        end
      end

      $display("[%0t] Finished capturing all rows.", $time);
    end
  endtask

  // ---------------------------------------------------------------------------
  // Comput the golden software model to verify correctness
  // ---------------------------------------------------------------------------
  task compute_expected;
    integer r, c, k;
    begin
      for (r = 0; r < DIM; r++)
        for (c = 0; c < DIM; c++) begin
          C_expected[r][c] = '0;
          for (k = 0; k < DIM; k++)
            C_expected[r][c] += A[r][k] * B[k][c];
        end
    end
  endtask

  // ---------------------------------------------------------------------------
  // check_results: compare C_got vs C_expected and report pass/fail
  // ---------------------------------------------------------------------------
  task check_results;
    integer r, c;
    integer errors;
    begin
      errors = 0;
      $display("\n[%0t] --- Result Check ---", $time);

      //$display("Expected C = A * B:");
      //for (r = 0; r < DIM; r++) begin
      //  $write("  C_exp[%0d] =", r);
      //  for (c = 0; c < DIM; c++)
          //$write(" %4d", C_expected[r][c]);
        //$write("\n");
      //end

      //$display("Got:");
      //for (r = 0; r < DIM; r++) begin
        //$write("  C_got[%0d] =", r);
        //for (c = 0; c < DIM; c++)
          //$write(" %4d", C_got[r][c]);
        //$write("\n");
      //end

      for (r = 0; r < DIM; r++)
        for (c = 0; c < DIM; c++)
          if (C_got[r][c] !== C_expected[r][c]) begin
            $display("  MISMATCH at C[%0d][%0d]: got %0d, expected %0d",
                     r, c, C_got[r][c], C_expected[r][c]);
            errors++;
          end

      if (errors == 0)
        $display("  PASS — all %0d outputs match.\n", DIM*DIM);
      else
        $display("  FAIL — %0d mismatches found.\n", errors);
    end
  endtask




  // ===========================================================================
  // Test Run
  // ===========================================================================
  initial begin
    $dumpfile("outputs/wave.vcd");
    $dumpvars(0, top_ws_tb);

    // -------------------------------------------------------------------------
    // Initialise test matrices
    // -------------------------------------------------------------------------
    // Matrix A
    /*
    A[0] = '{8'd1,  8'd2,  8'd3,  8'd4 };
    A[1] = '{8'd5,  8'd6,  8'd7,  8'd8 };
    A[2] = '{8'd9,  8'd10, 8'd11, 8'd12};
    A[3] = '{8'd13, 8'd14, 8'd15, 8'd16};

    // Matrix B
    B[0] = '{8'd1, 8'd0, 8'd0, 8'd0};
    B[1] = '{8'd0, 8'd2, 8'd0, 8'd0};
    B[2] = '{8'd0, 8'd0, 8'd3, 8'd0};
    B[3] = '{8'd0, 8'd0, 8'd0, 8'd4};
    */

    //this is just creating numbered arrays, good for testing scale
    for (int i = 0; i < DIM; i++) begin
      for (int j = 0; j < DIM; j++) begin
          A[i][j] = DATAW'(i*DIM + j + 1);
          B[i][j] = DATAW'(i*DIM + j + 1);
      end
    end

    // -------------------------------------------------------------------------
    // First Test
    // -------------------------------------------------------------------------
    reset_dut;

    compute_expected;
    
    load_weights;
    // Run streaming and output capture concurrently so capture_outputs
    // can poll valid_out while run_multiply is still flushing.
    fork
      begin : feed_inputs
        run_multiply;
        // Keep flushing zeros until capture_thread finishes
        repeat (2*DIM) @(posedge clk);
        $display("[%0t] Feed inputs done.", $time);
      end
      begin : capture_thread
        capture_outputs;
      end
    join
    check_results;

    // -------------------------------------------------------------------------
    // Second test: all-ones matrice
    // -------------------------------------------------------------------------
  
    $display("[%0t] --- Second test: all-ones matrices ---", $time);
    foreach (A[r,c]) A[r][c] = 8'd1;
    foreach (B[r,c]) B[r][c] = 8'd1;

    reset_dut;
    compute_expected;
    load_weights;
    fork
      begin : feed_thread2
        run_multiply;
        repeat (2*DIM) @(posedge clk);
      end
      begin : capture_thread2
        capture_outputs;
      end
    join
    check_results;
  
    #(PERIOD*4);
    $finish;
  end

endmodule