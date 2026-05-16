# RISC-V Single-Cycle CPU

A single-cycle RV32I CPU implemented in SystemVerilog, simulated using Verilator.

## Architecture

PC → Instruction Memory → Decoder → Control Unit → Register File → ALU → Writeback

## Features
- RV32I ISA instructions
- ADD, SUB, AND, OR, XOR (R-type)
- ADDI (I-type)
- LW, SW (Load/Store)
- BEQ (Branch)
- JAL (Jump)
- Immediate Generator (I/S/B/J type)

## Project Structure

riscv_cpu/
├── rtl/
│   ├── pc.sv
│   ├── instruction_memory.sv
│   ├── decoder.sv
│   ├── control_unit.sv
│   ├── register_file.sv
│   ├── immediate_generator.sv
│   ├── alu.sv
│   ├── data_memory.sv
│   └── cpu_core.sv
├── tb/
│   └── cpu_core_tb.sv
└── tests/
└── program.mem
Tools

SystemVerilog
Verilator v5.032
GTKWave

Run Simulation
verilator --binary --top-module cpu_core_tb rtl/*.sv tb/cpu_core_tb.sv
./obj_dir/Vcpu_core_tb


