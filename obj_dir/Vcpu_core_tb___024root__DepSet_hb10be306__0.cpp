// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_core_tb.h for the primary calling header

#include "Vcpu_core_tb__pch.h"
#include "Vcpu_core_tb__Syms.h"
#include "Vcpu_core_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vcpu_core_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x61766573U;
    __Vtemp_1[2U] = 0x77U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    VL_PRINTF_MT("-Info: tb/cpu_core_tb.sv:14: $dumpvar ignored, as Verilated without --trace\n");
    vlSelfRef.cpu_core_tb__DOT__clk = 0U;
    vlSelfRef.cpu_core_tb__DOT__reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/cpu_core_tb.sv", 
                                         17);
    vlSelfRef.cpu_core_tb__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x15eULL, 
                                         nullptr, "tb/cpu_core_tb.sv", 
                                         19);
    VL_FINISH_MT("tb/cpu_core_tb.sv", 20, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_core_tb___024root___dump_triggers__act(Vcpu_core_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu_core_tb___024root___eval_triggers__act(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.cpu_core_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_core_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.cpu_core_tb__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_core_tb__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.cpu_core_tb__DOT__reset) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_core_tb__DOT__reset__0))));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_core_tb__DOT__clk__0 
        = vlSelfRef.cpu_core_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_core_tb__DOT__reset__0 
        = vlSelfRef.cpu_core_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_core_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
