// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSELF_CHECK_TB__SYMS_H_
#define VERILATED_VSELF_CHECK_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vself_check_tb.h"

// INCLUDE MODULE CLASSES
#include "Vself_check_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vself_check_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vself_check_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vself_check_tb___024root       TOP;

    // CONSTRUCTORS
    Vself_check_tb__Syms(VerilatedContext* contextp, const char* namep, Vself_check_tb* modelp);
    ~Vself_check_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
