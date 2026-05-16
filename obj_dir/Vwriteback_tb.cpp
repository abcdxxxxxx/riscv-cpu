// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vwriteback_tb__pch.h"

//============================================================
// Constructors

Vwriteback_tb::Vwriteback_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vwriteback_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vwriteback_tb::Vwriteback_tb(const char* _vcname__)
    : Vwriteback_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vwriteback_tb::~Vwriteback_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vwriteback_tb___024root___eval_debug_assertions(Vwriteback_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vwriteback_tb___024root___eval_static(Vwriteback_tb___024root* vlSelf);
void Vwriteback_tb___024root___eval_initial(Vwriteback_tb___024root* vlSelf);
void Vwriteback_tb___024root___eval_settle(Vwriteback_tb___024root* vlSelf);
void Vwriteback_tb___024root___eval(Vwriteback_tb___024root* vlSelf);

void Vwriteback_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vwriteback_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vwriteback_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vwriteback_tb___024root___eval_static(&(vlSymsp->TOP));
        Vwriteback_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vwriteback_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vwriteback_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vwriteback_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vwriteback_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vwriteback_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vwriteback_tb___024root___eval_final(Vwriteback_tb___024root* vlSelf);

VL_ATTR_COLD void Vwriteback_tb::final() {
    Vwriteback_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vwriteback_tb::hierName() const { return vlSymsp->name(); }
const char* Vwriteback_tb::modelName() const { return "Vwriteback_tb"; }
unsigned Vwriteback_tb::threads() const { return 1; }
void Vwriteback_tb::prepareClone() const { contextp()->prepareClone(); }
void Vwriteback_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
