`timescale 1ns/1ps

module tb_batch_fifo();

    // Matching parameters
    localparam DATA_WIDTH = 8;
    localparam DEPTH = 8;
    localparam BATCH_SIZE = 4;

    logic clk, rst_n;
    logic write_en, read_en;
    logic [DATA_WIDTH-1:0] data_in;
    logic [DATA_WIDTH-1:0] batch_out [0:BATCH_SIZE-1]; // Unpacked array
    logic empty, full, half_full;

    // Instantiate the FIFO
    fifo #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(DEPTH),
        .BATCH_SIZE(BATCH_SIZE)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .write_en(write_en),
        .data_in(data_in),
        .read_en(read_en),
        .batch_out(batch_out),
        .empty(empty),
        .full(full),
        .half_full(half_full)
    );

    // Clock Generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Test Sequence
    initial begin
        // 1. Initialize
        rst_n = 0; write_en = 0; read_en = 0; data_in = 0;
        #20 rst_n = 1; @(posedge clk);

        // 2. Push 8 items into the FIFO
        $display("--- PUSHING 8 ITEMS ---");
        for (int i = 1; i <= 8; i++) begin
            write_en = 1;
            data_in = i; // Push values 1, 2, 3, 4, 5, 6, 7, 8
            @(posedge clk);
        end
        write_en = 0;

        // 3. Check Flags & FWFT Output
        @(posedge clk);
        $display("Half Full Flag: %b (Expected: 1)", half_full);
        
        // Because of FWFT, the output ALREADY shows the first 4 items!
        $display("Current Batch Out (Peek): %p", batch_out); 

        // 4. Pop First Batch
        $display("\n--- POPPING BATCH 1 ---");
        read_en = 1; 
        @(posedge clk); // Clock edge registers the read
        read_en = 0;
        
        @(posedge clk); // Give the comb logic a cycle to update the peek
        $display("Next Batch Out (Peek): %p", batch_out); // Should now be 5, 6, 7, 8

        // 5. Pop Second Batch
        $display("\n--- POPPING BATCH 2 ---");
        read_en = 1;
        @(posedge clk);
        read_en = 0;
        
        @(posedge clk);
        $display("Empty Flag: %b (Expected: 1)", empty);

        // 6. Test Simultaneous Read & Write Edge Case
        $display("\n--- SIMULTANEOUS READ/WRITE TEST ---");
        // Fill it with exactly 4 items so a batch is ready
        for (int i = 10; i <= 13; i++) begin
            write_en = 1; data_in = i; @(posedge clk);
        end
        
        // Read the batch (10, 11, 12, 13) AND write a new item (99) concurrently
        write_en = 1; data_in = 99;
        read_en  = 1;
        @(posedge clk);
        write_en = 0; read_en = 0;
        
        @(posedge clk);
        $display("Empty Flag: %b (Expected: 0, because we wrote 99 while reading)", empty);
        $display("New Current Batch Peek: %p", batch_out); 

        #20 $finish;
    end
endmodule