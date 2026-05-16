module data_memory(

    input logic clk,

    input logic mem_write,
    input logic mem_read,

    input logic [31:0] addr,
    input logic [31:0] write_data,

    output logic [31:0] read_data

);

logic [31:0] mem [0:255];


// Write
always_ff @(posedge clk) begin

    if(mem_write)

        mem[addr[9:2]] <= write_data;

end


// Read
always_comb begin

    if(mem_read)

        read_data = mem[addr[9:2]];

    else

        read_data = 32'd0;

end

endmodule
