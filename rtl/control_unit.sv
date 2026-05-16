module control_unit(

    input logic [6:0] opcode,
    input  logic [2:0] funct3,
    input  logic [6:0] funct7,  
    output logic reg_write,

    output logic mem_write,
    output logic mem_read,
    output logic branch,
    output logic jump,
    output logic [2:0] alu_control

);

always_comb begin

    // Default values
    reg_write = 0;
    mem_write = 0;
    mem_read = 0;
    branch = 0;
    jump = 0;
    alu_control = 3'b000;

    case(opcode)

        // I-Type (ADDI)
        7'b0010011: begin

            reg_write = 1;

            // ADD
            alu_control = 3'b000;

        end

        // R-Type
        7'b0110011: begin
    	   reg_write = 1;
           // SUB ka funct7 = 0100000, ADD ka = 0000000
           if (funct3 == 3'b000 && funct7 == 7'b0100000)
               alu_control = 3'b001; // SUB
           else
           alu_control = funct3; // ADD/AND/OR/XOR etc
        end
        
        // LW
        7'b0000011: begin

           reg_write = 1;

           mem_read = 1;

           alu_control = 3'b000;

        end


        // SW
        7'b0100011: begin

           reg_write = 0;

           mem_write = 1;

           alu_control = 3'b000;

       end

       7'b1100011: begin

           branch = 1;

       end
      
       // JAL
       7'b1101111: begin

           reg_write = 1;
           jump = 1;
      end

        default: begin

            reg_write = 0;

            alu_control = 3'b000;

        end

    endcase

end

endmodule
