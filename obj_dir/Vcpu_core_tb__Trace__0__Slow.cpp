// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_core_tb__Syms.h"


VL_ATTR_COLD void Vcpu_core_tb___024root__trace_init_sub__TOP__0(Vcpu_core_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("cpu_core_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"pc_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+49,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+54,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"alu_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+60,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"mem_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"memory_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"fwd_result_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"fwd_result_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"fwd_result_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"fwd_result_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"fwd_rd_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"fwd_rd_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"fwd_rd_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"fwd_rd_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+9,0,"fwd_we_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"fwd_we_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"fwd_we_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"fwd_we_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"rs1_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"rs2_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+65,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"alu_control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+62,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("control_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+50,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+53,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+54,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"alu_control",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("decoder_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+47,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+49,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("dmem_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("imem_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("imm_gen_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+47,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"current_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+62,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+13+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcpu_core_tb___024root__trace_init_top(Vcpu_core_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_core_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu_core_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcpu_core_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_core_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_core_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu_core_tb___024root__trace_register(Vcpu_core_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcpu_core_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcpu_core_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcpu_core_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcpu_core_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu_core_tb___024root__trace_const_0_sub_0(Vcpu_core_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_core_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root__trace_const_0\n"); );
    // Init
    Vcpu_core_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_core_tb___024root*>(voidSelf);
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu_core_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_core_tb___024root__trace_const_0_sub_0(Vcpu_core_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+71,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__memory_read_data),32);
}

VL_ATTR_COLD void Vcpu_core_tb___024root__trace_full_0_sub_0(Vcpu_core_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_core_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root__trace_full_0\n"); );
    // Init
    Vcpu_core_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_core_tb___024root*>(voidSelf);
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu_core_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_core_tb___024root__trace_full_0_sub_0(Vcpu_core_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_1),32);
    bufp->fullIData(oldp+2,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_2),32);
    bufp->fullIData(oldp+3,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_3),32);
    bufp->fullIData(oldp+4,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_4),32);
    bufp->fullCData(oldp+5,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_1),5);
    bufp->fullCData(oldp+6,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_2),5);
    bufp->fullCData(oldp+7,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_3),5);
    bufp->fullCData(oldp+8,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_4),5);
    bufp->fullBit(oldp+9,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_1));
    bufp->fullBit(oldp+10,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_2));
    bufp->fullBit(oldp+11,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_3));
    bufp->fullBit(oldp+12,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_4));
    bufp->fullIData(oldp+13,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[0]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[1]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[2]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[3]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[4]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[5]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[6]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[7]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[8]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[9]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[10]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[11]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[12]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[13]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[14]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[15]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[16]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[17]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[18]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[19]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[20]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[21]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[22]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[23]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[24]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[25]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[26]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[27]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[28]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[29]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[30]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[31]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__pc_current),32);
    bufp->fullIData(oldp+46,(((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__jump)
                               ? vlSelfRef.cpu_core_tb__DOT__dut__DOT____VdfgRegularize_h6dbabbbd_0_0
                               : (((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__branch) 
                                   & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__rs1_data 
                                      == vlSelfRef.cpu_core_tb__DOT__dut__DOT__rs2_data))
                                   ? vlSelfRef.cpu_core_tb__DOT__dut__DOT____VdfgRegularize_h6dbabbbd_0_0
                                   : ((IData)(4U) + vlSelfRef.cpu_core_tb__DOT__dut__DOT__pc_current)))),32);
    bufp->fullIData(oldp+47,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction),32);
    bufp->fullCData(oldp+48,((0x7fU & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)),7);
    bufp->fullCData(oldp+49,((0x1fU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                       >> 7U))),5);
    bufp->fullCData(oldp+50,((7U & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+51,((0x1fU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+52,((0x1fU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+53,((vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+54,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__reg_write));
    bufp->fullBit(oldp+55,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__mem_write));
    bufp->fullBit(oldp+56,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__mem_read));
    bufp->fullBit(oldp+57,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__branch));
    bufp->fullBit(oldp+58,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__jump));
    bufp->fullCData(oldp+59,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control),3);
    bufp->fullIData(oldp+60,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rs1_data),32);
    bufp->fullIData(oldp+61,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rs2_data),32);
    bufp->fullIData(oldp+62,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_result),32);
    bufp->fullIData(oldp+63,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__immediate),32);
    bufp->fullIData(oldp+64,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_b),32);
    bufp->fullIData(oldp+65,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rs1_fwd),32);
    bufp->fullCData(oldp+66,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode),7);
    bufp->fullBit(oldp+67,(vlSelfRef.cpu_core_tb__DOT__clk));
    bufp->fullBit(oldp+68,(vlSelfRef.cpu_core_tb__DOT__reset));
    bufp->fullIData(oldp+69,(((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__mem_read)
                               ? vlSelfRef.cpu_core_tb__DOT__dut__DOT__dmem_inst__DOT__mem
                              [(0xffU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_result 
                                         >> 2U))] : 0U)),32);
    bufp->fullIData(oldp+70,(((((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_1) 
                                & ((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_1) 
                                   == (0x1fU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                >> 0x14U)))) 
                               & (0U != (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_1)))
                               ? vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_1
                               : ((((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_2) 
                                    & ((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_2) 
                                       == (0x1fU & 
                                           (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                            >> 0x14U)))) 
                                   & (0U != (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_2)))
                                   ? vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_2
                                   : ((((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_3) 
                                        & ((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_3) 
                                           == (0x1fU 
                                               & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                  >> 0x14U)))) 
                                       & (0U != (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_3)))
                                       ? vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_3
                                       : ((((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_4) 
                                            & ((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_4) 
                                               == (0x1fU 
                                                   & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                      >> 0x14U)))) 
                                           & (0U != (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_4)))
                                           ? vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_4
                                           : vlSelfRef.cpu_core_tb__DOT__dut__DOT__rs2_data))))),32);
}
