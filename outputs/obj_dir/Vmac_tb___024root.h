// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmac_tb.h for the primary calling header

#ifndef VERILATED_VMAC_TB___024ROOT_H_
#define VERILATED_VMAC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmac_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmac_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ mac_tb__DOT__clk;
    CData/*0:0*/ mac_tb__DOT__reset;
    CData/*3:0*/ mac_tb__DOT__a;
    CData/*3:0*/ mac_tb__DOT__b;
    CData/*3:0*/ mac_tb__DOT__cin;
    CData/*3:0*/ mac_tb__DOT__cout;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mac_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mac_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmac_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmac_tb___024root(Vmac_tb__Syms* symsp, const char* v__name);
    ~Vmac_tb___024root();
    VL_UNCOPYABLE(Vmac_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
