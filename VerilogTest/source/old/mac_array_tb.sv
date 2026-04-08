/*
// =====================
// Testbench
// =====================
module mac_array_tb;

    parameter DIM  = 2;
    parameter LEN  = 16;
    parameter PSUM_WIDTH = 2*LEN;
    parameter PERIOD = 10;
    
    localparam LATENCY = 2*(DIM-1) + (DIM-1) + 2;  // = 3*DIM - 1, for DIM=2 gives 5

    logic clk = 0;
    logic nrst = 1;

    logic load_weight;
    logic clear_psum;

    logic [LEN-1:0]        ain   [0:DIM-1];
    logic [LEN-1:0]        win   [0:DIM-1];//[0:DIM-1];
    logic [PSUM_WIDTH-1:0] cin   [0:DIM-1];

    logic [LEN-1:0]        aout  [0:DIM-1];
    logic [PSUM_WIDTH-1:0] cout  [0:DIM-1];

    // Matrices for reference
    logic [LEN-1:0] A    [0:DIM-1][0:DIM-1];
    logic [LEN-1:0] B    [0:DIM-1][0:DIM-1];
    logic [PSUM_WIDTH-1:0] C_sw [0:DIM-1][0:DIM-1];
    logic [PSUM_WIDTH-1:0] C_hw [0:DIM-1][0:DIM-1];

    logic  valid_in_row [0:DIM-1];

    integer flush_cycles;
    integer cycle_count;

    always @(posedge clk or negedge nrst) begin
        if (!nrst) cycle_count <= 0;
        else cycle_count <= cycle_count + 1;
    end

    // Clock
    always #(PERIOD/2) clk = ~clk;

    
    mac_array #(.DIM(DIM), .LEN(LEN), .PSUM_WIDTH(PSUM_WIDTH)) dut 
    (
        .clk        (clk),
        .nrst       (nrst),
        .load_weight(load_weight),
        .clear_psum (clear_psum),
        .ain        (ain),
        .win        (win),
        .cin        (cin),
        .aout       (aout),
        .cout       (cout)
        //.valid_in_row(valid_in_row)
    );
    
    task RESETDUT;
    begin
        nrst        = 0;
        load_weight = 0;
        clear_psum  = 0;
        for (int i = 0; i < DIM; i++) begin
            ain[i] = '0;
            cin[i] = '0;
        end
        #(PERIOD);
        @(posedge clk);
        nrst = 1;
        @(posedge clk);
    end
    endtask

    task display_row(int i0);
    begin
        $display("C_hw row %0d:", i0);
        for (int j = 0; j < DIM; j++)
            $display("  C_hw[%0d][%0d] = %0d", i0, j, C_hw[i0][j]);
    end
    endtask

    task automatic compute_sw;
        for (int i = 0; i < DIM; i++)
            for (int j = 0; j < DIM; j++) begin
                C_sw[i][j] = 0;
                for (int k = 0; k < DIM; k++)
                    C_sw[i][j] += A[i][k] * B[k][j];
            end
    endtask


initial begin
    $display("CONFIG: DIM=%0d", DIM);

    $dumpfile("outputs/wave.vcd");
    $dumpvars(0, mac_array_tb);

    // Initialize matrices
    for (int i = 0; i < DIM; i++)
        for (int j = 0; j < DIM; j++) begin
            A[i][j] = LEN'(i*DIM + j + 1);
            B[i][j] = LEN'(i*DIM + j + 1);
        end

    compute_sw();
    RESETDUT();

    // -------------------------
    // Phase 1: Load Weights
    // -------------------------
    // Stream one row of B per cycle over DIM cycles.
    // Hardware lw_skewed ensures each array row latches
    // when its weight data actually arrives via w_sig chain.
    // Present row 0 data
    for (int col = 0; col < DIM; col++)
        win[col] = B[0][col];

    // Single cycle pulse — hardware skew propagates it downward
    load_weight = 1;
    @(posedge clk);
    load_weight = 0;
    $display("POST-PULSE: lw_skewed[0]=%0d lw_skewed[1]=%0d lw_pipe=%0b win=[%0d,%0d]",
            dut.lw_skewed[0], dut.lw_skewed[1], dut.lw_pipe, win[0], win[1]);
    @(posedge clk);
    $display("ROW1-LATCH: lw_skewed[0]=%0d lw_skewed[1]=%0d lw_pipe=%0b win=[%0d,%0d]",
            dut.lw_skewed[0], dut.lw_skewed[1], dut.lw_pipe, win[0], win[1]);
            
    // Continue streaming remaining rows for the wave to carry downward
    for (int row = 1; row < DIM; row++) begin
        for (int col = 0; col < DIM; col++)
            win[col] = B[row][col];
        @(posedge clk);
    end

    // Let last wave settle
    @(posedge clk);
    
    // Probe internal skew signals immediately after loading
    $display("--- lw_skewed probe ---");
    $display("  lw_skewed[0] = %0d", dut.lw_skewed[0]);
    $display("  lw_skewed[1] = %0d", dut.lw_skewed[1]);
    $display("  w_sig[0][0]  = %0d", dut.w_sig[0][0]);
    $display("  w_sig[0][1]  = %0d", dut.w_sig[0][1]);
    @(posedge clk);
    $display("--- after 1 more cycle ---");
    $display("  w_sig[0][0]  = %0d", dut.w_sig[0][0]);
    $display("  w_sig[0][1]  = %0d", dut.w_sig[0][1]);
    $display("  PE(0,0) weight_reg = %0d", dut.row[0].col[0].mac_inst.weight_reg);
    $display("  PE(0,1) weight_reg = %0d", dut.row[0].col[1].mac_inst.weight_reg);
    $display("  PE(1,0) weight_reg = %0d", dut.row[1].col[0].mac_inst.weight_reg);
    $display("  PE(1,1) weight_reg = %0d", dut.row[1].col[1].mac_inst.weight_reg);

    @(posedge clk);

    $display("--- Weight check ---");
    generate_unroll : begin
    end

    $display("  PE(0,0) weight_reg = %0d", dut.row[0].col[0].mac_inst.weight_reg);
    $display("  PE(0,1) weight_reg = %0d", dut.row[0].col[1].mac_inst.weight_reg);
    $display("  PE(1,0) weight_reg = %0d", dut.row[1].col[0].mac_inst.weight_reg);
    $display("  PE(1,1) weight_reg = %0d", dut.row[1].col[1].mac_inst.weight_reg);
    
    // -------------------------
    // Phase 2: Clear / Bias Load
    // -------------------------
    for (int i = 0; i < DIM; i++) cin[i] = '0;   // zero bias
    clear_psum = 1;
    @(posedge clk);
    clear_psum = 0;

    // -------------------------
    // Phase 3: Stream Activations
    // -------------------------
    // All rows of A stream simultaneously, one column k per cycle.
    // ain[r] = A[r][k] — row r of A, column k.
    // Skew registers inside the array handle diagonal alignment.
    // After DIM data cycles, flush with zeros for:
    //   (DIM-1) activation skew drain + (DIM-1) horizontal propagation
    for (int k = 0; k < DIM + 2*(DIM-1); k++) begin
        for (int r = 0; r < DIM; r++)
            ain[r] = (k < DIM) ? A[r][k] : '0;
        $display("Cycle %0d: k=%0d ain=[%0d,%0d]",
                 cycle_count, k, ain[0], ain[1]);
        @(posedge clk);
    end

    // -------------------------
    // Phase 4: Drain — Capture Each Row as it Becomes Valid
    // -------------------------
    // Row i of C is valid at the bottom of the array
    // (DIM-1) psum pipeline cycles after its last MAC fires.
    // Row 0 drains first, row DIM-1 drains last, one cycle apart.
    repeat(DIM-1) @(posedge clk);

    for (int i = 0; i < DIM; i++) begin
        // Each successive row needs 1 more cycle for psum pipeline
        @(posedge clk);
        $display("Cycle %0d: capturing C row %0d cout=[%0d,%0d]",
                 cycle_count, i, cout[0], cout[1]);
        for (int j = 0; j < DIM; j++)
            C_hw[i][j] = cout[j];
        @(posedge clk);
    end

    // -------------------------
    // Phase 5: Compare
    // -------------------------
    $display("--- SW reference ---");
    for (int i = 0; i < DIM; i++)
        for (int j = 0; j < DIM; j++)
            $display("  C_sw[%0d][%0d] = %0d", i, j, C_sw[i][j]);

    $display("--- HW result ---");
    for (int i = 0; i < DIM; i++)
        for (int j = 0; j < DIM; j++)
            $display("  C_hw[%0d][%0d] = %0d", i, j, C_hw[i][j]);

    $display("--- Comparison ---");
    for (int i = 0; i < DIM; i++)
        for (int j = 0; j < DIM; j++) begin
            if (C_hw[i][j] !== C_sw[i][j])
                $display("MISMATCH C[%0d][%0d]: hw=%0d sw=%0d",
                         i, j, C_hw[i][j], C_sw[i][j]);
            else
                $display("MATCH    C[%0d][%0d]: hw=%0d sw=%0d",
                         i, j, C_hw[i][j], C_sw[i][j]);
        end

    $finish;
end
endmodule
*/