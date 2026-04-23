module fifo #(
    parameter DATA_WIDTH = 8,      // Width of a single input vector
    parameter DEPTH = 16,          // Total capacity of the FIFO (Keep as power of 2!)
    parameter BATCH_SIZE = 4       // How many vectors to output at once
)(
    input  logic clk,
    input  logic rst_n,
    
    // Write Interface (1 vector at a time)
    input  logic write_en,
    input  logic [DATA_WIDTH-1:0] data_in,
    
    // Read Interface (1 BATCH at a time)
    input  logic read_en,
    output logic [DATA_WIDTH-1:0] batch_out [0:BATCH_SIZE-1], // Unpacked array tweak
    
    // Status Flags
    output logic empty,
    output logic full,
    output logic half_full
);

    // Memory array
    logic [DATA_WIDTH-1:0] mem [0:DEPTH-1];
    
    // Pointers and counters
    logic [$clog2(DEPTH+1)-1:0] count;
    logic [$clog2(DEPTH)-1:0]   wr_ptr;
    logic [$clog2(DEPTH)-1:0]   rd_ptr;

    // Status flags
    assign empty     = (count == 0);
    assign full      = (count == DEPTH);
    assign half_full = (count >= (DEPTH / 2));

    // --- Combinational Read Logic ---
    // The output continuously peeks at the next batch in the circular buffer.
    // The modulo operator (%) handles wrapping around the end of the memory.
    always_comb begin
        for (int i = 0; i < BATCH_SIZE; i++) begin
            int idx = (rd_ptr + i) % DEPTH; 
            batch_out[i] = mem[idx];
        end
    end

    // --- Sequential Logic ---
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            count  <= 0;
            for (int i=0; i<DEPTH; i++) mem[i] <= 0;
        end else begin
            
            logic do_write = write_en && !full;
            logic do_read  = read_en && (count >= BATCH_SIZE);

            // 1. Handle Write (Advance Write Pointer)
            if (do_write) begin
                mem[wr_ptr] <= data_in;
                wr_ptr      <= (wr_ptr + 1) % DEPTH;
            end
            
            // 2. Handle Read (Advance Read Pointer by a full batch)
            if (do_read) begin
                rd_ptr <= (rd_ptr + BATCH_SIZE) % DEPTH;
            end
            
            // 3. Update Count Safely
            if (do_write && do_read) begin
                count <= count - BATCH_SIZE + 1;
            end else if (do_read) begin
                count <= count - BATCH_SIZE;
            end else if (do_write) begin
                count <= count + 1;
            end
            
        end
    end
endmodule