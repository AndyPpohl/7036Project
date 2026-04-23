// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_os_tb.h for the primary calling header

#ifndef VERILATED_VTOP_OS_TB___024ROOT_H_
#define VERILATED_VTOP_OS_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop_os_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_os_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top_os_tb__DOT__clk;
        CData/*0:0*/ top_os_tb__DOT__done;
        CData/*0:0*/ top_os_tb__DOT__out_skew_done;
        CData/*0:0*/ top_os_tb__DOT__rst_n;
        CData/*0:0*/ top_os_tb__DOT__activation;
        CData/*0:0*/ top_os_tb__DOT__last_tile;
        CData/*0:0*/ top_os_tb__DOT__dut__DOT__skew_start;
        CData/*0:0*/ top_os_tb__DOT__dut__DOT__clear;
        CData/*0:0*/ top_os_tb__DOT__dut__DOT__drain;
        CData/*0:0*/ top_os_tb__DOT__dut__DOT__last_tile_seen;
        CData/*0:0*/ top_os_tb__DOT__dut__DOT__streaming;
        CData/*2:0*/ top_os_tb__DOT__dut__DOT__drain_ctr;
        CData/*0:0*/ top_os_tb__DOT__dut__DOT__drain_counting;
        CData/*0:0*/ top_os_tb__DOT__dut__DOT__buf_select;
        CData/*0:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__counting;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_w;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_w;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_w;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_w;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_w;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_w;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_w;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_w;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_w;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_w;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_w;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_w;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_w;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_w;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_w;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_w;
        CData/*7:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top_os_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top_os_tb__DOT__out_skew_done__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top_os_tb__DOT__done__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top_os_tb__DOT__compute_expected__Vstatic__r;
        IData/*31:0*/ top_os_tb__DOT__compute_expected__Vstatic__c;
        IData/*31:0*/ top_os_tb__DOT__compute_expected__Vstatic__k;
        IData/*31:0*/ top_os_tb__DOT__check_results__Vstatic__r;
        IData/*31:0*/ top_os_tb__DOT__check_results__Vstatic__c;
        IData/*31:0*/ top_os_tb__DOT__check_results__Vstatic__errors;
        IData/*31:0*/ top_os_tb__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top_os_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
        IData/*31:0*/ top_os_tb__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j;
        IData/*31:0*/ top_os_tb__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j;
    };
    struct {
        IData/*31:0*/ top_os_tb__DOT__unnamedblk7__DOT__i;
        IData/*31:0*/ top_os_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j;
        IData/*31:0*/ top_os_tb__DOT__unnamedblk9__DOT__i;
        IData/*31:0*/ top_os_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__in_a_skew;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__in_w_skew;
        VlWide<16>/*511:0*/ top_os_tb__DOT__dut__DOT__out_c_flat;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__r;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__k;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__skewed_a;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__skewed_w;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__ctr;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__psum_reg;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__psum_reg;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__psum_reg;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__psum_reg;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__psum_reg;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__psum_reg;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__psum_reg;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__psum_reg;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__psum_reg;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__psum_reg;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__psum_reg;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__psum_reg;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__psum_reg;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__psum_reg;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__psum_reg;
        IData/*31:0*/ top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__psum_reg;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_os_tb__DOT__A;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_os_tb__DOT__B;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_os_tb__DOT__C;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_os_tb__DOT__A1;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_os_tb__DOT__A2;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_os_tb__DOT__A3;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_os_tb__DOT__A4;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_os_tb__DOT__A5;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_os_tb__DOT__B1;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_os_tb__DOT__B2;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_os_tb__DOT__B3;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_os_tb__DOT__B4;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_os_tb__DOT__B5;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_os_tb__DOT__C1_expected;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_os_tb__DOT__C2_expected;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_os_tb__DOT__C3_expected;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_os_tb__DOT__C4_expected;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_os_tb__DOT__C5_expected;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_os_tb__DOT__C6_expected;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_os_tb__DOT__C7_expected;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_os_tb__DOT__C_tmp1;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_os_tb__DOT__C_tmp2;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_os_tb__DOT__C_tmp3;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_os_tb__DOT__dut__DOT__C_buf0;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_os_tb__DOT__dut__DOT__C_buf1;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 3>, 4> top_os_tb__DOT__dut__DOT__skewer__DOT__sr_a;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 3>, 4> top_os_tb__DOT__dut__DOT__skewer__DOT__sr_w;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 5>, 4> top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 5> top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__w_wire;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_os_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_out;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h2ab17985__0;
    VlTriggerScheduler __VtrigSched_hcba08fe2__0;
    VlTriggerScheduler __VtrigSched_h589cf841__0;
    VlForkSync __Vfork_1__sync;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_os_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_os_tb___024root(Vtop_os_tb__Syms* symsp, const char* v__name);
    ~Vtop_os_tb___024root();
    VL_UNCOPYABLE(Vtop_os_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
