// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vwriteback_tb.h for the primary calling header

#ifndef VERILATED_VWRITEBACK_TB___024ROOT_H_
#define VERILATED_VWRITEBACK_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vwriteback_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vwriteback_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ writeback_tb__DOT__clk;
    CData/*4:0*/ writeback_tb__DOT__rs1;
    CData/*0:0*/ writeback_tb__DOT__reg_write;
    CData/*4:0*/ writeback_tb__DOT__rd;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__writeback_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ writeback_tb__DOT__rs1_data;
    IData/*31:0*/ writeback_tb__DOT__write_data;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> writeback_tb__DOT__rf__DOT__regs;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vwriteback_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vwriteback_tb___024root(Vwriteback_tb__Syms* symsp, const char* v__name);
    ~Vwriteback_tb___024root();
    VL_UNCOPYABLE(Vwriteback_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
