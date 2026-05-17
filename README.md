# RISC-V Single-Cycle CPU

A single-cycle RV32I CPU implemented in SystemVerilog, simulated using Verilator and formally verified using SymbiYosys + Z3.

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
- 4-stage forwarding pipeline for data hazard resolution
- Yosys synthesis: ~1018 cells, ~100-150 MHz estimated

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
├── tests/
│   └── program.mem
├── synthesis/
│   └── synth.ys
└── formal/
├── pc_properties.sv
└── verify_pc.sby

## Tools

- SystemVerilog
- Verilator v5.032
- GTKWave
- Yosys v0.52 (Synthesis)
- SymbiYosys v0.65 + Z3 (Formal Verification)

## Run Simulation

```bash
verilator --binary --top-module cpu_core_tb rtl/*.sv tb/cpu_core_tb.sv
./obj_dir/Vcpu_core_tb
```

## Run Synthesis (Yosys)

```bash
yosys synthesis/synth.ys
```

## Run Formal Verification (SymbiYosys)

```bash
sby -f formal/verify_pc.sby
```

### Formally Verified Properties (PC Module)

| Property | Description | Status |
|----------|-------------|--------|
| Reset correctness | PC = 0x0 after reset | ✅ PASS |
| Alignment | PC always 4-byte aligned | ✅ PASS |
| Update correctness | PC correctly loads next_pc | ✅ PASS |

Verification uses Bounded Model Checking (BMC) with Z3 SMT solver over 10 clock cycles.
