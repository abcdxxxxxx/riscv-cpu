module cpu_core(
    input logic clk,
    input logic reset
);

// PC
logic [31:0] pc_current;
logic [31:0] pc_next;

// Instruction
logic [31:0] instruction;

// Decoder
logic [6:0] opcode;
logic [4:0] rd;

logic [2:0] funct3;

logic [4:0] rs1;
logic [4:0] rs2;

logic [6:0] funct7;

// Control
logic reg_write;
logic mem_write;
logic mem_read;
logic branch;
logic jump;
logic [2:0] alu_control;

// Register file
logic [31:0] rs1_data;
logic [31:0] rs2_data;


logic [31:0] mem_read_data;

// ALU
logic [31:0] alu_result;
logic [31:0] immediate;
logic [31:0] alu_b;


// Next PC
assign pc_next =
    (jump) ? (pc_current + immediate) :
    (branch && (rs1_data == rs2_data)) ? (pc_current + immediate) :
    (pc_current + 4);

// PC
pc pc_inst(
    .clk(clk),
    .reset(reset),

    .next_pc(pc_next),
    .current_pc(pc_current)
);


// Instruction memory
instruction_memory imem_inst(
    .addr(pc_current),
    .instruction(instruction)
);


// Decoder
decoder decoder_inst(
    .instruction(instruction),

    .opcode(opcode),
    .rd(rd),

    .funct3(funct3),
    .funct7(funct7),  
    .rs1(rs1),
    .rs2(rs2)
    
);


// Control
control_unit control_inst(
    .opcode(opcode),
    .funct3(funct3),
    .funct7(funct7),   
    .reg_write(reg_write),
    .mem_write(mem_write),
    .mem_read(mem_read),
    .branch(branch),
    .jump(jump),
    .alu_control(alu_control)
);


// Register file
register_file rf_inst(

    .clk(clk),

    .rs1(rs1),
    .rs2(rs2),

    .rs1_data(rs1_data),
    .rs2_data(rs2_data),

    .reg_write(reg_write),

    .rd(rd),
    .write_data(mem_read ? mem_read_data : alu_result)
);

// Immediate Generator
immediate_generator imm_gen_inst(

    .instruction(instruction),

    .immediate(immediate)

);

// 4-stage forwarding pipeline
logic [31:0] fwd_result_1, fwd_result_2, fwd_result_3, fwd_result_4;
logic [4:0]  fwd_rd_1, fwd_rd_2, fwd_rd_3, fwd_rd_4;
logic        fwd_we_1, fwd_we_2, fwd_we_3, fwd_we_4;

always_ff @(posedge clk) begin
    fwd_result_1 <= mem_read ? mem_read_data : alu_result;
    fwd_rd_1 <= rd;  fwd_we_1 <= reg_write;
    fwd_result_2 <= fwd_result_1; fwd_rd_2 <= fwd_rd_1; fwd_we_2 <= fwd_we_1;
    fwd_result_3 <= fwd_result_2; fwd_rd_3 <= fwd_rd_2; fwd_we_3 <= fwd_we_2;
    fwd_result_4 <= fwd_result_3; fwd_rd_4 <= fwd_rd_3; fwd_we_4 <= fwd_we_3;
end

logic [31:0] rs1_fwd, rs2_fwd;

always_comb begin
    // rs1 forwarding - nearest match wins
    if      (fwd_we_1 && fwd_rd_1 == rs1 && fwd_rd_1 != 0) rs1_fwd = fwd_result_1;
    else if (fwd_we_2 && fwd_rd_2 == rs1 && fwd_rd_2 != 0) rs1_fwd = fwd_result_2;
    else if (fwd_we_3 && fwd_rd_3 == rs1 && fwd_rd_3 != 0) rs1_fwd = fwd_result_3;
    else if (fwd_we_4 && fwd_rd_4 == rs1 && fwd_rd_4 != 0) rs1_fwd = fwd_result_4;
    else rs1_fwd = rs1_data;

    // rs2 forwarding
    if      (fwd_we_1 && fwd_rd_1 == rs2 && fwd_rd_1 != 0) rs2_fwd = fwd_result_1;
    else if (fwd_we_2 && fwd_rd_2 == rs2 && fwd_rd_2 != 0) rs2_fwd = fwd_result_2;
    else if (fwd_we_3 && fwd_rd_3 == rs2 && fwd_rd_3 != 0) rs2_fwd = fwd_result_3;
    else if (fwd_we_4 && fwd_rd_4 == rs2 && fwd_rd_4 != 0) rs2_fwd = fwd_result_4;
    else rs2_fwd = rs2_data;
end

// ALU source select
assign alu_b = (opcode == 7'b0110011) ? rs2_fwd : immediate;

//ALU
alu alu_inst(
    .a(rs1_fwd),
    .b(alu_b),
    .alu_control(alu_control),
    .result(alu_result)
);

// Data memory
data_memory dmem_inst(

    .clk(clk),

    .mem_write(mem_write),
    .mem_read(mem_read),

    .addr(alu_result),

    .write_data(rs2_data),

    .read_data(mem_read_data)

);

always_ff @(negedge clk) begin
  $display("PC=%h | INST=%h | RD=%0d | ALU=%0d | MEM=%0d | MW=%b | MR=%b",
    pc_current, instruction, rd, alu_result, mem_read_data, mem_write, mem_read);
end

endmodule
