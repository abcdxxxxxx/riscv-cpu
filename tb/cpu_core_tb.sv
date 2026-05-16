module cpu_core_tb;

logic clk;
logic reset;


// Clock generation
always #5 clk = ~clk;


// CPU Core
cpu_core dut(
    .clk(clk),
    .reset(reset)
);


initial begin

    clk = 0;

    reset = 1;

    #10;

    reset = 0;

    #350;

    $finish;

end

endmodule
