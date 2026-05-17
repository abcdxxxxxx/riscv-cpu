// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_core_tb.h for the primary calling header

#ifndef VERILATED_VCPU_CORE_TB___024ROOT_H_
#define VERILATED_VCPU_CORE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcpu_core_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu_core_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ cpu_core_tb__DOT__clk;
    CData/*0:0*/ cpu_core_tb__DOT__reset;
    CData/*0:0*/ cpu_core_tb__DOT__dut__DOT__reg_write;
    CData/*0:0*/ cpu_core_tb__DOT__dut__DOT__mem_write;
    CData/*0:0*/ cpu_core_tb__DOT__dut__DOT__mem_read;
    CData/*0:0*/ cpu_core_tb__DOT__dut__DOT__branch;
    CData/*0:0*/ cpu_core_tb__DOT__dut__DOT__jump;
    CData/*2:0*/ cpu_core_tb__DOT__dut__DOT__alu_control;
    CData/*4:0*/ cpu_core_tb__DOT__dut__DOT__fwd_rd_1;
    CData/*4:0*/ cpu_core_tb__DOT__dut__DOT__fwd_rd_2;
    CData/*4:0*/ cpu_core_tb__DOT__dut__DOT__fwd_rd_3;
    CData/*4:0*/ cpu_core_tb__DOT__dut__DOT__fwd_rd_4;
    CData/*0:0*/ cpu_core_tb__DOT__dut__DOT__fwd_we_1;
    CData/*0:0*/ cpu_core_tb__DOT__dut__DOT__fwd_we_2;
    CData/*0:0*/ cpu_core_tb__DOT__dut__DOT__fwd_we_3;
    CData/*0:0*/ cpu_core_tb__DOT__dut__DOT__fwd_we_4;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_core_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_core_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__pc_current;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__pc_next;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__instruction;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__rs2_data;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__mem_read_data;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__alu_result;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__immediate;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__fwd_result_1;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__fwd_result_2;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__fwd_result_3;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__fwd_result_4;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT____VdfgRegularize_h6dbabbbd_0_0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> cpu_core_tb__DOT__dut__DOT__imem_inst__DOT__mem;
    VlUnpacked<IData/*31:0*/, 32> cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs;
    VlUnpacked<IData/*31:0*/, 1024> cpu_core_tb__DOT__dut__DOT__dmem_inst__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcpu_core_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu_core_tb___024root(Vcpu_core_tb__Syms* symsp, const char* v__name);
    ~Vcpu_core_tb___024root();
    VL_UNCOPYABLE(Vcpu_core_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
