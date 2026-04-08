// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_ws_tb.h for the primary calling header

#include "Vtop_ws_tb__pch.h"
#include "Vtop_ws_tb___024root.h"

VL_INLINE_OPT void Vtop_ws_tb___024root___nba_sequent__TOP__6(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___nba_sequent__TOP__6\n"); );
    // Body
    if (vlSelf->top_ws_tb__DOT__rst_n) {
        if (vlSelf->top_ws_tb__DOT__load_weight) {
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__15__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0x1bU] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__14__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1bU] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1bU] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x1bU]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0x1aU] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1aU] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1aU] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x1aU]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0x19U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x19U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x19U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x19U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0x18U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x18U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x18U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x18U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__31__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0x17U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__30__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x17U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__29__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x17U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__28__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x17U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__27__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0x16U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__26__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x16U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__25__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x16U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__24__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x16U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__23__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0x15U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__22__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x15U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__21__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x15U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__20__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x15U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__19__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0x14U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__18__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x14U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__17__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x14U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__16__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x14U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__15__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0x13U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__14__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x13U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x13U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x13U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0x12U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x12U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x12U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x12U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0x11U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x11U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x11U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x11U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0x10U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x10U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x10U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x10U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__31__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0xfU] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__30__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xfU] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__29__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xfU] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__28__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xfU]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__27__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0xeU] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__26__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xeU] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__25__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xeU] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__24__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xeU]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__23__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0xdU] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__22__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xdU] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__21__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xdU] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__20__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xdU]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__19__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0xcU] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__18__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xcU] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__17__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xcU] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__16__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xcU]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__15__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0xbU] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__14__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xbU] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xbU] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xbU]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0xaU] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xaU] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xaU] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xaU]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[9U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[9U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[9U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[9U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[8U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[8U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[8U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[8U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__31__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[7U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__30__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[7U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__29__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[7U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__28__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[7U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__27__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[6U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__26__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[6U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__25__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[6U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__24__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[6U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__23__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[5U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__22__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[5U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__21__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[5U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__20__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[5U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__19__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[4U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__18__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[4U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__17__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[4U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__16__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[4U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__15__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[3U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__14__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[3U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[3U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[3U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[2U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[2U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[2U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[2U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[1U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[1U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[1U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[1U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0U]);
        }
    } else {
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__15__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__14__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__31__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__30__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__29__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__28__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__27__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__26__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__25__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__24__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__23__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__22__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__21__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__20__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__19__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__18__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__17__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__16__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__15__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__14__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__31__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__30__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__29__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__28__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__27__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__26__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__25__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__24__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__23__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__22__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__21__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__20__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__19__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__18__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__17__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__16__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__15__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__14__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__31__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__30__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__29__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__28__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__27__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__26__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__25__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__24__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__23__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__22__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__21__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__20__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__19__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__18__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__17__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__16__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__15__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__14__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg = 0U;
    }
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[4U][0xeU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__14__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[4U][0xdU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[4U][0xcU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[4U][0xbU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[4U][0xaU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[4U][9U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[4U][8U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[4U][7U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[4U][6U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[4U][5U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[4U][4U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[4U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[4U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[4U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[4U][0U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0x1fU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__31__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0x1eU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__30__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0x1dU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__29__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0x1cU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__28__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0x1bU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__27__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0x1aU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__26__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0x19U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__25__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0x18U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__24__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0x17U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__23__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0x16U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__22__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0x15U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__21__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0x14U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__20__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0x13U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__19__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0x12U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__18__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0x11U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__17__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0x10U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__16__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0xfU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__15__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0xeU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__14__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0xdU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0xcU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0xbU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0xaU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][9U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][8U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][7U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][6U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][5U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][4U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[3U][0U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0x1fU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__31__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0x1eU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__30__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0x1dU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__29__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0x1cU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__28__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0x1bU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__27__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0x1aU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__26__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0x19U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__25__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0x18U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__24__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0x17U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__23__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0x16U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__22__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0x15U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__21__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0x14U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__20__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0x13U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__19__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0x12U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__18__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0x11U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__17__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0x10U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__16__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0xfU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__15__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0xeU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__14__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0xdU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0xcU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0xbU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0xaU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][9U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][8U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][7U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][6U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][5U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][4U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[2U][0U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0x1fU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__31__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0x1eU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__30__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0x1dU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__29__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0x1cU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__28__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0x1bU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__27__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0x1aU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__26__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0x19U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__25__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0x18U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__24__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0x17U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__23__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0x16U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__22__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0x15U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__21__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0x14U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__20__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0x13U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__19__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0x12U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__18__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0x11U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__17__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0x10U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__16__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0xfU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__15__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0xeU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__14__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0xdU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0xcU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0xbU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0xaU] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][9U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][8U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][7U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][6U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][5U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][4U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire[1U][0U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0U] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                    [0x20U][1U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][0U]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[1U] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                 [0x20U]
                                                 [0U]))) 
                   >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[2U] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                    [0x20U][3U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][2U]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[3U] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                 [0x20U]
                                                 [2U]))) 
                   >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[4U] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                    [0x20U][5U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][4U]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[5U] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][5U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                 [0x20U]
                                                 [4U]))) 
                   >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[6U] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                    [0x20U][7U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][6U]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[7U] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][7U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                 [0x20U]
                                                 [6U]))) 
                   >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[8U] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                    [0x20U][9U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][8U]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[9U] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][9U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                 [0x20U]
                                                 [8U]))) 
                   >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0xaU] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                    [0x20U][0xbU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                [0x20U]
                                                [0xaU]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0xbU] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][0xbU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                 [0x20U]
                                                 [0xaU]))) 
                   >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0xcU] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                    [0x20U][0xdU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                [0x20U]
                                                [0xcU]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0xdU] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][0xdU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                 [0x20U]
                                                 [0xcU]))) 
                   >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                    [0x20U][0xfU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                [0x20U]
                                                [0xeU]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][0xfU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                 [0x20U]
                                                 [0xeU]))) 
                   >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x10U] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                    [0x20U][0x11U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                [0x20U]
                                                [0x10U]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x11U] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][0x11U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                 [0x20U]
                                                 [0x10U]))) 
                   >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x12U] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                    [0x20U][0x13U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                [0x20U]
                                                [0x12U]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x13U] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][0x13U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                 [0x20U]
                                                 [0x12U]))) 
                   >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x14U] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                    [0x20U][0x15U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                [0x20U]
                                                [0x14U]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x15U] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][0x15U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                 [0x20U]
                                                 [0x14U]))) 
                   >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x16U] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                    [0x20U][0x17U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                [0x20U]
                                                [0x16U]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x17U] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][0x17U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                 [0x20U]
                                                 [0x16U]))) 
                   >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x18U] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                    [0x20U][0x19U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                [0x20U]
                                                [0x18U]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x19U] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][0x19U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                 [0x20U]
                                                 [0x18U]))) 
                   >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x1aU] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                    [0x20U][0x1bU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                [0x20U]
                                                [0x1aU]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x1bU] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][0x1bU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                 [0x20U]
                                                 [0x1aU]))) 
                   >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x1cU] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                    [0x20U][0x1dU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                [0x20U]
                                                [0x1cU]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x1dU] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][0x1dU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                 [0x20U]
                                                 [0x1cU]))) 
                   >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x1eU] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                    [0x20U][0x1fU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                [0x20U]
                                                [0x1eU]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x1fU] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                     [0x20U][0x1fU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                                 [0x20U]
                                                 [0x1eU]))) 
                   >> 0x20U));
    vlSelf->top_ws_tb__DOT__out_c[0x1fU] = vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0x1fU];
}

