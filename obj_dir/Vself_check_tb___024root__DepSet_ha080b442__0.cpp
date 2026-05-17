// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vself_check_tb.h for the primary calling header

#include "Vself_check_tb__pch.h"
#include "Vself_check_tb___024root.h"

VL_ATTR_COLD void Vself_check_tb___024root___eval_initial__TOP(Vself_check_tb___024root* vlSelf);
VlCoroutine Vself_check_tb___024root___eval_initial__TOP__Vtiming__0(Vself_check_tb___024root* vlSelf);
VlCoroutine Vself_check_tb___024root___eval_initial__TOP__Vtiming__1(Vself_check_tb___024root* vlSelf);

void Vself_check_tb___024root___eval_initial(Vself_check_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vself_check_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_check_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vself_check_tb___024root___eval_initial__TOP(vlSelf);
    Vself_check_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vself_check_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__self_check_tb__DOT__clk__0 
        = vlSelfRef.self_check_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__self_check_tb__DOT__reset__0 
        = vlSelfRef.self_check_tb__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vself_check_tb___024root___eval_initial__TOP__Vtiming__0(Vself_check_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vself_check_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_check_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtask_self_check_tb__DOT__check__0__name;
    IData/*31:0*/ __Vtask_self_check_tb__DOT__check__0__got;
    __Vtask_self_check_tb__DOT__check__0__got = 0;
    IData/*31:0*/ __Vtask_self_check_tb__DOT__check__0__expected;
    __Vtask_self_check_tb__DOT__check__0__expected = 0;
    // Body
    vlSelfRef.self_check_tb__DOT__clk = 0U;
    vlSelfRef.self_check_tb__DOT__reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/self_check_tb.sv", 
                                         27);
    vlSelfRef.self_check_tb__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x118ULL, 
                                         nullptr, "tb/self_check_tb.sv", 
                                         29);
    __Vtask_self_check_tb__DOT__check__0__expected = 8U;
    __Vtask_self_check_tb__DOT__check__0__got = vlSelfRef.self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs
        [0xaU];
    __Vtask_self_check_tb__DOT__check__0__name = std::string{"add(5,3) = x10"};
    if ((__Vtask_self_check_tb__DOT__check__0__got 
         == __Vtask_self_check_tb__DOT__check__0__expected)) {
        VL_WRITEF_NX("PASS: %@ = %0#\n",0,-1,&(__Vtask_self_check_tb__DOT__check__0__name),
                     32,__Vtask_self_check_tb__DOT__check__0__got);
        vlSelfRef.self_check_tb__DOT__pass_count = 
            ((IData)(1U) + vlSelfRef.self_check_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: %@ = %0# (expected %0#)\n",0,
                     -1,&(__Vtask_self_check_tb__DOT__check__0__name),
                     32,__Vtask_self_check_tb__DOT__check__0__got,
                     32,__Vtask_self_check_tb__DOT__check__0__expected);
        vlSelfRef.self_check_tb__DOT__fail_count = 
            ((IData)(1U) + vlSelfRef.self_check_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("--- Results: %0d PASS, %0d FAIL ---\n",0,
                 32,vlSelfRef.self_check_tb__DOT__pass_count,
                 32,vlSelfRef.self_check_tb__DOT__fail_count);
    if ((0U == vlSelfRef.self_check_tb__DOT__fail_count)) {
        VL_WRITEF_NX("ALL TESTS PASSED!\n",0);
    } else {
        VL_WRITEF_NX("SOME TESTS FAILED!\n",0);
    }
    VL_FINISH_MT("tb/self_check_tb.sv", 38, "");
}

VL_INLINE_OPT VlCoroutine Vself_check_tb___024root___eval_initial__TOP__Vtiming__1(Vself_check_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vself_check_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_check_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/self_check_tb.sv", 
                                             6);
        vlSelfRef.self_check_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.self_check_tb__DOT__clk)));
    }
}

