module cpu_execute_tb;

// Instruction
logic [31:0] instruction;

// Decoder outputs
logic [6:0] opcode;
logic [4:0] rd;

logic [2:0] funct3;

logic [4:0] rs1;
logic [4:0] rs2;

logic [6:0] funct7;

// Control outputs
logic reg_write;
logic [2:0] alu_control;

// ALU inputs/outputs
logic [31:0] a;
logic [31:0] b;

logic [31:0] result;


// Decoder
decoder decoder_inst(

    .instruction(instruction),

    .opcode(opcode),
    .rd(rd),

    .funct3(funct3),

    .rs1(rs1),
    .rs2(rs2),

    .funct7(funct7)

);


// Control Unit
control_unit control_inst(

    .opcode(opcode),

    .reg_write(reg_write),
    .alu_control(alu_control)

);


// ALU
alu alu_inst(

    .a(a),
    .b(b),

    .alu_control(alu_control),

    .result(result)

);


initial begin

    // ADDI x1, x0, 1
    instruction = 32'h00100093;

    // Test operands
    a = 10;
    b = 5;

    #10;

    $display("Opcode = %b", opcode);
    $display("Register Write = %b", reg_write);

    $display("ALU Result = %0d", result);

    $finish;

end

endmodule
