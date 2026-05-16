module alu_tb;

logic [31:0] a;
logic [31:0] b;

logic [2:0] alu_control;

logic [31:0] result;

// Instantiate ALU
alu dut(
    .a(a),
    .b(b),
    .alu_control(alu_control),
    .result(result)
);

initial begin

    a = 10;
    b = 5;

    // ADD
    alu_control = 3'b000;
    #10;
    $display("ADD Result = %0d", result);

    // SUB
    alu_control = 3'b001;
    #10;
    $display("SUB Result = %0d", result);

    // AND
    alu_control = 3'b010;
    #10;
    $display("AND Result = %0d", result);

    // OR
    alu_control = 3'b011;
    #10;
    $display("OR Result = %0d", result);

    $finish;

end

endmodule
