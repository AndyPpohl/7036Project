// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmac_array_tb.h for the primary calling header

#ifndef VERILATED_VMAC_ARRAY_TB___024ROOT_H_
#define VERILATED_VMAC_ARRAY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmac_array_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmac_array_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ mac_array_tb__DOT__clk;
    CData/*0:0*/ mac_array_tb__DOT__nrst;
    CData/*7:0*/ mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout;
    CData/*7:0*/ mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout;
    CData/*7:0*/ mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout;
    CData/*7:0*/ mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout;
    CData/*7:0*/ mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout;
    CData/*7:0*/ mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout;
    CData/*7:0*/ mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout;
    CData/*7:0*/ mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout;
    CData/*7:0*/ mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout;
    CData/*7:0*/ mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout;
    CData/*7:0*/ mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout;
    CData/*7:0*/ mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout;
    CData/*7:0*/ mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout;
    CData/*7:0*/ mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout;
    CData/*7:0*/ mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout;
    CData/*7:0*/ mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mac_array_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mac_array_tb__DOT__nrst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 4> mac_array_tb__DOT__ain;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> mac_array_tb__DOT__weights;
    VlUnpacked<CData/*7:0*/, 4> mac_array_tb__DOT__cin;
    VlUnpacked<CData/*7:0*/, 4> mac_array_tb__DOT__aout;
    VlUnpacked<CData/*7:0*/, 4> mac_array_tb__DOT__cout;
    VlUnpacked<CData/*7:0*/, 16> mac_array_tb__DOT__dut__DOT__a_conn;
    VlUnpacked<CData/*7:0*/, 16> mac_array_tb__DOT__dut__DOT__b_conn;
    VlUnpacked<CData/*7:0*/, 16> mac_array_tb__DOT__dut__DOT__cin_conn;
    VlUnpacked<CData/*7:0*/, 16> mac_array_tb__DOT__dut__DOT__cout_conn;
    VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h8888e10d__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmac_array_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmac_array_tb___024root(Vmac_array_tb__Syms* symsp, const char* v__name);
    ~Vmac_array_tb___024root();
    VL_UNCOPYABLE(Vmac_array_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
