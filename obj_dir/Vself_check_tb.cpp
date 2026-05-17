// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vself_check_tb__pch.h"

//============================================================
// Constructors

Vself_check_tb::Vself_check_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vself_check_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vself_check_tb::Vself_check_tb(const char* _vcname__)
    : Vself_check_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vself_check_tb::~Vself_check_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vself_check_tb___024root___eval_debug_assertions(Vself_check_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vself_check_tb___024root___eval_static(Vself_check_tb___024root* vlSelf);
void Vself_check_tb___024root___eval_initial(Vself_check_tb___024root* vlSelf);
void Vself_check_tb___024root___eval_settle(Vself_check_tb___024root* vlSelf);
void Vself_check_tb___024root___eval(Vself_check_tb___024root* vlSelf);

void Vself_check_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vself_check_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vself_check_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vself_check_tb___024root___eval_static(&(vlSymsp->TOP));
        Vself_check_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vself_check_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vself_check_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vself_check_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vself_check_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vself_check_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vself_check_tb___024root___eval_final(Vself_check_tb___024root* vlSelf);

VL_ATTR_COLD void Vself_check_tb::final() {
    Vself_check_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vself_check_tb::hierName() const { return vlSymsp->name(); }
const char* Vself_check_tb::modelName() const { return "Vself_check_tb"; }
unsigned Vself_check_tb::threads() const { return 1; }
void Vself_check_tb::prepareClone() const { contextp()->prepareClone(); }
void Vself_check_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
