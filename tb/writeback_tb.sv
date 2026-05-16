module writeback_tb;

logic clk;

// Register file signals
logic [4:0] rs1;
logic [4:0] rs2;

logic [31:0] rs1_data;
logic [31:0] rs2_data;

logic reg_write;
logic [4:0] rd;

logic [31:0] write_data;


// Clock generation
always #5 clk = ~clk;


// Register File
register_file rf(

    .clk(clk),

    .rs1(rs1),
    .rs2(rs2),

    .rs1_data(rs1_data),
    .rs2_data(rs2_data),

    .reg_write(reg_write),

    .rd(rd),
    .write_data(write_data)

);


initial begin

    clk = 0;

    // Write 5 into x1
    reg_write = 1;

    rd = 5'd1;

    write_data = 32'd5;

    rs1 = 5'd1;
    rs2 = 5'd0;

    #10;

    // Disable write
    reg_write = 0;

    #10;

    $display("x1 = %0d", rs1_data);

    $finish;

end

endmodule
