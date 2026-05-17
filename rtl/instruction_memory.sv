module instruction_memory(
    input logic [31:0] addr,
    output logic [31:0] instruction
);

logic [31:0] mem [0:1023];

initial begin
    $readmemh("tests/program.mem", mem);
end

assign instruction = mem[addr[11:2]];

endmodule
