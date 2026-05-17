module pc_properties(
    input logic clk,
    input logic reset,
    input logic [31:0] next_pc
);

logic [31:0] current_pc;
pc dut (.*);

`ifdef FORMAL
    assume property (next_pc[1:0] == 2'b00);

    logic first_cycle;
    initial first_cycle = 1;
    always @(posedge clk) first_cycle <= 0;

    // Reset history track karo
    logic prev_reset;
    always @(posedge clk) prev_reset <= reset;

    // Property 1: Reset ke baad PC 0 hoga
    always @(posedge clk)
        if (!first_cycle && reset)
            assert(current_pc == 32'h0);

    // Property 2: PC aligned hoga
    always @(posedge clk)
        if (!first_cycle && !reset)
            assert(current_pc[1:0] == 2'b00);

    // Property 3: Normal operation mein PC = prev next_pc
    // (sirf tab jab reset nahi tha pichle cycle mein)
    logic [31:0] prev_next_pc;
    always @(posedge clk)
        prev_next_pc <= next_pc;

    always @(posedge clk)
        if (!first_cycle && !reset && !prev_reset)
            assert(current_pc == prev_next_pc);
`endif

endmodule
