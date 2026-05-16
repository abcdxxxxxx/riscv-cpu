module top(
    input logic clk,
    input logic reset
);

logic [31:0] pc_current;
logic [31:0] pc_next;
logic [31:0] instruction;

assign pc_next = pc_current + 4;

// Program Counter
pc pc_inst(
    .clk(clk),
    .reset(reset),
    .next_pc(pc_next),
    .current_pc(pc_current)
);

// Instruction Memory
instruction_memory imem_inst(
    .addr(pc_current),
    .instruction(instruction)
);

always_ff @(posedge clk) begin
    $display("PC = %h | Instruction = %h", pc_current, instruction);
end

endmodule
