// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCPU_CORE_TB__SYMS_H_
#define VERILATED_VCPU_CORE_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcpu_core_tb.h"

// INCLUDE MODULE CLASSES
#include "Vcpu_core_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcpu_core_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcpu_core_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcpu_core_tb___024root         TOP;

    // CONSTRUCTORS
    Vcpu_core_tb__Syms(VerilatedContext* contextp, const char* namep, Vcpu_core_tb* modelp);
    ~Vcpu_core_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
