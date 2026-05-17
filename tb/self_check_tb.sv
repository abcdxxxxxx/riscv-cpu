module self_check_tb;
logic clk, reset;
int pass_count = 0;
int fail_count = 0;

always #5 clk = ~clk;

cpu_core dut(.clk(clk), .reset(reset));

// Register file access
logic [31:0] reg_x10;
assign reg_x10 = dut.rf_inst.regs[10];

task check(input string name, input logic [31:0] got, input logic [31:0] expected);
    if (got === expected) begin
        $display("PASS: %s = %0d", name, got);
        pass_count++;
    end else begin
        $display("FAIL: %s = %0d (expected %0d)", name, got, expected);
        fail_count++;
    end
endtask

initial begin
    clk = 0;
    reset = 1;
    #10;
    reset = 0;
    #280;    // sirf ek pass — loop se pehle

    check("add(5,3) = x10", reg_x10, 32'd8);

    $display("--- Results: %0d PASS, %0d FAIL ---", pass_count, fail_count);
    if (fail_count == 0)
        $display("ALL TESTS PASSED!");
    else
        $display("SOME TESTS FAILED!");
    $finish;
end
endmodule
