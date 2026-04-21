`timescale 1ns/1ns

module input_tiling_fsm_tb;

    // ── Parameters ─────────────────────────────────────────────────────────
    localparam int MAT_ROWS = 12;
    localparam int MAT_COLS = 1;
    localparam int DIM      = 4;
    localparam int DATAW    = 8;
    localparam int PSUMW    = 32;
    localparam int NUM_WEIGHTS = MAT_ROWS * MAT_COLS;  // 9
    localparam CLK_PERIOD = 10;  // 10ns clock
    
    localparam ROW_TILES = (MAT_ROWS + DIM - 1) / DIM; //Ensure Ceil of Division
    localparam COL_TILES = (MAT_COLS + DIM - 1) / DIM;  // Ensure Ceil of Division    
    localparam NUM_CELLS = (ROW_TILES * COL_TILES) * (DIM); // 

    // ── DUT signals ────────────────────────────────────────────────────────
    logic clk;
    logic rst_n;
    logic start;

    // Systolic array interface
    logic load_input;
    logic out_skew_done;      
    logic signed [DATAW-1:0] input_wr [0:DIM-1][0:DIM-1];


    // Weight BRAM interface
    logic [$clog2(NUM_CELLS)-1:0] w_addr_wr;
    logic w_rd_en;
    logic signed [DATAW-1:0] weight_rd;
    logic [1:0] out_skew_sr;
    logic done;

    // ── BRAM model ─────────────────────────────────────────────────────────
    // Simple 1D array mimicking a BRAM
    // Loaded with values 0..8 representing:
    //   W[0][0]=0  W[0][1]=1  W[0][2]=2
    //   W[1][0]=3  W[1][1]=4  W[1][2]=5
    //   W[2][0]=6  W[2][1]=7  W[2][2]=8
    logic signed [DATAW-1:0] bram [0:NUM_WEIGHTS-1];

    // BRAM read - 1 cycle latency, mimics real BRAM behavior
    always_ff @(posedge clk) begin
        if (w_rd_en)
            weight_rd <= bram[w_addr_wr];
        // Note: weight_rd holds last value when w_rd_en=0
        // This matches typical BRAM behavior
    end

    // ── DUT instantiation ──────────────────────────────────────────────────
    input_tiling_fsm #(
        .INP_VEC_ROWS (MAT_ROWS),
        .INP_VEC_COLS (MAT_COLS),
        .DIM          (DIM),
        .DATAW        (DATAW)
    ) dut (
        .clk        (clk),
        .rst_n      (rst_n),
        .start      (start),
        .load_inp   (load_input),
        .input_wr   (input_wr),
        .inp_addr_wr(w_addr_wr),
        .inp_rd_en  (w_rd_en),
        .inp_rd     (weight_rd),
        .done       (done),
        .out_skew_done(out_skew_done)
    );

    // ── Clock generation ───────────────────────────────────────────────────
    initial clk = 0;
    always #(CLK_PERIOD/2) clk = ~clk;

    // ── BRAM initialization ────────────────────────────────────────────────
    initial begin
        // Load values 0..8 into BRAM
        for (int i = 0; i <NUM_WEIGHTS; i++) begin
            bram[i] = i+1;
        end
    end

    // ── Stimulus ───────────────────────────────────────────────────────────
    initial begin
        // Initialize
        rst_n = 0;
        start = 0;
        out_skew_sr <= 0;
        // Hold reset for 2 cycles
        repeat(2) @(posedge clk);
        #1;           // small offset so signals settle before clock edge
        rst_n = 1;

        // Wait 1 cycle then pulse start
        @(posedge clk); #2;
        start = 1;
        @(posedge clk); #1;
        start = 0;
        // Wait for done
        wait(done == 1);
        @(posedge clk);

        @(posedge clk); #2;
                @(posedge clk); #2;
        start = 1;
        @(posedge clk); #1;
        start = 0;
        // Wait for done
        wait(done == 1);
        @(posedge clk);

        $display("FSM completed");
        $finish;
    end

    // ── Monitor ────────────────────────────────────────────────────────────
    // Prints useful info every cycle so you can trace what is happening
    always @(posedge clk) begin
        $display("t=%0t | state=%s | w_addr=%0d | w_rd_en=%0b | weight_rd=%0d | load_input=%0b | done=%0b",
            $time,
            dut.state.name(),   // prints state name as string
            w_addr_wr,
            w_rd_en,
            weight_rd,
            load_input,
            done
        );
    end

    // ── Checker - prints input_wr when load_input is asserted ───────────
    always @(posedge clk) begin

//        out_skew_done <= out_skew_sr[1];
        if (load_input) begin
//            out_skew_sr <= {out_skew_sr[0], 1}; // Ensure out_skew_done is low at start
            out_skew_done <= 1;
            $display("--- load_input asserted --- input_wr:");
            for (int i = 0; i < DIM; i++) begin
                for (int j = 0; j < DIM; j++) begin
                    $write("  input_wr[%0d][%0d] = %0d", i, j, input_wr[i][j]);
                end
                $write("\n");
            end
        end else begin
            out_skew_done <= 0; // Deassert out_skew_done when not loading weights
//              out_skew_sr <= {out_skew_sr[0], 0};
        end
    end

    // ── Timeout guard ──────────────────────────────────────────────────────
    initial begin
        #10000;
        $display("TIMEOUT - simulation took too long");
        $finish;
    end

endmodule