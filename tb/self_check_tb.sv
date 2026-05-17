module self_check_tb;
logic clk, reset;
int pass_count = 0;
int fail_count = 0;

always #5 clk = ~clk;

cpu_core dut(.clk(clk), .reset(reset));

logic [31:0] reg_x3, reg_x4, reg_x5, reg_x6, reg_x7, reg_x31;
assign reg_x3  = dut.rf_inst.regs[3];
assign reg_x4  = dut.rf_inst.regs[4];
assign reg_x5  = dut.rf_inst.regs[5];
assign reg_x6  = dut.rf_inst.regs[6];
assign reg_x7  = dut.rf_inst.regs[7];
assign reg_x31 = dut.rf_inst.regs[31];

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
    #200;

    check("ADD  x3 = 5+3",  reg_x3,  32'd8);
    check("ADDI x4 = 10",   reg_x4,  32'd10);
    check("SUB  x5 = 5-3",  reg_x5,  32'd2);
    check("AND  x6 = 5&3",  reg_x6,  32'd1);
    check("OR   x7 = 5|3",  reg_x7,  32'd7);
    check("PASS x31 = 1",   reg_x31, 32'd1);

    $display("--- Results: %0d PASS, %0d FAIL ---", pass_count, fail_count);
    if (fail_count == 0)
        $display("ALL COMPLIANCE TESTS PASSED!");
    else
        $display("SOME TESTS FAILED!");
    $finish;
end
endmodule
