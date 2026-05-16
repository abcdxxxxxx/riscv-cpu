// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_core_tb.h for the primary calling header

#include "Vcpu_core_tb__pch.h"
#include "Vcpu_core_tb___024root.h"

VL_ATTR_COLD void Vcpu_core_tb___024root___eval_initial__TOP(Vcpu_core_tb___024root* vlSelf);
VlCoroutine Vcpu_core_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_core_tb___024root* vlSelf);
VlCoroutine Vcpu_core_tb___024root___eval_initial__TOP__Vtiming__1(Vcpu_core_tb___024root* vlSelf);

void Vcpu_core_tb___024root___eval_initial(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_core_tb___024root___eval_initial__TOP(vlSelf);
    Vcpu_core_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcpu_core_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_core_tb__DOT__clk__0 
        = vlSelfRef.cpu_core_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_core_tb__DOT__reset__0 
        = vlSelfRef.cpu_core_tb__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vcpu_core_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_core_tb__DOT__clk = 0U;
    vlSelfRef.cpu_core_tb__DOT__reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/cpu_core_tb.sv", 
                                         24);
    vlSelfRef.cpu_core_tb__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x15eULL, 
                                         nullptr, "tb/cpu_core_tb.sv", 
                                         28);
    VL_FINISH_MT("tb/cpu_core_tb.sv", 30, "");
}

VL_INLINE_OPT VlCoroutine Vcpu_core_tb___024root___eval_initial__TOP__Vtiming__1(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/cpu_core_tb.sv", 
                                             8);
        vlSelfRef.cpu_core_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.cpu_core_tb__DOT__clk)));
    }
}

void Vcpu_core_tb___024root___eval_act(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcpu_core_tb___024root___nba_sequent__TOP__0(Vcpu_core_tb___024root* vlSelf);
void Vcpu_core_tb___024root___nba_sequent__TOP__1(Vcpu_core_tb___024root* vlSelf);
void Vcpu_core_tb___024root___nba_sequent__TOP__2(Vcpu_core_tb___024root* vlSelf);
void Vcpu_core_tb___024root___nba_comb__TOP__0(Vcpu_core_tb___024root* vlSelf);

void Vcpu_core_tb___024root___eval_nba(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcpu_core_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcpu_core_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcpu_core_tb___024root___nba_sequent__TOP__2(vlSelf);
        Vcpu_core_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcpu_core_tb___024root___nba_sequent__TOP__0(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0;
    __VdlyVal__cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0;
    __VdlyDim0__cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0;
    __VdlySet__cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0 = 0;
    // Body
    __VdlySet__cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0 = 0U;
    if (((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__reg_write) 
         & (0U != (0x1fU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                            >> 7U))))) {
        __VdlyVal__cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0 
            = vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_result;
        __VdlyDim0__cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0 
            = (0x1fU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                        >> 7U));
        __VdlySet__cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0 = 1U;
    }
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_4 
        = vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_3;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_4 
        = vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_3;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_4 
        = vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_3;
    if (__VdlySet__cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0) {
        vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[__VdlyDim0__cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0] 
            = __VdlyVal__cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0;
    }
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_3 
        = vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_2;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_3 
        = vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_2;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_3 
        = vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_2;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_2 
        = vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_1;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_2 
        = vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_1;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_2 
        = vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_1;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_1 
        = vlSelfRef.cpu_core_tb__DOT__dut__DOT__reg_write;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_1 
        = vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_result;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_1 
        = (0x1fU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                    >> 7U));
}

VL_INLINE_OPT void Vcpu_core_tb___024root___nba_sequent__TOP__1(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("PC=%x | INST=%x | RD=%0# | ALU=%0#\n",0,
                 32,vlSelfRef.cpu_core_tb__DOT__dut__DOT__pc_current,
                 32,vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction,
                 5,(0x1fU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                             >> 7U)),32,vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_result);
}

