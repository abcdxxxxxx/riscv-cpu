module instruction_memory(
    input logic [31:0] addr,
    output logic [31:0] instruction
);

logic [31:0] mem [0:255];

initial begin
    $readmemh("tests/program.mem", mem);
end

assign instruction = mem[addr[9:2]];

endmodule
