// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_core_tb.h for the primary calling header

#include "Vcpu_core_tb__pch.h"
#include "Vcpu_core_tb___024root.h"

VL_ATTR_COLD void Vcpu_core_tb___024root___eval_static(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcpu_core_tb___024root___eval_initial__TOP(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x2f70726fU;
    __Vtemp_1[3U] = 0x65737473U;
    __Vtemp_1[4U] = 0x74U;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                 ,  &(vlSelfRef.cpu_core_tb__DOT__dut__DOT__imem_inst__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcpu_core_tb___024root___eval_final(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_core_tb___024root___dump_triggers__stl(Vcpu_core_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcpu_core_tb___024root___eval_phase__stl(Vcpu_core_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_core_tb___024root___eval_settle(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vcpu_core_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/cpu_core_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcpu_core_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_core_tb___024root___dump_triggers__stl(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_core_tb___024root___stl_sequent__TOP__0(Vcpu_core_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_core_tb___024root___eval_stl(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcpu_core_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcpu_core_tb___024root___stl_sequent__TOP__0(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__rs1_data;
    cpu_core_tb__DOT__dut__DOT__rs1_data = 0;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__alu_b;
    cpu_core_tb__DOT__dut__DOT__alu_b = 0;
    IData/*31:0*/ cpu_core_tb__DOT__dut__DOT__rs1_fwd;
    cpu_core_tb__DOT__dut__DOT__rs1_fwd = 0;
    CData/*6:0*/ cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode;
    cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode = 0;
    // Body
    cpu_core_tb__DOT__dut__DOT__imm_gen_inst__DOT__opcode 
        = (0x7fU & vlSelfRef.cpu_core_tb__DOT__dut__DOT__imem_inst__DOT__mem
           [(0x3ffU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__pc_current 
                       >> 2U))]);
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
        = vlSelfRef.cpu_core_tb__DOT__dut__DOT__imem_inst__DOT__mem
        [(0x3ffU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__pc_current 
                    >> 2U))];
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__reg_write = 0U;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__mem_write = 0U;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__mem_read = 0U;
    if ((1U & (~ (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                  >> 6U)))) {
        if ((0x20U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
            if ((1U & (~ (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
                            if ((1U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
                                vlSelfRef.cpu_core_tb__DOT__dut__DOT__mem_write = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                      >> 5U)))) {
            if ((1U & (~ (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
                            if ((1U & vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction)) {
                                vlSelfRef.cpu_core_tb__DOT__dut__DOT__mem_read = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__jump = 0U;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__branch = 0U;
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_control = 0U;
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
    cpu_core_tb__DOT__dut__DOT__rs1_data = ((0U == 
                                             (0x1fU 
                                              & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                 >> 0xfU)))
                                             ? 0U : 
                                            vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs
                                            [(0x1fU 
                                              & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                                                 >> 0xfU))]);
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__rs2_data 
        = ((0U == (0x1fU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                            >> 0x14U))) ? 0U : vlSelfRef.cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs
           [(0x1fU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__instruction 
                      >> 0x14U))]);
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
    vlSelfRef.cpu_core_tb__DOT__dut__DOT____VdfgRegularize_h6dbabbbd_0_0 
        = (vlSelfRef.cpu_core_tb__DOT__dut__DOT__immediate 
           + vlSelfRef.cpu_core_tb__DOT__dut__DOT__pc_current);
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
                                                    : vlSelfRef.cpu_core_tb__DOT__dut__DOT__rs2_data))))
                                          : vlSelfRef.cpu_core_tb__DOT__dut__DOT__immediate);
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__pc_next = 
        ((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__jump)
          ? vlSelfRef.cpu_core_tb__DOT__dut__DOT____VdfgRegularize_h6dbabbbd_0_0
          : (((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__branch) 
              & (cpu_core_tb__DOT__dut__DOT__rs1_data 
                 == vlSelfRef.cpu_core_tb__DOT__dut__DOT__rs2_data))
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
    vlSelfRef.cpu_core_tb__DOT__dut__DOT__mem_read_data 
        = ((IData)(vlSelfRef.cpu_core_tb__DOT__dut__DOT__mem_read)
            ? vlSelfRef.cpu_core_tb__DOT__dut__DOT__dmem_inst__DOT__mem
           [(0x3ffU & (vlSelfRef.cpu_core_tb__DOT__dut__DOT__alu_result 
                       >> 2U))] : 0U);
}

VL_ATTR_COLD void Vcpu_core_tb___024root___eval_triggers__stl(Vcpu_core_tb___024root* vlSelf);

VL_ATTR_COLD bool Vcpu_core_tb___024root___eval_phase__stl(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcpu_core_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcpu_core_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_core_tb___024root___dump_triggers__act(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge cpu_core_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge cpu_core_tb.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge cpu_core_tb.reset)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_core_tb___024root___dump_triggers__nba(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge cpu_core_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge cpu_core_tb.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge cpu_core_tb.reset)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_core_tb___024root___ctor_var_reset(Vcpu_core_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_core_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->cpu_core_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cpu_core_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->cpu_core_tb__DOT__dut__DOT__pc_current = VL_RAND_RESET_I(32);
    vlSelf->cpu_core_tb__DOT__dut__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->cpu_core_tb__DOT__dut__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->cpu_core_tb__DOT__dut__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->cpu_core_tb__DOT__dut__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->cpu_core_tb__DOT__dut__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->cpu_core_tb__DOT__dut__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->cpu_core_tb__DOT__dut__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->cpu_core_tb__DOT__dut__DOT__alu_control = VL_RAND_RESET_I(3);
    vlSelf->cpu_core_tb__DOT__dut__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->cpu_core_tb__DOT__dut__DOT__mem_read_data = VL_RAND_RESET_I(32);
    vlSelf->cpu_core_tb__DOT__dut__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->cpu_core_tb__DOT__dut__DOT__immediate = VL_RAND_RESET_I(32);
    vlSelf->cpu_core_tb__DOT__dut__DOT__fwd_result_1 = VL_RAND_RESET_I(32);
    vlSelf->cpu_core_tb__DOT__dut__DOT__fwd_result_2 = VL_RAND_RESET_I(32);
    vlSelf->cpu_core_tb__DOT__dut__DOT__fwd_result_3 = VL_RAND_RESET_I(32);
    vlSelf->cpu_core_tb__DOT__dut__DOT__fwd_result_4 = VL_RAND_RESET_I(32);
    vlSelf->cpu_core_tb__DOT__dut__DOT__fwd_rd_1 = VL_RAND_RESET_I(5);
    vlSelf->cpu_core_tb__DOT__dut__DOT__fwd_rd_2 = VL_RAND_RESET_I(5);
    vlSelf->cpu_core_tb__DOT__dut__DOT__fwd_rd_3 = VL_RAND_RESET_I(5);
    vlSelf->cpu_core_tb__DOT__dut__DOT__fwd_rd_4 = VL_RAND_RESET_I(5);
    vlSelf->cpu_core_tb__DOT__dut__DOT__fwd_we_1 = VL_RAND_RESET_I(1);
    vlSelf->cpu_core_tb__DOT__dut__DOT__fwd_we_2 = VL_RAND_RESET_I(1);
    vlSelf->cpu_core_tb__DOT__dut__DOT__fwd_we_3 = VL_RAND_RESET_I(1);
    vlSelf->cpu_core_tb__DOT__dut__DOT__fwd_we_4 = VL_RAND_RESET_I(1);
    vlSelf->cpu_core_tb__DOT__dut__DOT____VdfgRegularize_h6dbabbbd_0_0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->cpu_core_tb__DOT__dut__DOT__imem_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu_core_tb__DOT__dut__DOT__rf_inst__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->cpu_core_tb__DOT__dut__DOT__dmem_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__cpu_core_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cpu_core_tb__DOT__reset__0 = VL_RAND_RESET_I(1);
}
