module input_tiling_fsm #(
    parameter INP_VEC_ROWS = 6,
    parameter INP_VEC_COLS = 1,
    // Hardware Array Dimensions
    parameter DIM = 2, // Number of rows/columns in PE array (assume square)
    parameter DATAW = 8
)(
    input  logic clk,
    input  logic rst_n,
    input  logic start,
    
    // Systollic Array Interface
    output logic signed load_inp,
    //Taking a burst approach to reading weights from Weights BRAM (Read DIM*DATAW instead of DIM*DIM*DATAW since we can feed one column of weights into the PE array at a time)
    output logic signed [DATAW-1:0] input_wr [0:DIM-1][0:DIM-1], // input data to load into PE array
    input logic out_skew_done,

    // Weight BRAM Interface
    output logic [$clog2(NUM_CELLS)-1:0] inp_addr_wr, // address into weight BRAM (Might change this to logic [clog2(MAT_A_ROWS*MAT_A_COLS*DATAW)-1:0]})
    input  logic signed [DATAW-1:0] inp_rd, // weight data read from weight BRAM
    output logic inp_rd_en,

    output logic done      // signal to indicate completion of all tiles
    );

    localparam ROW_TILES = (INP_VEC_ROWS + DIM - 1) / DIM; //Ensure Ceil of Division
    localparam COL_TILES = (INP_VEC_COLS + DIM - 1) / DIM;  // Ensure Ceil of Division
    localparam NUM_INPUTS = INP_VEC_ROWS * INP_VEC_COLS; // Total number of weights in the matrix
    localparam NUM_CELLS = (ROW_TILES* DIM * COL_TILES); // Number of weights in one tile
    localparam TILE_SIZE = DIM; // Number of weights in one tile (assuming we load one tile of weights into the PE array at a time)

    logic [$clog2(ROW_TILES)-1:0] tile_row_ctr; // Counter to keep track of which row tile we are on
    // logic [$clog2(COL_TILES)-1:0] tile_col_ctr; // Counter to keep track of which column tile we are on
    logic [$clog2(NUM_CELLS)-1:0] inp_addr; // weight address counter to read weights from weight BRAM
    logic [$clog2(ROW_TILES*DIM)-1:0] mat_row_ctr; // counter to keep track of which row of the padded matrix we are on
    // logic [$clog2(COL_TILES*DIM)-1:0] mat_col_ctr; // counter to keep track of which col of the padded matrix we are on
    
    logic [$clog2(TILE_SIZE)-1:0] tile_ctr; // counter to keep track of which weight we are on within the current tile
    logic [$clog2(TILE_SIZE)-1:0] tile_ctr_d; // counter to keep track of which weight we are on within the current tile
    
    logic [DATAW-1:0] input_buffer [0:TILE_SIZE-1]; // Buffer to hold weights for the current tile
    logic read_en_d;
    logic zero_pad_en;
    logic zero_pad_d;

    typedef enum logic [2:0] {
        IDLE         = 3'd0,
        LOAD_INP     = 3'd1,
        WRITE_ARRAY  = 3'd2,
        DONE         = 3'd3
    } state_t;

    state_t state;

    always_comb begin
        inp_addr_wr = inp_addr; // Default assignment to prevent latches, will be overridden in load_inpS state
        for (int i = 0; i < DIM; i++) begin
            for (int j = 0; j < DIM; j++) begin
                input_wr[i][j] = input_buffer[i];
            end
        end
    end
    always_ff @(posedge clk) begin
        if(!rst_n) begin
            tile_row_ctr <= 0;
            // tile_col_ctr <= 0;
            mat_row_ctr <= 0;
            // mat_col_ctr <= 0;
            tile_ctr <= 0;
            inp_rd_en <= 0;
            load_inp <= 0;
            done <= 0;
            state <= IDLE;
            input_buffer <= '{default:0}; // Clear weight buffer on reset
            inp_addr <= 0; // Reset weight address counter
            zero_pad_en <= 0; // Disable zero padding by default

        end else begin
            tile_ctr_d <= tile_ctr; // Delayed version of tile counter for timing the loading of weights into input_wr
            read_en_d <= inp_rd_en; // Delayed version of read enable for timing the reading of weights from weight BRAM into input_buffer
            zero_pad_d <= zero_pad_en; // Delayed version of zero pad enable for timing the padding of weights in input_buffer when reading from weight BRAM is complete
            case (state)
                IDLE: begin
                    tile_row_ctr <= 0;
                    // tile_col_ctr <= 0;
                    mat_row_ctr <= 0;
                    // mat_col_ctr <= 0;
                    tile_ctr <= 0;
                    inp_rd_en <= 0;
                    load_inp <= 0;
                    done <= 0;
                    zero_pad_en <= 0; // Disable zero padding in idle state
                    if(start) begin
                        state <= LOAD_INP;
                        inp_addr <= 0; // Start reading weights from the beginning of weight BRAM
                        // mat_col_ctr <= 1;
                        mat_row_ctr <= 1;
                        inp_rd_en <= 1; // Assert read enable to start reading weights from weight BRAM
                    end
                end

                LOAD_INP: begin
                    // Logic For Addressing
                    if(mat_row_ctr == (tile_row_ctr * DIM + DIM - 1)) begin // If we've reached the end of the current tile row
                        if(tile_ctr == TILE_SIZE-1) begin // If we've loaded all weights for the current tile
                            tile_ctr <= 0; // Reset tile counter
                            state <= WRITE_ARRAY; // Move to next state after loading weights for current tile
                            load_inp <= 1; 
                        end
                    end else begin
                        mat_row_ctr <= mat_row_ctr + 1; // Increment row counter
                    end
  
                    inp_addr <= mat_row_ctr; // Increment weight address to read next weight from weight BRAM
                    
                    if(read_en_d) begin // If read enable was asserted in the previous cycle, it means inp_rd now holds the newly read weight from weight BRAM
                        input_buffer[tile_ctr] <= inp_rd; // Store the read weight into the weight buffer at the position indicated by the delayed tile counter
                        tile_ctr <= tile_ctr + 1; 
                    end else if (zero_pad_d) begin // If we've read at least one weight into the buffer, we can start loading weights into input_wr while we continue reading the rest of the weights for the tile
                        tile_ctr <= tile_ctr + 1; // Increment tile counter
                        input_buffer[tile_ctr] <= 0; // Pad with zeros if we've read all valid weights for the tile (i.e. when we are in the last tile row/column and the matrix dimensions are not perfectly divisible by DIM)
                    end

                    zero_pad_en <= 0; // Disable zero padding by default
                    inp_rd_en <= 0; // Assert read enable to start reading weights from weight BRAM
                    if(tile_ctr < TILE_SIZE-1-1) begin
                        if(mat_row_ctr < INP_VEC_ROWS) begin
                            inp_rd_en <= 1; // Assert read enable to read weight from weight BRAM
                            // input_buffer[tile_ctr_d] <= inp_rd; // Store read weight in buffer
                        end else begin
                            zero_pad_en <= 1; // Enable zero padding if we've read all weights
                            // input_buffer[tile_ctr_d] <= 0; // Pad with zeros if we've read all weights
                        end
                    end
                
                end

                WRITE_ARRAY: begin //Here we will load the weights and reset for next tile
                    // Logic to write weigh_buffer to input_wr to load weights into PE array and to read input vector data from input BRAM and write it to inp_wr to feed into PE array
                     // Assert load weight signal to indicate weights are being loaded into PE array
                    if(out_skew_done) begin // Wait for signal from PE array that it has finished skewing the weights before loading next tile of weights
                        load_inp <= 0;
                        state <= LOAD_INP; // Go back to loading weights for next tile
                        input_buffer <= '{default:0}; // Clear weight buffer for next tile
                        tile_ctr <= 0; // Reset tile counter for next tile
                        
                        // inp_rd_en <= 1; // Deassert read enable while we prepare for the next batch of weights
                        // Logic for preparing next batch of reading weights
                        if(tile_row_ctr == ROW_TILES - 1) begin // If we've reached the end of all the weights
                            tile_row_ctr <= 0; // Reset tile row counter
                            mat_row_ctr <= 0; // Reset matrix row counter
                            state <= DONE; // Move to compute state after writing weights for all tiles
                            inp_rd_en <= 0; // Deassert read enable after reading all weights
                        end else begin // If we need to move to the next tile row
                            tile_row_ctr <= tile_row_ctr + 1; // Increment tile row counter
                            mat_row_ctr <= (tile_row_ctr+1) * DIM; // Set matrix row counter to start of next tile row
                        end
                    end
                end

                DONE: begin
                    // Assert done signal
                    done <= 1;
                    state <= IDLE; // Go back to idle state after completion
                end
            endcase
        end
    end
endmodule