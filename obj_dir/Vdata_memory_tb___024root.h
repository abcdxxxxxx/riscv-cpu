// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_memory_tb.h for the primary calling header

#ifndef VERILATED_VDATA_MEMORY_TB___024ROOT_H_
#define VERILATED_VDATA_MEMORY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdata_memory_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdata_memory_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ data_memory_tb__DOT__clk;
    CData/*0:0*/ data_memory_tb__DOT__mem_write;
    CData/*0:0*/ data_memory_tb__DOT__mem_read;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__data_memory_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ data_memory_tb__DOT__addr;
    IData/*31:0*/ data_memory_tb__DOT__write_data;
    IData/*31:0*/ data_memory_tb__DOT__read_data;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> data_memory_tb__DOT__dut__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdata_memory_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_memory_tb___024root(Vdata_memory_tb__Syms* symsp, const char* v__name);
    ~Vdata_memory_tb___024root();
    VL_UNCOPYABLE(Vdata_memory_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
