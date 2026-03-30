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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ mac_array_tb__DOT__clk;
        CData/*0:0*/ mac_array_tb__DOT__nrst;
        CData/*0:0*/ mac_array_tb__DOT__load_weight;
        CData/*0:0*/ mac_array_tb__DOT__clear_psum;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__lw_pipe;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__lw_d1;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__lw_d2;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__valid_reg;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__valid_reg;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__valid_reg;
        CData/*0:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__valid_reg;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__mac_array_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__mac_array_tb__DOT__nrst__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__weight_reg;
        SData/*15:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__w_out_reg;
        SData/*15:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__a_out_reg;
        SData/*15:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__weight_reg;
        SData/*15:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__w_out_reg;
        SData/*15:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__a_out_reg;
        SData/*15:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__weight_reg;
        SData/*15:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__w_out_reg;
        SData/*15:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__a_out_reg;
        SData/*15:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__weight_reg;
        SData/*15:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__w_out_reg;
        SData/*15:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__a_out_reg;
        IData/*31:0*/ mac_array_tb__DOT__flush_cycles;
        IData/*31:0*/ mac_array_tb__DOT__cycle_count;
        IData/*31:0*/ mac_array_tb__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ mac_array_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j;
        IData/*31:0*/ mac_array_tb__DOT__unnamedblk8__DOT__col;
        IData/*31:0*/ mac_array_tb__DOT__unnamedblk9__DOT__row;
        IData/*31:0*/ mac_array_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__col;
        IData/*31:0*/ mac_array_tb__DOT__unnamedblk11__DOT__i;
        IData/*31:0*/ mac_array_tb__DOT__unnamedblk12__DOT__k;
        IData/*31:0*/ mac_array_tb__DOT__unnamedblk12__DOT__unnamedblk13__DOT__r;
        IData/*31:0*/ mac_array_tb__DOT__unnamedblk14__DOT__i;
        IData/*31:0*/ mac_array_tb__DOT__unnamedblk14__DOT__unnamedblk15__DOT__j;
        IData/*31:0*/ mac_array_tb__DOT__unnamedblk16__DOT__i;
        IData/*31:0*/ mac_array_tb__DOT__unnamedblk16__DOT__unnamedblk17__DOT__j;
        IData/*31:0*/ mac_array_tb__DOT__unnamedblk18__DOT__i;
        IData/*31:0*/ mac_array_tb__DOT__unnamedblk18__DOT__unnamedblk19__DOT__j;
        IData/*31:0*/ mac_array_tb__DOT__unnamedblk20__DOT__i;
        IData/*31:0*/ mac_array_tb__DOT__unnamedblk20__DOT__unnamedblk21__DOT__j;
        IData/*31:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__psum_pipe1;
        IData/*31:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__psum_pipe1;
        IData/*31:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__psum_pipe1;
        IData/*31:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__psum_pipe1;
        IData/*31:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__psum_reg;
        IData/*31:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__psum_reg;
        IData/*31:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__psum_reg;
        IData/*31:0*/ mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__psum_reg;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*15:0*/, 2> mac_array_tb__DOT__ain;
        VlUnpacked<SData/*15:0*/, 2> mac_array_tb__DOT__win;
        VlUnpacked<IData/*31:0*/, 2> mac_array_tb__DOT__cin;
        VlUnpacked<SData/*15:0*/, 2> mac_array_tb__DOT__aout;
        VlUnpacked<IData/*31:0*/, 2> mac_array_tb__DOT__cout;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 2>, 2> mac_array_tb__DOT__A;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 2>, 2> mac_array_tb__DOT__B;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 2>, 2> mac_array_tb__DOT__C_sw;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 2>, 2> mac_array_tb__DOT__C_hw;
        VlUnpacked<CData/*0:0*/, 2> mac_array_tb__DOT__valid_in_row;
    };
    struct {
        VlUnpacked<SData/*15:0*/, 2> mac_array_tb__DOT__dut__DOT__ain_skewed;
        VlUnpacked<CData/*0:0*/, 2> mac_array_tb__DOT__dut__DOT__lw_skewed;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 2>, 2> mac_array_tb__DOT__dut__DOT__a_sig;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 2>, 2> mac_array_tb__DOT__dut__DOT__w_sig;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 2>, 2> mac_array_tb__DOT__dut__DOT__psum_sig;
        VlUnpacked<SData/*15:0*/, 1> mac_array_tb__DOT__dut__DOT__skew_row__BRA__1__KET____DOT__ain_skew_chain;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
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
