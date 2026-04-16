// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_ws_tb.h for the primary calling header

#ifndef VERILATED_VTOP_WS_TB___024ROOT_H_
#define VERILATED_VTOP_WS_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop_ws_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_ws_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top_ws_tb__DOT__clk;
        CData/*0:0*/ top_ws_tb__DOT__done;
        CData/*0:0*/ top_ws_tb__DOT__out_skew_done;
        CData/*0:0*/ top_ws_tb__DOT__rst_n;
        CData/*0:0*/ top_ws_tb__DOT__weight_load;
        CData/*0:0*/ top_ws_tb__DOT__activation;
        CData/*7:0*/ top_ws_tb__DOT__val4;
        CData/*7:0*/ top_ws_tb__DOT__val1;
        CData/*0:0*/ top_ws_tb__DOT__dut__DOT__load_weight;
        CData/*0:0*/ top_ws_tb__DOT__dut__DOT__skew_start;
        CData/*0:0*/ top_ws_tb__DOT__dut__DOT__row_valid;
        CData/*0:0*/ top_ws_tb__DOT__dut__DOT__streaming;
        CData/*0:0*/ top_ws_tb__DOT__dut__DOT__buf_select;
        CData/*0:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__out_valid_flag;
        CData/*0:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__counting;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top_ws_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top_ws_tb__DOT__out_skew_done__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top_ws_tb__DOT__done__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_ctr;
        SData/*15:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_len;
        IData/*31:0*/ top_ws_tb__DOT__compute_expected__Vstatic__r;
        IData/*31:0*/ top_ws_tb__DOT__compute_expected__Vstatic__c;
        IData/*31:0*/ top_ws_tb__DOT__compute_expected__Vstatic__k;
        IData/*31:0*/ top_ws_tb__DOT__check_results__Vstatic__r;
        IData/*31:0*/ top_ws_tb__DOT__check_results__Vstatic__c;
        IData/*31:0*/ top_ws_tb__DOT__check_results__Vstatic__errors;
        IData/*31:0*/ top_ws_tb__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
        VlWide<4>/*127:0*/ top_ws_tb__DOT__dut__DOT__weights_flat;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__in_a_skew;
    };
    struct {
        VlWide<4>/*127:0*/ top_ws_tb__DOT__dut__DOT__out_c_skew;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__r;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__c;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__k;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__row;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__unnamedblk3__DOT__c;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__unnamedblk4__DOT__c;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__skewed_a;
        VlWide<4>/*127:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__raw_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__ctr;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_ws_tb__DOT__A;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_ws_tb__DOT__B;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_ws_tb__DOT__C;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_ws_tb__DOT__A1;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_ws_tb__DOT__A2;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_ws_tb__DOT__A3;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_ws_tb__DOT__A4;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_ws_tb__DOT__A5;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_ws_tb__DOT__C1_expected;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_ws_tb__DOT__C2_expected;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_ws_tb__DOT__C3_expected;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_ws_tb__DOT__C4_expected;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_ws_tb__DOT__C5_expected;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_ws_tb__DOT__dut__DOT__C_buf0;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_ws_tb__DOT__dut__DOT__C_buf1;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 3>, 4> top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 3>, 4> top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 5>, 4> top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 5> top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc4b95240__0;
    VlTriggerScheduler __VtrigSched_h02c7d36f__0;
    VlTriggerScheduler __VtrigSched_h5e37bb25__0;
    VlForkSync __Vfork_1__sync;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_ws_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_ws_tb___024root(Vtop_ws_tb__Syms* symsp, const char* v__name);
    ~Vtop_ws_tb___024root();
    VL_UNCOPYABLE(Vtop_ws_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
