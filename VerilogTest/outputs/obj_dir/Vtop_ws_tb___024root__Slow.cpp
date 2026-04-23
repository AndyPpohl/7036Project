// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_ws_tb.h for the primary calling header

#include "Vtop_ws_tb__pch.h"
#include "Vtop_ws_tb__Syms.h"
#include "Vtop_ws_tb___024root.h"

void Vtop_ws_tb___024root___ctor_var_reset(Vtop_ws_tb___024root* vlSelf);

Vtop_ws_tb___024root::Vtop_ws_tb___024root(Vtop_ws_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_ws_tb___024root___ctor_var_reset(this);
}

void Vtop_ws_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_ws_tb___024root::~Vtop_ws_tb___024root() {
}