VL_INLINE_OPT void Vcpu_core_tb___024root___nba_sequent__TOP__2(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode;
    cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode = 0;
    // Body
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__pc_current 
        = ((IData)(vlSelfRef.cpu_core_tb__DOT__reset)
            ? 0U : vlSelfRef.cpu_core_tb__DOT__dut__DOT__pc_next);
    cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode 
        = (0x7fU & vlSelfRef.cpu_core_tb__DOT__dut__DOT__imem_inst__DOT__mem
           [(0xffU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__pc_current 
                      >> 2U))]);
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
        = vlSelfRef.cpu_core_tb__DOT__dut__DOT__imem_inst__DOT__mem
        [(0xffU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__pc_current 
                   >> 2U))];
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__reg_write = 0U;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control = 0U;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__jump = 0U;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__branch = 0U;
    if ((0x40U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
        if ((0x20U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
            if ((0x10U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
                vlSelfRef.cpu_core_tb__DOT__dut__DOT__reg_write = 0U;
                vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control = 0U;
            } else if ((8U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
                vlSelfRef.cpu_core_tb__DOT__dut__DOT__reg_write 
                    = ((1U & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                              >> 2U)) && ((1U & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)));
                if ((4U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
                    if ((2U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
                        if ((1U & (~ vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction))) {
                            vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control = 0U;
                        }
                    } else {
                        vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control = 0U;
                    }
                } else {
                    vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control = 0U;
                }
            } else if ((4U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
                vlSelfRef.cpu_core_tb__DOT__dut__DOT__reg_write = 0U;
                vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control = 0U;
            } else if ((2U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
                if ((1U & (~ vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction))) {
                    vlSelfRef.cpu_core_tb__DOT__dut__DOT__reg_write = 0U;
                    vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control = 0U;
                }
            } else {
                vlSelfRef.cpu_core_tb__DOT__dut__DOT__reg_write = 0U;
                vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control = 0U;
            }
            if ((1U & (~ (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                          >> 4U)))) {
                if ((8U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
                    if ((4U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
                        if ((2U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
                            if ((1U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
                                vlSelfRef.cpu_core_tb__DOT__dut__DOT__jump = 1U;
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
                            if ((1U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
                                vlSelfRef.cpu_core_tb__DOT__dut__DOT__branch = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            vlSelfRef.cpu_core_tb__DOT__dut__DOT__reg_write = 0U;
            vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control = 0U;
        }
    } else if ((0x20U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
        vlSelfRef.cpu_core_tb__DOT__dut__DOT__reg_write 
            = ((1U & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                      >> 4U)) && ((1U & (~ (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                            >> 3U))) 
                                  && ((1U & (~ (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)))));
        vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control 
            = ((0x10U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)
                ? ((8U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)
                    ? 0U : ((4U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)
                             ? 0U : ((2U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)
                                      ? ((1U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)
                                          ? ((IData)(
                                                     (0x40000000U 
                                                      == 
                                                      (0xfe007000U 
                                                       & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)))
                                              ? 1U : 
                                             (7U & 
                                              (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                               >> 0xcU)))
                                          : 0U) : 0U)))
                : 0U);
    } else {
        vlSelfRef.cpu_core_tb__DOT__dut__DOT__reg_write 
            = ((0x10U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)
                ? ((1U & (~ (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction))))
                : ((1U & (~ (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)))));
        vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control = 0U;
    }
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__immediate 
        = ((0x40U & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
            ? ((0x20U & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                ? ((0x10U & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                    ? 0U : ((8U & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                             ? ((4U & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                 ? ((2U & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                     ? ((1U & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                         ? ((((- (IData)(
                                                         (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                          >> 0x1fU))) 
                                              << 0x15U) 
                                             | (0x100000U 
                                                & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                   >> 0xbU))) 
                                            | (((0xff000U 
                                                 & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction) 
                                                | (0x800U 
                                                   & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                      >> 9U))) 
                                               | (0x7feU 
                                                  & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                     >> 0x14U))))
                                         : 0U) : 0U)
                                 : 0U) : ((4U & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                                 >> 7U)))))
                                                     : 0U)
                                                    : 0U))))
                : 0U) : ((0x20U & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                          ? ((0x10U & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                              ? 0U : ((8U & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                       ? 0U : ((4U 
                                                & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                                ? 0U
                                                : (
                                                   (2U 
                                                    & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                              >> 7U))))
                                                     : 0U)
                                                    : 0U))))
                          : ((8U & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                              ? 0U : ((4U & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                       ? 0U : ((2U 
                                                & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                                ? (
                                                   (1U 
                                                    & (IData)(cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                       >> 0x14U))
                                                    : 0U)
                                                : 0U)))));
    vlSelfRef.cpu_core_tb__DOT__dut__DOT____VdfgRegularize_h6dbabbbd_0_0 
        = (vlSelfRef.cpu_core_tb__DOT__dut__DOT__immediate 
           + vlSelfRef.cpu_core_tb__DOT__dut__DOT__pc_current);
}

VL_INLINE_OPT void Vcpu_core_tb___024root___nba_comb__TOP__0(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__rs1_data;
    cpu_core_tb__DOT__dut__DOT__rs1_data = 0;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__rs2_data;
    cpu_core_tb__DOT__dut__DOT__rs2_data = 0;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__alu_b;
    cpu_core_tb__DOT__dut__DOT__alu_b = 0;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__rs1_fwd;
    cpu_core_tb__DOT__dut__DOT__rs1_fwd = 0;
    // Body
    cpu_core_tb__DOT__dut__DOT__rs1_data = ((0U == 
                                             (0x1fU 
                                              & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                 >> 0xfU)))
                                             ? 0U : 
                                            vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs
                                            [(0x1fU 
                                              & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                 >> 0xfU))]);
    cpu_core_tb__DOT__dut__DOT__rs2_data = ((0U == 
                                             (0x1fU 
                                              & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                 >> 0x14U)))
                                             ? 0U : 
                                            vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs
                                            [(0x1fU 
                                              & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                 >> 0x14U))]);
    cpu_core_tb__DOT__dut__DOT__rs1_fwd = ((((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_1) 
                                             & ((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_1) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                    >> 0xfU)))) 
                                            & (0U != (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_1)))
                                            ? vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_1
                                            : ((((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_2) 
                                                 & ((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_2) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                        >> 0xfU)))) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_2)))
                                                ? vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_2
                                                : (
                                                   (((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_3) 
                                                     & ((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_3) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                            >> 0xfU)))) 
                                                    & (0U 
                                                       != (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_3)))
                                                    ? vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_3
                                                    : 
                                                   ((((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_4) 
                                                      & ((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_4) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                             >> 0xfU)))) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_4)))
                                                     ? vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_4
                                                     : cpu_core_tb__DOT__dut__DOT__rs1_data))));
    cpu_core_tb__DOT__dut__DOT__alu_b = ((0x33U == 
                                          (0x7fU & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction))
                                          ? ((((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_1) 
                                               & ((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_1) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                      >> 0x14U)))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_1)))
                                              ? vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_1
                                              : ((((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_2) 
                                                   & ((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_2) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                          >> 0x14U)))) 
                                                  & (0U 
                                                     != (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_2)))
                                                  ? vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_2
                                                  : 
                                                 ((((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_3) 
                                                    & ((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_3) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                           >> 0x14U)))) 
                                                   & (0U 
                                                      != (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_3)))
                                                   ? vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_3
                                                   : 
                                                  ((((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_we_4) 
                                                     & ((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_4) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                            >> 0x14U)))) 
                                                    & (0U 
                                                       != (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_rd_4)))
                                                    ? vlSelfRef.cpu_core_tb__DOT__dut__DOT__fwd_result_4
                                                    : cpu_core_tb__DOT__dut__DOT__rs2_data))))
                                          : vlSelfRef.cpu_core_tb__DOT__dut__DOT__immediate);
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__pc_next = 
        ((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__jump)
          ? vlSelfRef.cpu_core_tb__DOT__dut__DOT____VdfgRegularize_h6dbabbbd_0_0
          : (((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__branch) 
              & (cpu_core_tb__DOT__dut__DOT__rs1_data 
                 == cpu_core_tb__DOT__dut__DOT__rs2_data))
              ? vlSelfRef.cpu_core_tb__DOT__dut__DOT____VdfgRegularize_h6dbabbbd_0_0
              : ((IData)(4U) + vlSelfRef.cpu_core_tb__DOT__dut__DOT__pc_current)));
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_result 
        = ((4U & (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control))
            ? ((2U & (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control))
                ? ((1U & (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control))
                    ? (cpu_core_tb__DOT__dut__DOT__rs1_fwd 
                       & cpu_core_tb__DOT__dut__DOT__alu_b)
                    : (cpu_core_tb__DOT__dut__DOT__rs1_fwd 
                       | cpu_core_tb__DOT__dut__DOT__alu_b))
                : ((1U & (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control))
                    ? (cpu_core_tb__DOT__dut__DOT__rs1_fwd 
                       >> (0x1fU & cpu_core_tb__DOT__dut__DOT__alu_b))
                    : (cpu_core_tb__DOT__dut__DOT__rs1_fwd 
                       ^ cpu_core_tb__DOT__dut__DOT__alu_b)))
            : ((2U & (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control))
                ? ((1U & (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control))
                    ? 0U : (VL_LTS_III(32, cpu_core_tb__DOT__dut__DOT__rs1_fwd, cpu_core_tb__DOT__dut__DOT__alu_b)
                             ? 1U : 0U)) : ((1U & (IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control))
                                             ? (cpu_core_tb__DOT__dut__DOT__rs1_fwd 
                                                - cpu_core_tb__DOT__dut__DOT__alu_b)
                                             : (cpu_core_tb__DOT__dut__DOT__rs1_fwd 
                                                + cpu_core_tb__DOT__dut__DOT__alu_b))));
}

void Vcpu_core_tb___024root___timing_resume(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcpu_core_tb___024root___eval_triggers__act(Vcpu_core_tb___024root* vlSelf);

bool Vcpu_core_tb___024root___eval_phase__act(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcpu_core_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcpu_core_tb___024root___timing_resume(vlSelf);
        Vcpu_core_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcpu_core_tb___024root___eval_phase__nba(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcpu_core_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_core_tb___024root___dump_triggers__nba(Vcpu_core_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_core_tb___024root___dump_triggers__act(Vcpu_core_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu_core_tb___024root___eval(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval\n"); );
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
            Vcpu_core_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/cpu_core_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vcpu_core_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/cpu_core_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcpu_core_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcpu_core_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcpu_core_tb___024root___eval_debug_assertions(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