void Vself_check_tb___024root___eval_act(Vself_check_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vself_check_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_check_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vself_check_tb___024root___nba_sequent__TOP__0(Vself_check_tb___024root* vlSelf);
void Vself_check_tb___024root___nba_sequent__TOP__1(Vself_check_tb___024root* vlSelf);
void Vself_check_tb___024root___nba_sequent__TOP__2(Vself_check_tb___024root* vlSelf);
void Vself_check_tb___024root___nba_comb__TOP__0(Vself_check_tb___024root* vlSelf);

void Vself_check_tb___024root___eval_nba(Vself_check_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vself_check_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_check_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vself_check_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vself_check_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vself_check_tb___024root___nba_sequent__TOP__2(vlSelf);
        Vself_check_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vself_check_tb___024root___nba_sequent__TOP__0(Vself_check_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vself_check_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_check_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0;
    __VdlyVal__self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0;
    __VdlyDim0__self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0;
    __VdlySet__self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__self_check_tb__DOT__dut__DOT__dmem_inst__DOT__mem__v0;
    __VdlyVal__self_check_tb__DOT__dut__DOT__dmem_inst__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__self_check_tb__DOT__dut__DOT__dmem_inst__DOT__mem__v0;
    __VdlyDim0__self_check_tb__DOT__dut__DOT__dmem_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__self_check_tb__DOT__dut__DOT__dmem_inst__DOT__mem__v0;
    __VdlySet__self_check_tb__DOT__dut__DOT__dmem_inst__DOT__mem__v0 = 0;
    // Body
    __VdlySet__self_check_tb__DOT__dut__DOT__dmem_inst__DOT__mem__v0 = 0U;
    __VdlySet__self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0 = 0U;
    if (vlSelfRef.self_check_tb__DOT__dut__DOT__mem_write) {
        __VdlyVal__self_check_tb__DOT__dut__DOT__dmem_inst__DOT__mem__v0 
            = vlSelfRef.self_check_tb__DOT__dut__DOT__rs2_data;
        __VdlyDim0__self_check_tb__DOT__dut__DOT__dmem_inst__DOT__mem__v0 
            = (0x3ffU & (vlSelfRef.self_check_tb__DOT__dut__DOT__alu_result 
                         >> 2U));
        __VdlySet__self_check_tb__DOT__dut__DOT__dmem_inst__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__reg_write) 
         & (0U != (0x1fU & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                            >> 7U))))) {
        __VdlyVal__self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0 
            = ((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__mem_read)
                ? vlSelfRef.self_check_tb__DOT__dut__DOT__mem_read_data
                : vlSelfRef.self_check_tb__DOT__dut__DOT__alu_result);
        __VdlyDim0__self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0 
            = (0x1fU & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                        >> 7U));
        __VdlySet__self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0 = 1U;
    }
    vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_we_4 
        = vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_we_3;
    vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_result_4 
        = vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_result_3;
    vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_4 
        = vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_3;
    if (__VdlySet__self_check_tb__DOT__dut__DOT__dmem_inst__DOT__mem__v0) {
        vlSelfRef.self_check_tb__DOT__dut__DOT__dmem_inst__DOT__mem[__VdlyDim0__self_check_tb__DOT__dut__DOT__dmem_inst__DOT__mem__v0] 
            = __VdlyVal__self_check_tb__DOT__dut__DOT__dmem_inst__DOT__mem__v0;
    }
    if (__VdlySet__self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0) {
        vlSelfRef.self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs[__VdlyDim0__self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0] 
            = __VdlyVal__self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs__v0;
    }
    vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_we_3 
        = vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_we_2;
    vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_result_3 
        = vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_result_2;
    vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_3 
        = vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_2;
    vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_we_2 
        = vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_we_1;
    vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_result_2 
        = vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_result_1;
    vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_2 
        = vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_1;
    vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_we_1 
        = vlSelfRef.self_check_tb__DOT__dut__DOT__reg_write;
    vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_result_1 
        = ((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__mem_read)
            ? vlSelfRef.self_check_tb__DOT__dut__DOT__mem_read_data
            : vlSelfRef.self_check_tb__DOT__dut__DOT__alu_result);
    vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_1 
        = (0x1fU & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                    >> 7U));
}

VL_INLINE_OPT void Vself_check_tb___024root___nba_sequent__TOP__1(Vself_check_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vself_check_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_check_tb___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("PC=%x | INST=%x | RD=%0# | ALU=%0# | MEM=%0# | MW=%b | MR=%b\n",0,
                 32,vlSelfRef.self_check_tb__DOT__dut__DOT__pc_current,
                 32,vlSelfRef.self_check_tb__DOT__dut__DOT__instruction,
                 5,(0x1fU & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                             >> 7U)),32,vlSelfRef.self_check_tb__DOT__dut__DOT__alu_result,
                 32,vlSelfRef.self_check_tb__DOT__dut__DOT__mem_read_data,
                 1,(IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__mem_write),
                 1,vlSelfRef.self_check_tb__DOT__dut__DOT__mem_read);
}

