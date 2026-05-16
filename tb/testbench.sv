module testbench;

logic clk;
logic reset;

top dut(
    .clk(clk),
    .reset(reset)
);

// Clock generation
always #5 clk = ~clk;

initial begin

    clk = 0;
    reset = 1;

    #10;
    reset = 0;

    #50;

    $finish;

end

endmodule
