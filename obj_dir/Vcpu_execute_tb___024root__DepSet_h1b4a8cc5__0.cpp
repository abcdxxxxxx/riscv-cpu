// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_execute_tb.h for the primary calling header

#include "Vcpu_execute_tb__pch.h"
#include "Vcpu_execute_tb___024root.h"

VL_ATTR_COLD void Vcpu_execute_tb___024root___eval_initial__TOP(Vcpu_execute_tb___024root* vlSelf);
VlCoroutine Vcpu_execute_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_execute_tb___024root* vlSelf);

void Vcpu_execute_tb___024root___eval_initial(Vcpu_execute_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_execute_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_execute_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_execute_tb___024root___eval_initial__TOP(vlSelf);
    Vcpu_execute_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vcpu_execute_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_execute_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_execute_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_execute_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_execute_tb__DOT__instruction = 0x100093U;
    vlSelfRef.cpu_execute_tb__DOT__a = 0xaU;
    vlSelfRef.cpu_execute_tb__DOT__b = 5U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/cpu_execute_tb.sv", 
                                         79);
    VL_WRITEF_NX("Opcode = %b\nRegister Write = %b\nALU Result = %0#\n",0,
                 7,vlSelfRef.cpu_execute_tb__DOT__opcode,
                 1,(IData)(vlSelfRef.cpu_execute_tb__DOT__reg_write),
                 32,vlSelfRef.cpu_execute_tb__DOT__result);
    VL_FINISH_MT("tb/cpu_execute_tb.sv", 86, "");
}

void Vcpu_execute_tb___024root___act_sequent__TOP__0(Vcpu_execute_tb___024root* vlSelf);

void Vcpu_execute_tb___024root___eval_act(Vcpu_execute_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_execute_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_execute_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcpu_execute_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcpu_execute_tb___024root___act_sequent__TOP__0(Vcpu_execute_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_execute_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_execute_tb___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_execute_tb__DOT__opcode = (0x7fU 
                                             & vlSelfRef.cpu_execute_tb__DOT__instruction);
    vlSelfRef.cpu_execute_tb__DOT__reg_write = ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.cpu_execute_tb__DOT__instruction)) 
                                                || (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.cpu_execute_tb__DOT__instruction)));
    vlSelfRef.cpu_execute_tb__DOT__result = ((4U & (IData)(vlSelfRef.cpu_execute_tb__DOT__alu_control))
                                              ? 0U : 
                                             ((2U & (IData)(vlSelfRef.cpu_execute_tb__DOT__alu_control))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.cpu_execute_tb__DOT__alu_control))
                                                   ? 
                                                  (vlSelfRef.cpu_execute_tb__DOT__a 
                                                   | vlSelfRef.cpu_execute_tb__DOT__b)
                                                   : 
                                                  (vlSelfRef.cpu_execute_tb__DOT__a 
                                                   & vlSelfRef.cpu_execute_tb__DOT__b))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.cpu_execute_tb__DOT__alu_control))
                                                   ? 
                                                  (vlSelfRef.cpu_execute_tb__DOT__a 
                                                   - vlSelfRef.cpu_execute_tb__DOT__b)
                                                   : 
                                                  (vlSelfRef.cpu_execute_tb__DOT__a 
                                                   + vlSelfRef.cpu_execute_tb__DOT__b))));
}

void Vcpu_execute_tb___024root___eval_nba(Vcpu_execute_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_execute_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_execute_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcpu_execute_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vcpu_execute_tb___024root___timing_resume(Vcpu_execute_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_execute_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_execute_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcpu_execute_tb___024root___eval_triggers__act(Vcpu_execute_tb___024root* vlSelf);

bool Vcpu_execute_tb___024root___eval_phase__act(Vcpu_execute_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_execute_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_execute_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcpu_execute_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcpu_execute_tb___024root___timing_resume(vlSelf);
        Vcpu_execute_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcpu_execute_tb___024root___eval_phase__nba(Vcpu_execute_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_execute_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_execute_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcpu_execute_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_execute_tb___024root___dump_triggers__nba(Vcpu_execute_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_execute_tb___024root___dump_triggers__act(Vcpu_execute_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu_execute_tb___024root___eval(Vcpu_execute_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_execute_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_execute_tb___024root___eval\n"); );
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
            Vcpu_execute_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/cpu_execute_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vcpu_execute_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/cpu_execute_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcpu_execute_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcpu_execute_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcpu_execute_tb___024root___eval_debug_assertions(Vcpu_execute_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_execute_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_execute_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
