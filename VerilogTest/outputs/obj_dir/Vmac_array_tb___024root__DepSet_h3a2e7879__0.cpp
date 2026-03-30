// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmac_array_tb.h for the primary calling header

#include "Vmac_array_tb__pch.h"
#include "Vmac_array_tb__Syms.h"
#include "Vmac_array_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmac_array_tb___024root___eval_initial__TOP__Vtiming__0(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    VL_WRITEF_NX("CONFIG: DIM=2\n",0);
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x77617665U;
    __Vtemp_1[2U] = 0x7574732fU;
    __Vtemp_1[3U] = 0x6f757470U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->mac_array_tb__DOT__A[0U][0U] = 1U;
    vlSelf->mac_array_tb__DOT__B[0U][0U] = 1U;
    vlSelf->mac_array_tb__DOT__A[0U][1U] = 2U;
    vlSelf->mac_array_tb__DOT__B[0U][1U] = 2U;
    vlSelf->mac_array_tb__DOT__A[1U][0U] = 3U;
    vlSelf->mac_array_tb__DOT__B[1U][0U] = 3U;
    vlSelf->mac_array_tb__DOT__A[1U][1U] = 4U;
    vlSelf->mac_array_tb__DOT__B[1U][1U] = 4U;
    vlSelf->mac_array_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j = 2U;
    vlSelf->mac_array_tb__DOT__unnamedblk6__DOT__i = 2U;
    vlSelf->mac_array_tb__DOT__C_sw[0U][0U] = 0U;
    vlSelf->mac_array_tb__DOT__C_sw[0U][0U] = (vlSelf->mac_array_tb__DOT__C_sw
                                               [0U]
                                               [0U] 
                                               + (vlSelf->mac_array_tb__DOT__A
                                                  [0U]
                                                  [0U] 
                                                  * 
                                                  vlSelf->mac_array_tb__DOT__B
                                                  [0U]
                                                  [0U]));
    vlSelf->mac_array_tb__DOT__C_sw[0U][0U] = (vlSelf->mac_array_tb__DOT__C_sw
                                               [0U]
                                               [0U] 
                                               + (vlSelf->mac_array_tb__DOT__A
                                                  [0U]
                                                  [1U] 
                                                  * 
                                                  vlSelf->mac_array_tb__DOT__B
                                                  [1U]
                                                  [0U]));
    vlSelf->mac_array_tb__DOT__C_sw[0U][1U] = 0U;
    vlSelf->mac_array_tb__DOT__C_sw[0U][1U] = (vlSelf->mac_array_tb__DOT__C_sw
                                               [0U]
                                               [1U] 
                                               + (vlSelf->mac_array_tb__DOT__A
                                                  [0U]
                                                  [0U] 
                                                  * 
                                                  vlSelf->mac_array_tb__DOT__B
                                                  [0U]
                                                  [1U]));
    vlSelf->mac_array_tb__DOT__C_sw[0U][1U] = (vlSelf->mac_array_tb__DOT__C_sw
                                               [0U]
                                               [1U] 
                                               + (vlSelf->mac_array_tb__DOT__A
                                                  [0U]
                                                  [1U] 
                                                  * 
                                                  vlSelf->mac_array_tb__DOT__B
                                                  [1U]
                                                  [1U]));
    vlSelf->mac_array_tb__DOT__C_sw[1U][0U] = 0U;
    vlSelf->mac_array_tb__DOT__C_sw[1U][0U] = (vlSelf->mac_array_tb__DOT__C_sw
                                               [1U]
                                               [0U] 
                                               + (vlSelf->mac_array_tb__DOT__A
                                                  [1U]
                                                  [0U] 
                                                  * 
                                                  vlSelf->mac_array_tb__DOT__B
                                                  [0U]
                                                  [0U]));
    vlSelf->mac_array_tb__DOT__C_sw[1U][0U] = (vlSelf->mac_array_tb__DOT__C_sw
                                               [1U]
                                               [0U] 
                                               + (vlSelf->mac_array_tb__DOT__A
                                                  [1U]
                                                  [1U] 
                                                  * 
                                                  vlSelf->mac_array_tb__DOT__B
                                                  [1U]
                                                  [0U]));
    vlSelf->mac_array_tb__DOT__C_sw[1U][1U] = 0U;
    vlSelf->mac_array_tb__DOT__C_sw[1U][1U] = (vlSelf->mac_array_tb__DOT__C_sw
                                               [1U]
                                               [1U] 
                                               + (vlSelf->mac_array_tb__DOT__A
                                                  [1U]
                                                  [0U] 
                                                  * 
                                                  vlSelf->mac_array_tb__DOT__B
                                                  [0U]
                                                  [1U]));
    vlSelf->mac_array_tb__DOT__C_sw[1U][1U] = (vlSelf->mac_array_tb__DOT__C_sw
                                               [1U]
                                               [1U] 
                                               + (vlSelf->mac_array_tb__DOT__A
                                                  [1U]
                                                  [1U] 
                                                  * 
                                                  vlSelf->mac_array_tb__DOT__B
                                                  [1U]
                                                  [1U]));
    vlSelf->mac_array_tb__DOT__nrst = 0U;
    vlSelf->mac_array_tb__DOT__load_weight = 0U;
    vlSelf->mac_array_tb__DOT__clear_psum = 0U;
    vlSelf->mac_array_tb__DOT__ain[0U] = 0U;
    vlSelf->mac_array_tb__DOT__cin[0U] = 0U;
    vlSelf->mac_array_tb__DOT__ain[1U] = 0U;
    vlSelf->mac_array_tb__DOT__cin[1U] = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/mac_array_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mac_array_tb__DOT__nrst = 1U;
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       73);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mac_array_tb__DOT__win[0U] = vlSelf->mac_array_tb__DOT__B
        [0U][0U];
    vlSelf->mac_array_tb__DOT__unnamedblk8__DOT__col = 1U;
    vlSelf->mac_array_tb__DOT__win[1U] = vlSelf->mac_array_tb__DOT__B
        [0U][1U];
    vlSelf->mac_array_tb__DOT__unnamedblk8__DOT__col = 2U;
    vlSelf->mac_array_tb__DOT__load_weight = 1U;
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mac_array_tb__DOT__load_weight = 0U;
    VL_WRITEF_NX("POST-PULSE: lw_skewed[0]=%0# lw_skewed[1]=%0# lw_pipe=%0b win=[%0#,%0#]\n",0,
                 1,vlSelf->mac_array_tb__DOT__dut__DOT__lw_skewed
                 [0U],1,vlSelf->mac_array_tb__DOT__dut__DOT__lw_skewed
                 [1U],1,vlSelf->mac_array_tb__DOT__dut__DOT__lw_pipe,
                 16,vlSelf->mac_array_tb__DOT__win[0U],
                 16,vlSelf->mac_array_tb__DOT__win[1U]);
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       127);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("ROW1-LATCH: lw_skewed[0]=%0# lw_skewed[1]=%0# lw_pipe=%0b win=[%0#,%0#]\n",0,
                 1,vlSelf->mac_array_tb__DOT__dut__DOT__lw_skewed
                 [0U],1,vlSelf->mac_array_tb__DOT__dut__DOT__lw_skewed
                 [1U],1,vlSelf->mac_array_tb__DOT__dut__DOT__lw_pipe,
                 16,vlSelf->mac_array_tb__DOT__win[0U],
                 16,vlSelf->mac_array_tb__DOT__win[1U]);
    vlSelf->mac_array_tb__DOT__win[0U] = vlSelf->mac_array_tb__DOT__B
        [1U][0U];
    vlSelf->mac_array_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__col = 1U;
    vlSelf->mac_array_tb__DOT__win[1U] = vlSelf->mac_array_tb__DOT__B
        [1U][1U];
    vlSelf->mac_array_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__col = 2U;
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mac_array_tb__DOT__unnamedblk9__DOT__row = 2U;
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       139);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- lw_skewed probe ---\n  lw_skewed[0] = %0#\n  lw_skewed[1] = %0#\n  w_sig[0][0]  = %0#\n  w_sig[0][1]  = %0#\n",0,
                 1,vlSelf->mac_array_tb__DOT__dut__DOT__lw_skewed
                 [0U],1,vlSelf->mac_array_tb__DOT__dut__DOT__lw_skewed
                 [1U],16,vlSelf->mac_array_tb__DOT__dut__DOT__w_sig
                 [0U][0U],16,vlSelf->mac_array_tb__DOT__dut__DOT__w_sig
                 [0U][1U]);
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       147);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- after 1 more cycle ---\n  w_sig[0][0]  = %0#\n  w_sig[0][1]  = %0#\n  PE(0,0) weight_reg = %0#\n  PE(0,1) weight_reg = %0#\n  PE(1,0) weight_reg = %0#\n  PE(1,1) weight_reg = %0#\n",0,
                 16,vlSelf->mac_array_tb__DOT__dut__DOT__w_sig
                 [0U][0U],16,vlSelf->mac_array_tb__DOT__dut__DOT__w_sig
                 [0U][1U],16,vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__weight_reg,
                 16,(IData)(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__weight_reg),
                 16,vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__weight_reg,
                 16,(IData)(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__weight_reg));
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       156);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- Weight check ---\n  PE(0,0) weight_reg = %0#\n  PE(0,1) weight_reg = %0#\n  PE(1,0) weight_reg = %0#\n  PE(1,1) weight_reg = %0#\n",0,
                 16,vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__weight_reg,
                 16,(IData)(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__weight_reg),
                 16,vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__weight_reg,
                 16,(IData)(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__weight_reg));
    vlSelf->mac_array_tb__DOT__cin[0U] = 0U;
    vlSelf->mac_array_tb__DOT__unnamedblk11__DOT__i = 1U;
    vlSelf->mac_array_tb__DOT__cin[1U] = 0U;
    vlSelf->mac_array_tb__DOT__unnamedblk11__DOT__i = 2U;
    vlSelf->mac_array_tb__DOT__clear_psum = 1U;
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       172);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mac_array_tb__DOT__clear_psum = 0U;
    vlSelf->mac_array_tb__DOT__ain[0U] = vlSelf->mac_array_tb__DOT__A
        [0U][0U];
    vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__unnamedblk13__DOT__r = 1U;
    vlSelf->mac_array_tb__DOT__ain[1U] = vlSelf->mac_array_tb__DOT__A
        [1U][0U];
    vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__unnamedblk13__DOT__r = 2U;
    VL_WRITEF_NX("Cycle %0d: k=0 ain=[%0#,%0#]\n",0,
                 32,vlSelf->mac_array_tb__DOT__cycle_count,
                 16,vlSelf->mac_array_tb__DOT__ain[0U],
                 16,vlSelf->mac_array_tb__DOT__ain[1U]);
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       188);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__k = 1U;
    vlSelf->mac_array_tb__DOT__ain[0U] = vlSelf->mac_array_tb__DOT__A
        [0U][1U];
    vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__unnamedblk13__DOT__r = 1U;
    vlSelf->mac_array_tb__DOT__ain[1U] = vlSelf->mac_array_tb__DOT__A
        [1U][1U];
    vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__unnamedblk13__DOT__r = 2U;
    VL_WRITEF_NX("Cycle %0d: k=1 ain=[%0#,%0#]\n",0,
                 32,vlSelf->mac_array_tb__DOT__cycle_count,
                 16,vlSelf->mac_array_tb__DOT__ain[0U],
                 16,vlSelf->mac_array_tb__DOT__ain[1U]);
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       188);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__k = 2U;
    vlSelf->mac_array_tb__DOT__ain[0U] = 0U;
    vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__unnamedblk13__DOT__r = 1U;
    vlSelf->mac_array_tb__DOT__ain[1U] = 0U;
    vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__unnamedblk13__DOT__r = 2U;
    VL_WRITEF_NX("Cycle %0d: k=2 ain=[%0#,%0#]\n",0,
                 32,vlSelf->mac_array_tb__DOT__cycle_count,
                 16,vlSelf->mac_array_tb__DOT__ain[0U],
                 16,vlSelf->mac_array_tb__DOT__ain[1U]);
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       188);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__k = 3U;
    vlSelf->mac_array_tb__DOT__ain[0U] = 0U;
    vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__unnamedblk13__DOT__r = 1U;
    vlSelf->mac_array_tb__DOT__ain[1U] = 0U;
    vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__unnamedblk13__DOT__r = 2U;
    VL_WRITEF_NX("Cycle %0d: k=3 ain=[%0#,%0#]\n",0,
                 32,vlSelf->mac_array_tb__DOT__cycle_count,
                 16,vlSelf->mac_array_tb__DOT__ain[0U],
                 16,vlSelf->mac_array_tb__DOT__ain[1U]);
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       188);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__k = 4U;
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       197);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       201);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Cycle %0d: capturing C row 0 cout=[%0#,%0#]\n",0,
                 32,vlSelf->mac_array_tb__DOT__cycle_count,
                 32,vlSelf->mac_array_tb__DOT__cout
                 [0U],32,vlSelf->mac_array_tb__DOT__cout
                 [1U]);
    vlSelf->mac_array_tb__DOT__C_hw[0U][0U] = vlSelf->mac_array_tb__DOT__cout
        [0U];
    vlSelf->mac_array_tb__DOT__unnamedblk14__DOT__unnamedblk15__DOT__j = 1U;
    vlSelf->mac_array_tb__DOT__C_hw[0U][1U] = vlSelf->mac_array_tb__DOT__cout
        [1U];
    vlSelf->mac_array_tb__DOT__unnamedblk14__DOT__unnamedblk15__DOT__j = 2U;
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       206);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mac_array_tb__DOT__unnamedblk14__DOT__i = 1U;
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       201);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Cycle %0d: capturing C row 1 cout=[%0#,%0#]\n",0,
                 32,vlSelf->mac_array_tb__DOT__cycle_count,
                 32,vlSelf->mac_array_tb__DOT__cout
                 [0U],32,vlSelf->mac_array_tb__DOT__cout
                 [1U]);
    vlSelf->mac_array_tb__DOT__C_hw[1U][0U] = vlSelf->mac_array_tb__DOT__cout
        [0U];
    vlSelf->mac_array_tb__DOT__unnamedblk14__DOT__unnamedblk15__DOT__j = 1U;
    vlSelf->mac_array_tb__DOT__C_hw[1U][1U] = vlSelf->mac_array_tb__DOT__cout
        [1U];
    vlSelf->mac_array_tb__DOT__unnamedblk14__DOT__unnamedblk15__DOT__j = 2U;
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       206);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mac_array_tb__DOT__unnamedblk14__DOT__i = 2U;
    VL_WRITEF_NX("--- SW reference ---\n  C_sw[0][0] = %0#\n",0,
                 32,vlSelf->mac_array_tb__DOT__C_sw
                 [0U][0U]);
    vlSelf->mac_array_tb__DOT__unnamedblk16__DOT__unnamedblk17__DOT__j = 1U;
    VL_WRITEF_NX("  C_sw[0][1] = %0#\n",0,32,vlSelf->mac_array_tb__DOT__C_sw
                 [0U][1U]);
    vlSelf->mac_array_tb__DOT__unnamedblk16__DOT__unnamedblk17__DOT__j = 2U;
    vlSelf->mac_array_tb__DOT__unnamedblk16__DOT__i = 1U;
    VL_WRITEF_NX("  C_sw[1][0] = %0#\n",0,32,vlSelf->mac_array_tb__DOT__C_sw
                 [1U][0U]);
    vlSelf->mac_array_tb__DOT__unnamedblk16__DOT__unnamedblk17__DOT__j = 1U;
    VL_WRITEF_NX("  C_sw[1][1] = %0#\n",0,32,vlSelf->mac_array_tb__DOT__C_sw
                 [1U][1U]);
    vlSelf->mac_array_tb__DOT__unnamedblk16__DOT__unnamedblk17__DOT__j = 2U;
    vlSelf->mac_array_tb__DOT__unnamedblk16__DOT__i = 2U;
    VL_WRITEF_NX("--- HW result ---\n  C_hw[0][0] = %0#\n",0,
                 32,vlSelf->mac_array_tb__DOT__C_hw
                 [0U][0U]);
    vlSelf->mac_array_tb__DOT__unnamedblk18__DOT__unnamedblk19__DOT__j = 1U;
    VL_WRITEF_NX("  C_hw[0][1] = %0#\n",0,32,vlSelf->mac_array_tb__DOT__C_hw
                 [0U][1U]);
    vlSelf->mac_array_tb__DOT__unnamedblk18__DOT__unnamedblk19__DOT__j = 2U;
    vlSelf->mac_array_tb__DOT__unnamedblk18__DOT__i = 1U;
    VL_WRITEF_NX("  C_hw[1][0] = %0#\n",0,32,vlSelf->mac_array_tb__DOT__C_hw
                 [1U][0U]);
    vlSelf->mac_array_tb__DOT__unnamedblk18__DOT__unnamedblk19__DOT__j = 1U;
    VL_WRITEF_NX("  C_hw[1][1] = %0#\n",0,32,vlSelf->mac_array_tb__DOT__C_hw
                 [1U][1U]);
    vlSelf->mac_array_tb__DOT__unnamedblk18__DOT__unnamedblk19__DOT__j = 2U;
    vlSelf->mac_array_tb__DOT__unnamedblk18__DOT__i = 2U;
    VL_WRITEF_NX("--- Comparison ---\n",0);
    if ((vlSelf->mac_array_tb__DOT__C_hw[0U][0U] != 
         vlSelf->mac_array_tb__DOT__C_sw[0U][0U])) {
        VL_WRITEF_NX("MISMATCH C[0][0]: hw=%0# sw=%0#\n",0,
                     32,vlSelf->mac_array_tb__DOT__C_hw
                     [0U][0U],32,vlSelf->mac_array_tb__DOT__C_sw
                     [0U][0U]);
    } else {
        VL_WRITEF_NX("MATCH    C[0][0]: hw=%0# sw=%0#\n",0,
                     32,vlSelf->mac_array_tb__DOT__C_hw
                     [0U][0U],32,vlSelf->mac_array_tb__DOT__C_sw
                     [0U][0U]);
    }
    vlSelf->mac_array_tb__DOT__unnamedblk20__DOT__unnamedblk21__DOT__j = 1U;
    if ((vlSelf->mac_array_tb__DOT__C_hw[0U][1U] != 
         vlSelf->mac_array_tb__DOT__C_sw[0U][1U])) {
        VL_WRITEF_NX("MISMATCH C[0][1]: hw=%0# sw=%0#\n",0,
                     32,vlSelf->mac_array_tb__DOT__C_hw
                     [0U][1U],32,vlSelf->mac_array_tb__DOT__C_sw
                     [0U][1U]);
    } else {
        VL_WRITEF_NX("MATCH    C[0][1]: hw=%0# sw=%0#\n",0,
                     32,vlSelf->mac_array_tb__DOT__C_hw
                     [0U][1U],32,vlSelf->mac_array_tb__DOT__C_sw
                     [0U][1U]);
    }
    vlSelf->mac_array_tb__DOT__unnamedblk20__DOT__unnamedblk21__DOT__j = 2U;
    vlSelf->mac_array_tb__DOT__unnamedblk20__DOT__i = 1U;
    if ((vlSelf->mac_array_tb__DOT__C_hw[1U][0U] != 
         vlSelf->mac_array_tb__DOT__C_sw[1U][0U])) {
        VL_WRITEF_NX("MISMATCH C[1][0]: hw=%0# sw=%0#\n",0,
                     32,vlSelf->mac_array_tb__DOT__C_hw
                     [1U][0U],32,vlSelf->mac_array_tb__DOT__C_sw
                     [1U][0U]);
    } else {
        VL_WRITEF_NX("MATCH    C[1][0]: hw=%0# sw=%0#\n",0,
                     32,vlSelf->mac_array_tb__DOT__C_hw
                     [1U][0U],32,vlSelf->mac_array_tb__DOT__C_sw
                     [1U][0U]);
    }
    vlSelf->mac_array_tb__DOT__unnamedblk20__DOT__unnamedblk21__DOT__j = 1U;
    if ((vlSelf->mac_array_tb__DOT__C_hw[1U][1U] != 
         vlSelf->mac_array_tb__DOT__C_sw[1U][1U])) {
        VL_WRITEF_NX("MISMATCH C[1][1]: hw=%0# sw=%0#\n",0,
                     32,vlSelf->mac_array_tb__DOT__C_hw
                     [1U][1U],32,vlSelf->mac_array_tb__DOT__C_sw
                     [1U][1U]);
    } else {
        VL_WRITEF_NX("MATCH    C[1][1]: hw=%0# sw=%0#\n",0,
                     32,vlSelf->mac_array_tb__DOT__C_hw
                     [1U][1U],32,vlSelf->mac_array_tb__DOT__C_sw
                     [1U][1U]);
    }
    vlSelf->mac_array_tb__DOT__unnamedblk20__DOT__unnamedblk21__DOT__j = 2U;
    vlSelf->mac_array_tb__DOT__unnamedblk20__DOT__i = 2U;
    VL_FINISH_MT("source/mac_array_tb.sv", 233, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_array_tb___024root___dump_triggers__act(Vmac_array_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmac_array_tb___024root___eval_triggers__act(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->mac_array_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__mac_array_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->mac_array_tb__DOT__nrst)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__mac_array_tb__DOT__nrst__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->mac_array_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__mac_array_tb__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__mac_array_tb__DOT__clk__0 
        = vlSelf->mac_array_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__mac_array_tb__DOT__nrst__0 
        = vlSelf->mac_array_tb__DOT__nrst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmac_array_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
