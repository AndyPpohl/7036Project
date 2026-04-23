`timescale 1ns/1ns

module mat_mult_top #(
    parameter DIM          = 4,
    parameter DATAW        = 8,
    parameter PSUMW        = 32,
    parameter MAT_ROWS     = 4,
    parameter MAT_COLS     = 6,
    parameter INP_VEC_ROWS = 6,
    parameter INP_VEC_COLS = 1
)(
    input  logic clk,
    input  logic rst_n,
    input  logic start,

    // Weight BRAM Interface (external)
    input  logic signed [DATAW-1:0] weight_rd,
    output logic [($clog2(NUM_W_CELLS))-1:0] w_addr,
    output logic w_rd_en,

    // Input BRAM Interface (external)
    input  logic signed [DATAW-1:0] inp_rd,
    output logic [($clog2(NUM_I_CELLS))-1:0] i_addr,
    output logic i_rd_en,   

    // Top OS Interface
    output logic signed [PSUMW-1:0] C [0:DIM-1][0:DIM-1],
    output logic done

);

    localparam int NUM_WEIGHTS  = MAT_ROWS * MAT_COLS;  // 24
    localparam int NUM_INPUTS   = INP_VEC_ROWS;          // 6

    // Derived tile counts — must match FSM localparams
    localparam int ROW_TILES    = (MAT_ROWS + DIM - 1) / DIM;  // 2
    localparam int COL_TILES    = (MAT_COLS + DIM - 1) / DIM;  // 3
    localparam int INP_TILES    = (INP_VEC_ROWS + DIM - 1) / DIM; // 3

    localparam int NUM_W_CELLS = (ROW_TILES * COL_TILES) * DIM * DIM; // 6
    localparam int NUM_I_CELLS = INP_TILES * DIM; // 12

    // Internal Signals for Weight_FSM
    logic signed [DATAW-1:0] B [0:DIM-1][0:DIM-1];
    logic w_fsm_done;
    logic w_fsm_start;
    logic load_weights;
    
    // Internal Signals for Input_FSM
    logic signed [DATAW-1:0] A [0:DIM-1][0:DIM-1];
    logic i_fsm_done;
    logic i_fsm_start;
    logic load_inputs;

    // Internal Signals for Top OS
    // logic signed [PSUMW-1:0] psum [0:DIM-1][0:DIM-1];
    logic activation;
    logic last_tile;
    logic out_skew_done;
    logic out_skew_done_reg; // Register to hold the value of out_skew_done for synchronization
    // logic top_os_done;
    
    // last tile logic
    // logic w_last_tile;
    // logic i_last_tile;

    //activation logic 
    // For the first time we activate the Top OS, out_skew_done will be 0, so we can use that to determine if it's the first activation or not. After the first activation, we can set a flag to indicate that we've seen the first activation and use that flag for subsequent activations.
    // We need to set activation to 1 for 1 cycle only

    logic w_activation;
    logic i_activation;
    logic first_activation;
    
    assign w_fsm_start = start;
    assign i_fsm_start = start;

    assign activation = (load_weights && load_inputs && (!first_activation || (out_skew_done_reg))); // Activate on the first tile and on subsequent tiles when out_skew_done goes high
    assign last_tile = w_fsm_done && i_fsm_done && out_skew_done_reg; // Last tile when both FSMs are on their last tile and the skewer is done

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            first_activation <= 1'b0;
        end else begin
            // Set activation for the first time we see out_skew_done go high
            if (activation && !first_activation) begin
                first_activation <= 1'b1;
            end 

            if(out_skew_done) begin
                out_skew_done_reg <= 1'b1; // Set the register when out_skew_done goes high
            end else if(activation) begin
                out_skew_done_reg <= 1'b0; // Clear the register when out_skew_done is low
            end
        end
    end
    // Instantiate Weight Tile FSM
    weight_tile_fsm #(
        .DIM      (DIM),
        .DATAW    (DATAW),
        .MAT_ROWS (MAT_ROWS),
        .MAT_COLS (MAT_COLS)
    ) weight_fsm (
        .clk           (clk),
        .rst_n         (rst_n),
        .start         (w_fsm_start),
        .load_weight   (load_weights),
        .weight_wr     (B),
        .out_skew_done (activation), // Start loading weights when we activate the Top OS
        .w_addr_wr     (w_addr),
        .weight_rd     (weight_rd),
        .w_rd_en       (w_rd_en),
        .done          (w_fsm_done)
    );

    input_tiling_fsm #(
        .DIM          (DIM),
        .DATAW        (DATAW),
        .INP_VEC_ROWS (INP_VEC_ROWS),
        .INP_VEC_COLS (INP_VEC_COLS)
    ) input_fsm (
        .clk           (clk),
        .rst_n         (rst_n),
        .start         (i_fsm_start),
        .load_inp      (load_inputs),
        .input_wr      (A),
        .out_skew_done (activation), // Start loading inputs when we activate the Top OS
        .inp_addr_wr   (i_addr),
        .inp_rd        (inp_rd),
        .inp_rd_en     (i_rd_en),
        .done          (i_fsm_done)
    );

    top_os #(
        .DIM      (DIM),
        .DATAW    (DATAW),
        .NUM_TILES(DIM),
        .PSUMW    (PSUMW)
    ) top_os_inst (
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

    // Control Logic to coordinate FSMs and Top OS


endmodule

