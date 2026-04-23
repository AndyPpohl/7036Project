`timescale 1ns/1ns

module mat_mult_top_tb;

    // ── Parameters ──────────────────────────────────────────────────────────
    localparam int DIM          = 4;
    localparam int DATAW        = 8;
    localparam int PSUMW        = 32;
    localparam int MAT_ROWS     = 5;
    localparam int MAT_COLS     = 4;
    localparam int INP_VEC_ROWS = 5;
    localparam int INP_VEC_COLS = 1;
    localparam int NUM_WEIGHTS  = MAT_ROWS * MAT_COLS;
    localparam int NUM_INPUTS   = INP_VEC_ROWS;
    localparam int CLK_PERIOD   = 10;

    localparam int ROW_TILES = (MAT_ROWS + DIM - 1) / DIM;
    localparam int COL_TILES = (MAT_COLS + DIM - 1) / DIM;
    localparam int INP_TILES = (INP_VEC_ROWS + DIM - 1) / DIM;

    // Must match localparams inside mat_mult_top
    localparam int NUM_W_CELLS = (ROW_TILES * COL_TILES) * DIM * DIM;
    localparam int NUM_I_CELLS = INP_TILES * DIM;

    // ── Clock & Reset ────────────────────────────────────────────────────────
    logic clk   = 0;
    logic rst_n = 0;
    logic start = 0;
    always #(CLK_PERIOD/2) clk = ~clk;

    // ── DUT ports ────────────────────────────────────────────────────────────
    logic signed [DATAW-1:0]              weight_rd;
    logic [$clog2(NUM_W_CELLS)-1:0]       w_addr;
    logic                                  w_rd_en;

    logic signed [DATAW-1:0]              inp_rd;
    logic [$clog2(NUM_I_CELLS)-1:0]       i_addr;
    logic                                  i_rd_en;

    logic signed [PSUMW-1:0]              C [0:DIM-1][0:DIM-1];
    logic                                  done;

    // ── BRAM models ──────────────────────────────────────────────────────────
    logic signed [DATAW-1:0] weight_bram [0:NUM_WEIGHTS-1];
    logic signed [DATAW-1:0] input_bram  [0:NUM_INPUTS-1];

    // 1 cycle read latency
    always_ff @(posedge clk) begin
        if (w_rd_en) weight_rd <= weight_bram[w_addr];
        if (i_rd_en) inp_rd    <= input_bram[i_addr];
    end

    // ── DUT ──────────────────────────────────────────────────────────────────
    mat_mult_top #(
        .DIM          (DIM),
        .DATAW        (DATAW),
        .PSUMW        (PSUMW),
        .MAT_ROWS     (MAT_ROWS),
        .MAT_COLS     (MAT_COLS),
        .INP_VEC_ROWS (INP_VEC_ROWS),
        .INP_VEC_COLS (INP_VEC_COLS)
    ) dut (
        .clk       (clk),
        .rst_n     (rst_n),
        .start     (start),
        .weight_rd (weight_rd),
        .w_addr    (w_addr),
        .w_rd_en   (w_rd_en),
        .inp_rd    (inp_rd),
        .i_addr    (i_addr),
        .i_rd_en   (i_rd_en),
        .C         (C),
        .done      (done)
    );

    // ── Expected output ───────────────────────────────────────────────────────
    logic signed [PSUMW-1:0] y_expected [0:MAT_ROWS-1];

    task compute_expected();
        logic signed [PSUMW-1:0] acc;
        begin
            $display("\n--- Expected y = W*x ---");
            for (int i = 0; i < MAT_ROWS; i++) begin
                acc = 0;
                for (int j = 0; j < MAT_COLS; j++)
                    acc += weight_bram[i * MAT_COLS + j] * input_bram[j];
                y_expected[i] = acc;
                $display("  y[%0d] = %0d", i, acc);
            end
        end
    endtask

    task check_results();
        begin
            $display("\n[%0t] --- C outputs ---", $time);
            for (int i = 0; i < DIM; i++) begin
                for (int j = 0; j < DIM; j++)
                    $write("  C[%0d][%0d] = %0d", i, j, C[i][j]);
                $write("\n");
            end
            $display("\n--- Expected ---");
            for (int i = 0; i < MAT_ROWS; i++)
                $display("  y[%0d] = %0d", i, y_expected[i]);
        end
    endtask

    // ── Monitor ──────────────────────────────────────────────────────────────
    always_ff @(posedge clk) begin
        $display("t=%0t | w_state=%s | i_state=%s | activation=%0b | last_tile=%0b | out_skew_done=%0b | done=%0b",
            $time,
            dut.weight_fsm.state.name(),
            dut.input_fsm.state.name(),
            dut.activation,
            dut.last_tile,
            dut.out_skew_done,
            done
        );
    end

    // ── Print when load_weight asserted ──────────────────────────────────────
    always_ff @(posedge clk) begin
        if (dut.load_weights) begin
            $display("\n--- load_weights asserted --- B (weights tile):");
            for (int i = 0; i < DIM; i++) begin
                for (int j = 0; j < DIM; j++)
                    $write("  B[%0d][%0d]=%0d", i, j, dut.B[i][j]);
                $write("\n");
            end
        end
    end

    // ── Print when load_inputs asserted ──────────────────────────────────────
    always_ff @(posedge clk) begin
        if (dut.load_inputs) begin
            $display("\n--- load_inputs asserted --- A (input tile):");
            for (int i = 0; i < DIM; i++) begin
                for (int j = 0; j < DIM; j++)
                    $write("  A[%0d][%0d]=%0d", i, j, dut.A[i][j]);
                $write("\n");
            end
        end
    end

    // ── Print when done ───────────────────────────────────────────────────────
    always_ff @(posedge clk) begin
        if (done) begin
            $display("\n--- done asserted ---");
            check_results();
        end
    end

    // ── Stimulus ──────────────────────────────────────────────────────────────
    initial begin
        $dumpfile("outputs/wave.vcd");
        $dumpvars(0, mat_mult_top_tb);

        // Load weight BRAM: W[i][j] = i*MAT_COLS + j
        for (int i = 0; i < NUM_WEIGHTS; i++)
            weight_bram[i] = DATAW'(i);

        // Load input BRAM: x = [1, 2, 3, 4, 5, 6]
        for (int i = 0; i < NUM_INPUTS; i++)
            input_bram[i] = DATAW'(i + 1);

        compute_expected();

        // Reset
        rst_n = 0;
        repeat(2) @(posedge clk); #1;
        rst_n = 1;
        @(posedge clk); #1;

        // Start
        $display("\n[%0t] Asserting start", $time);
        start = 1;
        @(posedge clk); #1;
        start = 0;

        // Wait for done
        @(posedge done);
        repeat(5) @(posedge clk);

        $display("\n[%0t] Simulation complete", $time);
        $finish;
    end

    // ── Timeout ───────────────────────────────────────────────────────────────
    initial begin
        #500000;
        $display("TIMEOUT");
        $finish;
    end

endmodule