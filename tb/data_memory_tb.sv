module data_memory_tb;

logic clk;

logic mem_write;
logic mem_read;

logic [31:0] addr;
logic [31:0] write_data;

logic [31:0] read_data;


// Clock
always #5 clk = ~clk;


// DUT
data_memory dut(

    .clk(clk),

    .mem_write(mem_write),
    .mem_read(mem_read),

    .addr(addr),

    .write_data(write_data),

    .read_data(read_data)

);


initial begin

    clk = 0;

    // Write 25 to memory[0]
    mem_write = 1;
    mem_read = 0;

    addr = 0;

    write_data = 25;

    #10;


    // Read back
    mem_write = 0;
    mem_read = 1;

    #10;


    $display("Memory Read = %0d", read_data);

    $finish;

end

endmodule
