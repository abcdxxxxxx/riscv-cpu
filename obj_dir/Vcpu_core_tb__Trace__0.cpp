// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_core_tb__Syms.h"


void Vcpu_core_tb___024root__trace_chg_0_sub_0(Vcpu_core_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu_core_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root__trace_chg_0\n"); );
    // Init
    Vcpu_core_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_core_tb___024root*>(voidSelf);
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu_core_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu_core_tb___024root__trace_chg_0_sub_0(Vcpu_core_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+32,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__pc_current),32);
        bufp->chgIData(oldp+33,(((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__jump)
                                  ? vlSelfRef.cpu_core_tb__DOT__dut__DOT____VdfgRegularize_h6dbabbbd_0_0
                                  : (((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__branch) 
                                      & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__rs1_data 
                                         == vlSelfRef.cpu_core_tb__DOT__dut__DOT__rs2_data))
                                      ? vlSelfRef.cpu_core_tb__DOT__dut__DOT____VdfgRegularize_h6dbabbbd_0_0
                                      : ((IData)(4U) 
                                         + vlSelfRef.cpu_core_tb__DOT__dut__DOT__pc_current)))),32);
        bufp->chgIData(oldp+34,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction),32);
        bufp->chgCData(oldp+35,((0x7fU & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)),7);
        bufp->chgCData(oldp+36,((0x1fU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                          >> 7U))),5);
        bufp->chgCData(oldp+37,((7U & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+38,((0x1fU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+39,((0x1fU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+40,((vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                 >> 0x19U)),7);
        bufp->chgBit(oldp+41,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__reg_write));
        bufp->chgBit(oldp+42,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__mem_write));
        bufp->chgBit(oldp+43,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__mem_read));
        bufp->chgBit(oldp+44,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__branch));
        bufp->chgBit(oldp+45,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__jump));
        bufp->chgCData(oldp+46,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control),3);
        bufp->chgIData(oldp+47,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rs1_data),32);
        bufp->chgIData(oldp+48,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__rs2_data),32);
        bufp->chgIData(oldp+49,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_result),32);
        bufp->chgIData(oldp+50,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__immediate),32);
        bufp->chgCData(oldp+51,(vlSelfRef.cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode),7);
    }
    bufp->chgBit(oldp+52,(vlSelfRef.cpu_core_tb__DOT__clk));
    bufp->chgBit(oldp+53,(vlSelfRef.cpu_core_tb__DOT__reset));
    bufp->chgIData(oldp+54,(((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__mem_read)
                              ? vlSelfRef.cpu_core_tb__DOT__dut__DOT__dmem_inst__DOT__mem
                             [(0xffU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_result 
                                        >> 2U))] : 0U)),32);
}

void Vcpu_core_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root__trace_cleanup\n"); );
    // Init
    Vcpu_core_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_core_tb___024root*>(voidSelf);
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
