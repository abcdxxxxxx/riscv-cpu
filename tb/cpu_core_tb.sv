module cpu_core_tb;
logic clk;
logic reset;

always #5 clk = ~clk;

cpu_core dut(
    .clk(clk),
    .reset(reset)
);

initial begin
    $dumpfile("waves.vcd");
    $dumpvars(0, cpu_core_tb);
    clk = 0;
    reset = 1;
    #10;
    reset = 0;
    #350;
    $finish;
end
endmodule
