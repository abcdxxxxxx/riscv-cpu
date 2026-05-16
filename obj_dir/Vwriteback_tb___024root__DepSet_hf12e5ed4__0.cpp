// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwriteback_tb.h for the primary calling header

#include "Vwriteback_tb__pch.h"
#include "Vwriteback_tb___024root.h"

VlCoroutine Vwriteback_tb___024root___eval_initial__TOP__Vtiming__0(Vwriteback_tb___024root* vlSelf);
VlCoroutine Vwriteback_tb___024root___eval_initial__TOP__Vtiming__1(Vwriteback_tb___024root* vlSelf);

void Vwriteback_tb___024root___eval_initial(Vwriteback_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vwriteback_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwriteback_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vwriteback_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vwriteback_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__writeback_tb__DOT__clk__0 
        = vlSelfRef.writeback_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vwriteback_tb___024root___eval_initial__TOP__Vtiming__0(Vwriteback_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vwriteback_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwriteback_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.writeback_tb__DOT__clk = 0U;
    vlSelfRef.writeback_tb__DOT__reg_write = 1U;
    vlSelfRef.writeback_tb__DOT__rd = 1U;
    vlSelfRef.writeback_tb__DOT__write_data = 5U;
    vlSelfRef.writeback_tb__DOT__rs1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/writeback_tb.sv", 
                                         55);
    vlSelfRef.writeback_tb__DOT__reg_write = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/writeback_tb.sv", 
                                         60);
    VL_WRITEF_NX("x1 = %0#\n",0,32,vlSelfRef.writeback_tb__DOT__rs1_data);
    VL_FINISH_MT("tb/writeback_tb.sv", 64, "");
}

VL_INLINE_OPT VlCoroutine Vwriteback_tb___024root___eval_initial__TOP__Vtiming__1(Vwriteback_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vwriteback_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwriteback_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/writeback_tb.sv", 
                                             19);
        vlSelfRef.writeback_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.writeback_tb__DOT__clk)));
    }
}

void Vwriteback_tb___024root___act_sequent__TOP__0(Vwriteback_tb___024root* vlSelf);

void Vwriteback_tb___024root___eval_act(Vwriteback_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vwriteback_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwriteback_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vwriteback_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vwriteback_tb___024root___act_sequent__TOP__0(Vwriteback_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vwriteback_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwriteback_tb___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.writeback_tb__DOT__rs1_data = ((0U == (IData)(vlSelfRef.writeback_tb__DOT__rs1))
                                              ? 0U : 
                                             vlSelfRef.writeback_tb__DOT__rf__DOT__regs
                                             [vlSelfRef.writeback_tb__DOT__rs1]);
}

void Vwriteback_tb___024root___nba_sequent__TOP__0(Vwriteback_tb___024root* vlSelf);

void Vwriteback_tb___024root___eval_nba(Vwriteback_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vwriteback_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwriteback_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vwriteback_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vwriteback_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vwriteback_tb___024root___nba_sequent__TOP__0(Vwriteback_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vwriteback_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwriteback_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__writeback_tb__DOT__rf__DOT__regs__v0;
    __VdlyVal__writeback_tb__DOT__rf__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__writeback_tb__DOT__rf__DOT__regs__v0;
    __VdlyDim0__writeback_tb__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__writeback_tb__DOT__rf__DOT__regs__v0;
    __VdlySet__writeback_tb__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__writeback_tb__DOT__rf__DOT__regs__v0 = 0U;
    if (((IData)(vlSelfRef.writeback_tb__DOT__reg_write) 
         & (0U != (IData)(vlSelfRef.writeback_tb__DOT__rd)))) {
        __VdlyVal__writeback_tb__DOT__rf__DOT__regs__v0 
            = vlSelfRef.writeback_tb__DOT__write_data;
        __VdlyDim0__writeback_tb__DOT__rf__DOT__regs__v0 
            = vlSelfRef.writeback_tb__DOT__rd;
        __VdlySet__writeback_tb__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__writeback_tb__DOT__rf__DOT__regs__v0) {
        vlSelfRef.writeback_tb__DOT__rf__DOT__regs[__VdlyDim0__writeback_tb__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__writeback_tb__DOT__rf__DOT__regs__v0;
    }
}

void Vwriteback_tb___024root___timing_resume(Vwriteback_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vwriteback_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwriteback_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vwriteback_tb___024root___eval_triggers__act(Vwriteback_tb___024root* vlSelf);

bool Vwriteback_tb___024root___eval_phase__act(Vwriteback_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vwriteback_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwriteback_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vwriteback_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vwriteback_tb___024root___timing_resume(vlSelf);
        Vwriteback_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vwriteback_tb___024root___eval_phase__nba(Vwriteback_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vwriteback_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwriteback_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vwriteback_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwriteback_tb___024root___dump_triggers__nba(Vwriteback_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vwriteback_tb___024root___dump_triggers__act(Vwriteback_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vwriteback_tb___024root___eval(Vwriteback_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vwriteback_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwriteback_tb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vwriteback_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/writeback_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vwriteback_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/writeback_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vwriteback_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vwriteback_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vwriteback_tb___024root___eval_debug_assertions(Vwriteback_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vwriteback_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwriteback_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