void Vtop_ws_tb___024root___nba_sequent__TOP__0(Vtop_ws_tb___024root* vlSelf);
void Vtop_ws_tb___024root___nba_sequent__TOP__1(Vtop_ws_tb___024root* vlSelf);
void Vtop_ws_tb___024root___nba_sequent__TOP__2(Vtop_ws_tb___024root* vlSelf);
void Vtop_ws_tb___024root___nba_sequent__TOP__3(Vtop_ws_tb___024root* vlSelf);
void Vtop_ws_tb___024root___nba_sequent__TOP__4(Vtop_ws_tb___024root* vlSelf);
void Vtop_ws_tb___024root___nba_sequent__TOP__5(Vtop_ws_tb___024root* vlSelf);
void Vtop_ws_tb___024root___act_comb__TOP__0(Vtop_ws_tb___024root* vlSelf);

void Vtop_ws_tb___024root___eval_nba(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_ws_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vtop_ws_tb___024root___nba_sequent__TOP__1(vlSelf);
        Vtop_ws_tb___024root___nba_sequent__TOP__2(vlSelf);
        Vtop_ws_tb___024root___nba_sequent__TOP__3(vlSelf);
        Vtop_ws_tb___024root___nba_sequent__TOP__4(vlSelf);
        Vtop_ws_tb___024root___nba_sequent__TOP__5(vlSelf);
        Vtop_ws_tb___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_ws_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

void Vtop_ws_tb___024root___timing_resume(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hc4b95240__0.resume("@(posedge top_ws_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtop_ws_tb___024root___timing_commit(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hc4b95240__0.commit("@(posedge top_ws_tb.clk)");
    }
}

void Vtop_ws_tb___024root___eval_triggers__act(Vtop_ws_tb___024root* vlSelf);
void Vtop_ws_tb___024root___eval_act(Vtop_ws_tb___024root* vlSelf);

bool Vtop_ws_tb___024root___eval_phase__act(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_ws_tb___024root___eval_triggers__act(vlSelf);
    Vtop_ws_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop_ws_tb___024root___timing_resume(vlSelf);
        Vtop_ws_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop_ws_tb___024root___eval_phase__nba(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_ws_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ws_tb___024root___dump_triggers__nba(Vtop_ws_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ws_tb___024root___dump_triggers__act(Vtop_ws_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_ws_tb___024root___eval(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop_ws_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("source/top_ws_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop_ws_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("source/top_ws_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop_ws_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop_ws_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_ws_tb___024root___eval_debug_assertions(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
