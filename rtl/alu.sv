module alu(
  input  logic [31:0] a,
  input  logic [31:0] b,
  input  logic [2:0]  alu_control,
  output logic [31:0] result
);
  always_comb begin
    case(alu_control)
      3'b000: result = a + b;   // ADD / ADDI
      3'b001: result = a - b;   // SUB
      3'b010: result = ($signed(a) < $signed(b)) ? 32'd1 : 32'd0; // SLT
      3'b100: result = a ^ b;   // XOR
      3'b101: result = a >> b[4:0]; // SRL
      3'b110: result = a | b;   // OR
      3'b111: result = a & b;   // AND
      default: result = 32'd0;
    endcase
  end
endmodule
