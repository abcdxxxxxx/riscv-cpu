// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_execute_tb.h for the primary calling header

#ifndef VERILATED_VCPU_EXECUTE_TB___024ROOT_H_
#define VERILATED_VCPU_EXECUTE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcpu_execute_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu_execute_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*6:0*/ cpu_execute_tb__DOT__opcode;
    CData/*0:0*/ cpu_execute_tb__DOT__reg_write;
    CData/*2:0*/ cpu_execute_tb__DOT__alu_control;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ cpu_execute_tb__DOT__instruction;
    IData/*31:0*/ cpu_execute_tb__DOT__a;
    IData/*31:0*/ cpu_execute_tb__DOT__b;
    IData/*31:0*/ cpu_execute_tb__DOT__result;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcpu_execute_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu_execute_tb___024root(Vcpu_execute_tb__Syms* symsp, const char* v__name);
    ~Vcpu_execute_tb___024root();
    VL_UNCOPYABLE(Vcpu_execute_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
