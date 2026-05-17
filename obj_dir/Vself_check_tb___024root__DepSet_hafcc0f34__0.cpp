// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vself_check_tb.h for the primary calling header

#include "Vself_check_tb__pch.h"
#include "Vself_check_tb__Syms.h"
#include "Vself_check_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vself_check_tb___024root___dump_triggers__act(Vself_check_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vself_check_tb___024root___eval_triggers__act(Vself_check_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vself_check_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_check_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.self_check_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__self_check_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.self_check_tb__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__self_check_tb__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.self_check_tb__DOT__reset) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__self_check_tb__DOT__reset__0))));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__self_check_tb__DOT__clk__0 
        = vlSelfRef.self_check_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__self_check_tb__DOT__reset__0 
        = vlSelfRef.self_check_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vself_check_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
