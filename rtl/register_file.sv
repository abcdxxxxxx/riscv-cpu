module register_file(
    input logic clk,

    input logic [4:0] rs1,
    input logic [4:0] rs2,

    output logic [31:0] rs1_data,
    output logic [31:0] rs2_data,

    input logic reg_write,
    input logic [4:0] rd,
    input logic [31:0] write_data
);

logic [31:0] regs [0:31];

// x0 is always zero
// Read with write-through forwarding
assign rs1_data = (rs1 == 0) ? 0 : regs[rs1];
assign rs2_data = (rs2 == 0) ? 0 : regs[rs2];

always_ff @(posedge clk) begin

    if(reg_write && rd != 0)
        regs[rd] <= write_data;

end

endmodule
