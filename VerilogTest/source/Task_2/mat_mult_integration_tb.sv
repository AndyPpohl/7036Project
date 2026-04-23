`timescale 1ns/1ns

module mat_mult_integration_tb;

    // ── Parameters ──────────────────────────────────────────────────────────
    localparam int DIM          = 4;
    localparam int DATAW        = 8;
    localparam int PSUMW        = 32;
    localparam int MAT_ROWS     = 4;
    localparam int MAT_COLS     = 6;
    localparam int INP_VEC_ROWS = 6;
    localparam int INP_VEC_COLS = 1;
    localparam int NUM_WEIGHTS  = MAT_ROWS * MAT_COLS;  // 24
    localparam int NUM_INPUTS   = INP_VEC_ROWS;          // 6
    localparam int CLK_PERIOD   = 10;

    // Derived tile counts — must match FSM localparams
    localparam int ROW_TILES    = (MAT_ROWS + DIM - 1) / DIM;  // 2
    localparam int COL_TILES    = (MAT_COLS + DIM - 1) / DIM;  // 3
    localparam int INP_TILES    = (INP_VEC_ROWS + DIM - 1) / DIM; // 3

    // ── Clock & Reset ────────────────────────────────────────────────────────
    logic clk   = 0;
    logic rst_n = 0;
    always #(CLK_PERIOD/2) clk = ~clk;

    // ── FSM start signals ────────────────────────────────────────────────────
    logic w_start   = 0;
    logic inp_start = 0;

    // ── Weight BRAM ──────────────────────────────────────────────────────────
    logic signed [DATAW-1:0] weight_bram [0:NUM_WEIGHTS-1];
    logic [$clog2(NUM_WEIGHTS)-1:0] w_addr_wr;
    logic                           w_rd_en;
    logic signed [DATAW-1:0]        weight_rd;

    always_ff @(posedge clk) begin
        if (w_rd_en)
            weight_rd <= weight_bram[w_addr_wr];
    end

    // ── Input BRAM ───────────────────────────────────────────────────────────
    logic signed [DATAW-1:0] input_bram [0:NUM_INPUTS-1];
    logic [$clog2(NUM_INPUTS)-1:0] inp_addr_wr;
    logic                          inp_rd_en;
    logic signed [DATAW-1:0]       inp_rd;

    always_ff @(posedge clk) begin
        if (inp_rd_en)
            inp_rd <= input_bram[inp_addr_wr];
    end

    // ── Intermediate signals ─────────────────────────────────────────────────
    logic                      load_weight;
    logic                      load_inp;
    logic signed [DATAW-1:0]   weight_wr [0:DIM-1][0:DIM-1];
    logic signed [DATAW-1:0]   input_wr  [0:DIM-1][0:DIM-1];
    logic                      w_fsm_done;
    logic                      inp_fsm_done;

    // ── top_os signals ───────────────────────────────────────────────────────
    logic                      activation;
    logic                      last_tile;
    logic signed [DATAW-1:0]   A_in  [0:DIM-1][0:DIM-1];
    logic signed [DATAW-1:0]   B_in  [0:DIM-1][0:DIM-1];
    logic signed [PSUMW-1:0]   C_out [0:DIM-1][0:DIM-1];
    logic                      done;
    logic                      out_skew_done;

    // ── Activation — both FSMs ready simultaneously ───────────────────────── 
    // assign activation = load_weight & load_inp;
    assign A_in       = input_wr;
    assign B_in       = weight_wr;

    // ── Last tile detection ───────────────────────────────────────────────────
    // Fires when both FSMs are loading their final tile simultaneously
    logic w_last_tile;
    logic inp_last_tile;
    logic out_skew_done_sync;
    logic first_activation;

    assign w_last_tile = (u_weight_fsm.tile_row_ctr == ROW_TILES - 1) &&
                         (u_weight_fsm.tile_col_ctr == COL_TILES - 1) &&
                         (load_weight == 1);

    assign inp_last_tile = (u_input_fsm.tile_row_ctr == INP_TILES - 1) &&
                           (load_inp == 1);

    assign last_tile = w_last_tile & inp_last_tile;

    assign out_skew_done_sync = u_top_os.out_skew_done & u_input_fsm.load_inp & u_weight_fsm.load_weight;

    // ── DUT instantiations ───────────────────────────────────────────────────

    weight_tile_fsm #(
        .MAT_ROWS     (MAT_ROWS),
        .MAT_COLS     (MAT_COLS),
        .INP_VEC_ROWS (INP_VEC_ROWS),
        .DIM          (DIM),
        .DATAW        (DATAW),
        .PSUMW        (PSUMW)
    ) u_weight_fsm (
        .clk           (clk),
        .rst_n         (rst_n),
        .start         (w_start),
        .load_weight   (load_weight),
        .weight_wr     (weight_wr),
        .out_skew_done (out_skew_done_sync),
        .w_addr_wr     (w_addr_wr),
        .weight_rd     (weight_rd),
        .w_rd_en       (w_rd_en),
        .done          (w_fsm_done)
    );

    input_tiling_fsm #(
        .INP_VEC_ROWS (INP_VEC_ROWS),
        .INP_VEC_COLS (INP_VEC_COLS),
        .DIM          (DIM),
        .DATAW        (DATAW)
    ) u_input_fsm (
        .clk           (clk),
        .rst_n         (rst_n),
        .start         (inp_start),
        .load_inp      (load_inp),
        .input_wr      (input_wr),
        .out_skew_done (out_skew_done_sync),
        .inp_addr_wr   (inp_addr_wr),
        .inp_rd        (inp_rd),
        .inp_rd_en     (inp_rd_en),
        .done          (inp_fsm_done)
    );

    top_os #(
        .DIM      (DIM),
        .DATAW    (DATAW),
        .PSUMW    (PSUMW),
        .NUM_TILES(COL_TILES)
    ) u_top_os (
        .clk           (clk),
        .rst_n         (rst_n),
        .activation    (activation),
        .last_tile     (last_tile),
        .A             (A_in),
        .B             (B_in),
        .C             (C_out),
        .done          (done),
        .out_skew_done (out_skew_done)
    );

    // ── Expected output calculator ────────────────────────────────────────────
    // Computes W*x in software to verify hardware output
    // W is MAT_ROWS x MAT_COLS, x is MAT_COLS x 1
    // Result y is MAT_ROWS x 1
    logic signed [PSUMW-1:0] y_expected [0:MAT_ROWS-1];

    task compute_expected();
        logic signed [PSUMW-1:0] acc;
        begin
            for (int i = 0; i < MAT_ROWS; i++) begin
                acc = 0;
                for (int j = 0; j < MAT_COLS; j++) begin
                    acc += weight_bram[i * MAT_COLS + j] * input_bram[j];
                end
                y_expected[i] = acc;
                $display("  y_expected[%0d] = %0d", i, acc);
            end
        end
    endtask

    task check_results();
        int errors;
        begin
            errors = 0;
            $display("\n[%0t] --- Result Check ---", $time);
            for (int i = 0; i < DIM; i++) begin
                for (int j = 0; j < DIM; j++) begin
                    $display("  C[%0d][%0d] = %0d", i, j, C_out[i][j]);
                end
            end
            // Note: C_out is DIM x DIM
            // For a MV multiply result is MAT_ROWS x 1
            // You will need to accumulate C_out across row tiles
            // to get the full y vector - this checker just prints
            // raw outputs for now so you can verify manually
            if (errors == 0)
                $display("  Check complete - verify against y_expected above\n");
        end
    endtask

    // ── Monitor ──────────────────────────────────────────────────────────────
    always_ff @(posedge clk) begin
        $display("t=%0t | w_state=%s | inp_state=%s | activation=%0b | last_tile=%0b | out_skew_done=%0b | done=%0b",
            $time,
            u_weight_fsm.state.name(),
            u_input_fsm.state.name(),
            activation,
            last_tile,
            out_skew_done,
            done
        );
    end

    always_ff @(posedge clk) begin
        if (done) begin
            $display("\n--- done asserted --- C outputs:");
            for (int i = 0; i < DIM; i++) begin
                for (int j = 0; j < DIM; j++) begin
                    $write("  C[%0d][%0d] = %0d", i, j, C_out[i][j]);
                end
                $write("\n");
            end
        end
    end

    always_ff @(posedge clk) begin
        if () begin
            $display("\n--- load_weight asserted --- weight_wr:");
            for (int i = 0; i < DIM; i++) begin
                for (int j = 0; j < DIM; j++) begin
                    $write("  weight_wr[%0d][%0d] = %0d", i, j, weight_wr[i][j]);
                end
                $write("\n");
            end
        end
    end

    // ── Stimulus ─────────────────────────────────────────────────────────────
    initial begin
        $dumpfile("outputs/wave.vcd");
        $dumpvars(0, mat_mult_integration_tb);

        // ── Initialize weight BRAM ───────────────────────────────────────────
        // W[i][j] = i*MAT_COLS + j
        // Flat row-major:
        //   W[0] = [0,  1,  2,  3,  4,  5 ]
        //   W[1] = [6,  7,  8,  9,  10, 11]
        //   W[2] = [12, 13, 14, 15, 16, 17]
        //   W[3] = [18, 19, 20, 21, 22, 23]
        for (int i = 0; i < NUM_WEIGHTS; i++)
            weight_bram[i] = DATAW'(i);

        // ── Initialize input BRAM ────────────────────────────────────────────
        // x = [1, 2, 3, 4, 5, 6]
        for (int i = 0; i < NUM_INPUTS; i++)
            input_bram[i] = DATAW'(i + 1);

        // ── Compute expected output ──────────────────────────────────────────
        $display("\n--- Expected outputs (W*x) ---");
        compute_expected();

        // ── Reset ────────────────────────────────────────────────────────────
        rst_n = 0;
        repeat(2) @(posedge clk);
        #1;
        rst_n = 1;
        @(posedge clk); #1;

        // ── Start both FSMs ──────────────────────────────────────────────────
        $display("\n[%0t] Starting both FSMs", $time);
        w_start   = 1;
        inp_start = 1;
        first_activation = 1;
        @(posedge clk); #1;
        w_start   = 0;
        inp_start = 0;

        // ── Wait for both FSMs to finish ─────────────────────────────────────
        fork
            begin : wait_w
                wait(w_fsm_done == 1);
                $display("[%0t] Weight FSM done", $time);
            end
            begin : wait_inp
                wait(inp_fsm_done == 1);
                $display("[%0t] Input FSM done", $time);
            end
            begin : wait_done
                @(posedge done);
                $display("[%0t] top_os done", $time);
                check_results();
            end
        join

        repeat(5) @(posedge clk);
        $display("[%0t] Simulation complete", $time);
        $finish;
    end

    // ── Timeout guard ────────────────────────────────────────────────────────
    initial begin
        #500000;
        $display("TIMEOUT - simulation ran too long");
        $finish;
    end

endmodule