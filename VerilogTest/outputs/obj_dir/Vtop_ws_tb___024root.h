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
        CData/*0:0*/ top_ws_tb__DOT__rst_n;
        CData/*0:0*/ top_ws_tb__DOT__load_weight;
        CData/*0:0*/ top_ws_tb__DOT__start;
        CData/*3:0*/ top_ws_tb__DOT__dut__DOT__ctr;
        CData/*0:0*/ top_ws_tb__DOT__dut__DOT__counting;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg;
        CData/*7:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top_ws_tb__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        VlWide<4>/*127:0*/ top_ws_tb__DOT__weights_in;
        IData/*31:0*/ top_ws_tb__DOT__in_a;
        VlWide<4>/*127:0*/ top_ws_tb__DOT__out_c;
        IData/*31:0*/ top_ws_tb__DOT__load_weights__Vstatic__r;
        IData/*31:0*/ top_ws_tb__DOT__load_weights__Vstatic__c;
        IData/*31:0*/ top_ws_tb__DOT__run_multiply__Vstatic__k;
        IData/*31:0*/ top_ws_tb__DOT__run_multiply__Vstatic__r;
        IData/*31:0*/ top_ws_tb__DOT__capture_outputs__Vstatic__row;
        IData/*31:0*/ top_ws_tb__DOT__capture_outputs__Vstatic__c;
        IData/*31:0*/ top_ws_tb__DOT__compute_expected__Vstatic__r;
        IData/*31:0*/ top_ws_tb__DOT__compute_expected__Vstatic__c;
        IData/*31:0*/ top_ws_tb__DOT__compute_expected__Vstatic__k;
        IData/*31:0*/ top_ws_tb__DOT__check_results__Vstatic__r;
        IData/*31:0*/ top_ws_tb__DOT__check_results__Vstatic__c;
        IData/*31:0*/ top_ws_tb__DOT__check_results__Vstatic__errors;
        IData/*31:0*/ top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__skewed_a;
        VlWide<4>/*127:0*/ top_ws_tb__DOT__dut__DOT__raw_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum;
    };
    struct {
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum;
        IData/*31:0*/ top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_ws_tb__DOT__A;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 4> top_ws_tb__DOT__B;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_ws_tb__DOT__C_expected;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> top_ws_tb__DOT__C_got;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 3>, 4> top_ws_tb__DOT__dut__DOT__sr_a;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 3>, 4> top_ws_tb__DOT__dut__DOT__sr_c;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 5>, 4> top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 5> top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire;
        VlUnpacked<CData/*0:0*/, 9> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc4b95240__0;
    VlForkSync __Vfork_1__sync;
    VlForkSync __Vfork_2__sync;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
