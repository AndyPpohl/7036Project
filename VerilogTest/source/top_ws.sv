`timescale 1ns/1ns

module top_ws #(
    parameter DIM   = 14,
    parameter DATAW = 8,
    parameter PSUMW = 32
)(
    input  logic                       clk,
    input  logic                       rst_n,
    
    input  logic signed start,

    input  logic signed [DIM*DIM*DATAW-1:0]   weights_in,

    input  logic signed [DIM*DATAW-1:0] in_a [0:DIM-1][0:DIM-1],

    output logic signed [DIM*PSUMW-1:0] out_c [0:DIM-1][0:DIM-1]
);

  //loads weights into input weight matrix and then tells the system to load
  //new weights in by pulsing the load_weight signal
always_ff @(posedge clk, negedge nrst) begin

    if(nrst) begin
        weightflag <= 0;
    end
    else begin 
        for (r = 0; r < DIM; r++) begin
            for (c = 0; c < DIM; c++) begin
                weights_in_skew[((r*DIM + c)+1) * DATAW - 1 -: DATAW] <= weights_in[r][c];
            end
        end

        if((r == (DIM-1)) && !weightflag) begin
            weightflag <= 1;
            load_weight <= 1;
        end
        
        if(weightflag == 1) begin
            load_weight <= 0;
        end
    end
end


// ---------------------------------------------------------------------------
// run_multiply: clock-aligned streaming of A rows, then flush
//   - start is asserted on the posedge when column 0 is driven
//   - each subsequent column is driven on the next posedge
//   - in_a is zeroed and LATENCY extra clocks are waited for drain
// ---------------------------------------------------------------------------

always_ff @(posedge clk, negedge nrst) begin 
    
    if(nrst) begin
        r <= 0;
        k <= 0;
        firstrow  <= 0;
        in_a_skew <= 0;
    end    
    else begin
        if ((r < DIM) && (firstrow)) begin
            in_a_skew[(r+1)*DATAW-1 -: DATAW] <= in_a[0][r];
            start <= 1;

            if ((r + 1) == DIM) begin
                r <= 0;
                firstrow <= 0;
            end
            else begin
                r <= r + 1;
                firstrow <= 1;
            end
        end

        if ((k < DIM) && (!firstrow)) begin 
            start <= 0;
            in_a_skew[(r+1)*DATAW-1 -: DATAW] = in_a[k][r];

            if ((r + 1) == DIM) begin
                r <= 0;
                k <= k + 1;
            end
            else begin
                r <= r + 1;
            end
        end
    end
end


  // ---------------------------------------------------------------------------
  // capture_outputs: keep polling for the row_valid signal, if we do get a row
  // valid signal, then we'll capture whatever value is on out_c and store it
  // into our big C_got array, once we've collected all output rows to fill the
  // matrix, then we'll finish and print the whole thing
  // ---------------------------------------------------------------------------
always_ff @(posedge clk, negedge nrst) begin 
    
    if(nrst) begin 
        row <= 0;
        out_c <= 0;
    end 
    else begin
        if (row < DIM) begin
            if (row_valid) begin
                // Capture this row
                for (c = 0; c < DIM; c++)
                    out_c[row][c] <= out_c_skew[(c+1)*PSUMW-1 -: PSUMW];

                row <= row + 1;
            end
        end
    end
end



endmodule