VL_INLINE_OPT void Vself_check_tb___024root___nba_sequent__TOP__2(Vself_check_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vself_check_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_check_tb___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode;
    self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode = 0;
    // Body
    vlSelfRef.self_check_tb__DOT__dut__DOT__pc_current 
        = ((IData)(vlSelfRef.self_check_tb__DOT__reset)
            ? 0U : vlSelfRef.self_check_tb__DOT__dut__DOT__pc_next);
    self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode 
        = (0x7fU & vlSelfRef.self_check_tb__DOT__dut__DOT__imem_inst__DOT__mem
           [(0x3ffU & (vlSelfRef.self_check_tb__DOT__dut__DOT__pc_current 
                       >> 2U))]);
    vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
        = vlSelfRef.self_check_tb__DOT__dut__DOT__imem_inst__DOT__mem
        [(0x3ffU & (vlSelfRef.self_check_tb__DOT__dut__DOT__pc_current 
                    >> 2U))];
    vlSelfRef.self_check_tb__DOT__dut__DOT__reg_write = 0U;
    vlSelfRef.self_check_tb__DOT__dut__DOT__mem_write = 0U;
    vlSelfRef.self_check_tb__DOT__dut__DOT__mem_read = 0U;
    if ((1U & (~ (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                  >> 6U)))) {
        if ((0x20U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
            if ((1U & (~ (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
                            if ((1U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
                                vlSelfRef.self_check_tb__DOT__dut__DOT__mem_write = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                      >> 5U)))) {
            if ((1U & (~ (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
                            if ((1U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
                                vlSelfRef.self_check_tb__DOT__dut__DOT__mem_read = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.self_check_tb__DOT__dut__DOT__jump = 0U;
    vlSelfRef.self_check_tb__DOT__dut__DOT__branch = 0U;
    vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control = 0U;
    if ((0x40U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
        if ((0x20U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
            if ((0x10U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
                vlSelfRef.self_check_tb__DOT__dut__DOT__reg_write = 0U;
                vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control = 0U;
            } else if ((8U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
                vlSelfRef.self_check_tb__DOT__dut__DOT__reg_write 
                    = ((1U & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                              >> 2U)) && ((1U & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)));
                if ((4U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
                    if ((2U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
                        if ((1U & (~ vlSelfRef.self_check_tb__DOT__dut__DOT__instruction))) {
                            vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control = 0U;
                        }
                    } else {
                        vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control = 0U;
                    }
                } else {
                    vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control = 0U;
                }
            } else if ((4U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
                vlSelfRef.self_check_tb__DOT__dut__DOT__reg_write = 0U;
                vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control = 0U;
            } else if ((2U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
                if ((1U & (~ vlSelfRef.self_check_tb__DOT__dut__DOT__instruction))) {
                    vlSelfRef.self_check_tb__DOT__dut__DOT__reg_write = 0U;
                    vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control = 0U;
                }
            } else {
                vlSelfRef.self_check_tb__DOT__dut__DOT__reg_write = 0U;
                vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control = 0U;
            }
            if ((1U & (~ (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                          >> 4U)))) {
                if ((8U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
                    if ((4U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
                        if ((2U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
                            if ((1U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
                                vlSelfRef.self_check_tb__DOT__dut__DOT__jump = 1U;
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
                            if ((1U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
                                vlSelfRef.self_check_tb__DOT__dut__DOT__branch = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            vlSelfRef.self_check_tb__DOT__dut__DOT__reg_write = 0U;
            vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control = 0U;
        }
    } else if ((0x20U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)) {
        vlSelfRef.self_check_tb__DOT__dut__DOT__reg_write 
            = ((1U & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                      >> 4U)) && ((1U & (~ (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                            >> 3U))) 
                                  && ((1U & (~ (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)))));
        vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control 
            = ((0x10U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)
                ? ((8U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)
                    ? 0U : ((4U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)
                             ? 0U : ((2U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)
                                      ? ((1U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)
                                          ? ((IData)(
                                                     (0x40000000U 
                                                      == 
                                                      (0xfe007000U 
                                                       & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)))
                                              ? 1U : 
                                             (7U & 
                                              (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                               >> 0xcU)))
                                          : 0U) : 0U)))
                : 0U);
    } else {
        vlSelfRef.self_check_tb__DOT__dut__DOT__reg_write 
            = ((0x10U & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)
                ? ((1U & (~ (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction))))
                : ((1U & (~ (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction)))));
        vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control = 0U;
    }
    vlSelfRef.self_check_tb__DOT__dut__DOT__immediate 
        = ((0x40U & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
            ? ((0x20U & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                ? ((0x10U & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                    ? 0U : ((8U & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                             ? ((4U & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                 ? ((2U & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                     ? ((1U & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                         ? ((((- (IData)(
                                                         (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                          >> 0x1fU))) 
                                              << 0x15U) 
                                             | (0x100000U 
                                                & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                   >> 0xbU))) 
                                            | (((0xff000U 
                                                 & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction) 
                                                | (0x800U 
                                                   & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                      >> 9U))) 
                                               | (0x7feU 
                                                  & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                     >> 0x14U))))
                                         : 0U) : 0U)
                                 : 0U) : ((4U & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                                 >> 7U)))))
                                                     : 0U)
                                                    : 0U))))
                : 0U) : ((0x20U & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                          ? ((0x10U & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                              ? 0U : ((8U & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                       ? 0U : ((4U 
                                                & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                                ? 0U
                                                : (
                                                   (2U 
                                                    & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                              >> 7U))))
                                                     : 0U)
                                                    : 0U))))
                          : ((8U & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                              ? 0U : ((4U & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                       ? 0U : ((2U 
                                                & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                                ? (
                                                   (1U 
                                                    & (IData)(self_check_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                       >> 0x14U))
                                                    : 0U)
                                                : 0U)))));
    vlSelfRef.self_check_tb__DOT__dut__DOT____VdfgRegularize_h6dbabbbd_0_0 
        = (vlSelfRef.self_check_tb__DOT__dut__DOT__immediate 
           + vlSelfRef.self_check_tb__DOT__dut__DOT__pc_current);
}

VL_INLINE_OPT void Vself_check_tb___024root___nba_comb__TOP__0(Vself_check_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vself_check_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_check_tb___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ self_check_tb__DOT__dut__DOT__rs1_data;
    self_check_tb__DOT__dut__DOT__rs1_data = 0;
    IData/*31:0*/ self_check_tb__DOT__dut__DOT__alu_b;
    self_check_tb__DOT__dut__DOT__alu_b = 0;
    IData/*31:0*/ self_check_tb__DOT__dut__DOT__rs1_fwd;
    self_check_tb__DOT__dut__DOT__rs1_fwd = 0;
    // Body
    self_check_tb__DOT__dut__DOT__rs1_data = ((0U == 
                                               (0x1fU 
                                                & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                   >> 0xfU)))
                                               ? 0U
                                               : vlSelfRef.self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs
                                              [(0x1fU 
                                                & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                   >> 0xfU))]);
    vlSelfRef.self_check_tb__DOT__dut__DOT__rs2_data 
        = ((0U == (0x1fU & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                            >> 0x14U))) ? 0U : vlSelfRef.self_check_tb__DOT__dut__DOT__rf_inst__DOT__regs
           [(0x1fU & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                      >> 0x14U))]);
    self_check_tb__DOT__dut__DOT__rs1_fwd = ((((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_we_1) 
                                               & ((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_1) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                      >> 0xfU)))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_1)))
                                              ? vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_result_1
                                              : ((((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_we_2) 
                                                   & ((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_2) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                          >> 0xfU)))) 
                                                  & (0U 
                                                     != (IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_2)))
                                                  ? vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_result_2
                                                  : 
                                                 ((((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_we_3) 
                                                    & ((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_3) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                           >> 0xfU)))) 
                                                   & (0U 
                                                      != (IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_3)))
                                                   ? vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_result_3
                                                   : 
                                                  ((((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_we_4) 
                                                     & ((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_4) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                            >> 0xfU)))) 
                                                    & (0U 
                                                       != (IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_4)))
                                                    ? vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_result_4
                                                    : self_check_tb__DOT__dut__DOT__rs1_data))));
    self_check_tb__DOT__dut__DOT__alu_b = ((0x33U == 
                                            (0x7fU 
                                             & vlSelfRef.self_check_tb__DOT__dut__DOT__instruction))
                                            ? ((((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_we_1) 
                                                 & ((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_1) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                        >> 0x14U)))) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_1)))
                                                ? vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_result_1
                                                : (
                                                   (((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_we_2) 
                                                     & ((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_2) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                            >> 0x14U)))) 
                                                    & (0U 
                                                       != (IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_2)))
                                                    ? vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_result_2
                                                    : 
                                                   ((((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_we_3) 
                                                      & ((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_3) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                             >> 0x14U)))) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_3)))
                                                     ? vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_result_3
                                                     : 
                                                    ((((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_we_4) 
                                                       & ((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_4) 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelfRef.self_check_tb__DOT__dut__DOT__instruction 
                                                              >> 0x14U)))) 
                                                      & (0U 
                                                         != (IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_rd_4)))
                                                      ? vlSelfRef.self_check_tb__DOT__dut__DOT__fwd_result_4
                                                      : vlSelfRef.self_check_tb__DOT__dut__DOT__rs2_data))))
                                            : vlSelfRef.self_check_tb__DOT__dut__DOT__immediate);
    vlSelfRef.self_check_tb__DOT__dut__DOT__pc_next 
        = ((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__jump)
            ? vlSelfRef.self_check_tb__DOT__dut__DOT____VdfgRegularize_h6dbabbbd_0_0
            : (((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__branch) 
                & (self_check_tb__DOT__dut__DOT__rs1_data 
                   == vlSelfRef.self_check_tb__DOT__dut__DOT__rs2_data))
                ? vlSelfRef.self_check_tb__DOT__dut__DOT____VdfgRegularize_h6dbabbbd_0_0
                : ((IData)(4U) + vlSelfRef.self_check_tb__DOT__dut__DOT__pc_current)));
    vlSelfRef.self_check_tb__DOT__dut__DOT__alu_result 
        = ((4U & (IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control))
            ? ((2U & (IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control))
                ? ((1U & (IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control))
                    ? (self_check_tb__DOT__dut__DOT__rs1_fwd 
                       & self_check_tb__DOT__dut__DOT__alu_b)
                    : (self_check_tb__DOT__dut__DOT__rs1_fwd 
                       | self_check_tb__DOT__dut__DOT__alu_b))
                : ((1U & (IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control))
                    ? (self_check_tb__DOT__dut__DOT__rs1_fwd 
                       >> (0x1fU & self_check_tb__DOT__dut__DOT__alu_b))
                    : (self_check_tb__DOT__dut__DOT__rs1_fwd 
                       ^ self_check_tb__DOT__dut__DOT__alu_b)))
            : ((2U & (IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control))
                ? ((1U & (IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control))
                    ? 0U : (VL_LTS_III(32, self_check_tb__DOT__dut__DOT__rs1_fwd, self_check_tb__DOT__dut__DOT__alu_b)
                             ? 1U : 0U)) : ((1U & (IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__alu_control))
                                             ? (self_check_tb__DOT__dut__DOT__rs1_fwd 
                                                - self_check_tb__DOT__dut__DOT__alu_b)
                                             : (self_check_tb__DOT__dut__DOT__rs1_fwd 
                                                + self_check_tb__DOT__dut__DOT__alu_b))));
    vlSelfRef.self_check_tb__DOT__dut__DOT__mem_read_data 
        = ((IData)(vlSelfRef.self_check_tb__DOT__dut__DOT__mem_read)
            ? vlSelfRef.self_check_tb__DOT__dut__DOT__dmem_inst__DOT__mem
           [(0x3ffU & (vlSelfRef.self_check_tb__DOT__dut__DOT__alu_result 
                       >> 2U))] : 0U);
}

void Vself_check_tb___024root___timing_resume(Vself_check_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vself_check_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_check_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vself_check_tb___024root___eval_triggers__act(Vself_check_tb___024root* vlSelf);

bool Vself_check_tb___024root___eval_phase__act(Vself_check_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vself_check_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_check_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vself_check_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vself_check_tb___024root___timing_resume(vlSelf);
        Vself_check_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vself_check_tb___024root___eval_phase__nba(Vself_check_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vself_check_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_check_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vself_check_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vself_check_tb___024root___dump_triggers__nba(Vself_check_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vself_check_tb___024root___dump_triggers__act(Vself_check_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vself_check_tb___024root___eval(Vself_check_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vself_check_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_check_tb___024root___eval\n"); );
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
            Vself_check_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/self_check_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vself_check_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/self_check_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vself_check_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vself_check_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vself_check_tb___024root___eval_debug_assertions(Vself_check_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vself_check_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_check_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
