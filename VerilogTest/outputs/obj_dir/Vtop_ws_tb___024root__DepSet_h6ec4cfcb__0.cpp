// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_ws_tb.h for the primary calling header

#include "Vtop_ws_tb__pch.h"
#include "Vtop_ws_tb__Syms.h"
#include "Vtop_ws_tb___024root.h"

VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vtop_ws_tb___024root* vlSelf);
VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vtop_ws_tb___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x77617665U;
    __Vtemp_1[2U] = 0x7574732fU;
    __Vtemp_1[3U] = 0x6f757470U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->top_ws_tb__DOT__A1[0U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__B[0U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__A2[0U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__A3[0U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__A4[0U][0U] = 0x10U;
    vlSelf->top_ws_tb__DOT__A5[0U][0U] = (0xffU & VL_URANDOM_RANGE_I(0x64U, 0U));
    vlSelf->top_ws_tb__DOT__A1[0U][1U] = 2U;
    vlSelf->top_ws_tb__DOT__B[0U][1U] = 2U;
    vlSelf->top_ws_tb__DOT__A2[0U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__A3[0U][1U] = 1U;
    vlSelf->top_ws_tb__DOT__A4[0U][1U] = 0xfU;
    vlSelf->top_ws_tb__DOT__A5[0U][1U] = (0xffU & VL_URANDOM_RANGE_I(0x64U, 0U));
    vlSelf->top_ws_tb__DOT__A1[0U][2U] = 3U;
    vlSelf->top_ws_tb__DOT__B[0U][2U] = 3U;
    vlSelf->top_ws_tb__DOT__A2[0U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__A3[0U][2U] = 1U;
    vlSelf->top_ws_tb__DOT__A4[0U][2U] = 0xeU;
    vlSelf->top_ws_tb__DOT__A5[0U][2U] = (0xffU & VL_URANDOM_RANGE_I(0x64U, 0U));
    vlSelf->top_ws_tb__DOT__A1[0U][3U] = 4U;
    vlSelf->top_ws_tb__DOT__B[0U][3U] = 4U;
    vlSelf->top_ws_tb__DOT__A2[0U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__A3[0U][3U] = 1U;
    vlSelf->top_ws_tb__DOT__A4[0U][3U] = 0xdU;
    vlSelf->top_ws_tb__DOT__A5[0U][3U] = (0xffU & VL_URANDOM_RANGE_I(0x64U, 0U));
    vlSelf->top_ws_tb__DOT__A1[1U][0U] = 5U;
    vlSelf->top_ws_tb__DOT__B[1U][0U] = 5U;
    vlSelf->top_ws_tb__DOT__A2[1U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__A3[1U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__A4[1U][0U] = 0xcU;
    vlSelf->top_ws_tb__DOT__A5[1U][0U] = (0xffU & VL_URANDOM_RANGE_I(0x64U, 0U));
    vlSelf->top_ws_tb__DOT__A1[1U][1U] = 6U;
    vlSelf->top_ws_tb__DOT__B[1U][1U] = 6U;
    vlSelf->top_ws_tb__DOT__A2[1U][1U] = 2U;
    vlSelf->top_ws_tb__DOT__A3[1U][1U] = 1U;
    vlSelf->top_ws_tb__DOT__A4[1U][1U] = 0xbU;
    vlSelf->top_ws_tb__DOT__A5[1U][1U] = (0xffU & VL_URANDOM_RANGE_I(0x64U, 0U));
    vlSelf->top_ws_tb__DOT__A1[1U][2U] = 7U;
    vlSelf->top_ws_tb__DOT__B[1U][2U] = 7U;
    vlSelf->top_ws_tb__DOT__A2[1U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__A3[1U][2U] = 1U;
    vlSelf->top_ws_tb__DOT__A4[1U][2U] = 0xaU;
    vlSelf->top_ws_tb__DOT__A5[1U][2U] = (0xffU & VL_URANDOM_RANGE_I(0x64U, 0U));
    vlSelf->top_ws_tb__DOT__A1[1U][3U] = 8U;
    vlSelf->top_ws_tb__DOT__B[1U][3U] = 8U;
    vlSelf->top_ws_tb__DOT__A2[1U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__A3[1U][3U] = 1U;
    vlSelf->top_ws_tb__DOT__A4[1U][3U] = 9U;
    vlSelf->top_ws_tb__DOT__A5[1U][3U] = (0xffU & VL_URANDOM_RANGE_I(0x64U, 0U));
    vlSelf->top_ws_tb__DOT__A1[2U][0U] = 9U;
    vlSelf->top_ws_tb__DOT__B[2U][0U] = 9U;
    vlSelf->top_ws_tb__DOT__A2[2U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__A3[2U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__A4[2U][0U] = 8U;
    vlSelf->top_ws_tb__DOT__A5[2U][0U] = (0xffU & VL_URANDOM_RANGE_I(0x64U, 0U));
    vlSelf->top_ws_tb__DOT__A1[2U][1U] = 0xaU;
    vlSelf->top_ws_tb__DOT__B[2U][1U] = 0xaU;
    vlSelf->top_ws_tb__DOT__A2[2U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__A3[2U][1U] = 1U;
    vlSelf->top_ws_tb__DOT__A4[2U][1U] = 7U;
    vlSelf->top_ws_tb__DOT__A5[2U][1U] = (0xffU & VL_URANDOM_RANGE_I(0x64U, 0U));
    vlSelf->top_ws_tb__DOT__A1[2U][2U] = 0xbU;
    vlSelf->top_ws_tb__DOT__B[2U][2U] = 0xbU;
    vlSelf->top_ws_tb__DOT__A2[2U][2U] = 3U;
    vlSelf->top_ws_tb__DOT__A3[2U][2U] = 1U;
    vlSelf->top_ws_tb__DOT__A4[2U][2U] = 6U;
    vlSelf->top_ws_tb__DOT__A5[2U][2U] = (0xffU & VL_URANDOM_RANGE_I(0x64U, 0U));
    vlSelf->top_ws_tb__DOT__A1[2U][3U] = 0xcU;
    vlSelf->top_ws_tb__DOT__B[2U][3U] = 0xcU;
    vlSelf->top_ws_tb__DOT__A2[2U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__A3[2U][3U] = 1U;
    vlSelf->top_ws_tb__DOT__A4[2U][3U] = 5U;
    vlSelf->top_ws_tb__DOT__A5[2U][3U] = (0xffU & VL_URANDOM_RANGE_I(0x64U, 0U));
    vlSelf->top_ws_tb__DOT__A1[3U][0U] = 0xdU;
    vlSelf->top_ws_tb__DOT__B[3U][0U] = 0xdU;
    vlSelf->top_ws_tb__DOT__A2[3U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__A3[3U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__A4[3U][0U] = 4U;
    vlSelf->top_ws_tb__DOT__A5[3U][0U] = (0xffU & VL_URANDOM_RANGE_I(0x64U, 0U));
    vlSelf->top_ws_tb__DOT__A1[3U][1U] = 0xeU;
    vlSelf->top_ws_tb__DOT__B[3U][1U] = 0xeU;
    vlSelf->top_ws_tb__DOT__A2[3U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__A3[3U][1U] = 1U;
    vlSelf->top_ws_tb__DOT__A4[3U][1U] = 3U;
    vlSelf->top_ws_tb__DOT__A5[3U][1U] = (0xffU & VL_URANDOM_RANGE_I(0x64U, 0U));
    vlSelf->top_ws_tb__DOT__A1[3U][2U] = 0xfU;
    vlSelf->top_ws_tb__DOT__B[3U][2U] = 0xfU;
    vlSelf->top_ws_tb__DOT__A2[3U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__A3[3U][2U] = 1U;
    vlSelf->top_ws_tb__DOT__A4[3U][2U] = 2U;
    vlSelf->top_ws_tb__DOT__A5[3U][2U] = (0xffU & VL_URANDOM_RANGE_I(0x64U, 0U));
    vlSelf->top_ws_tb__DOT__A1[3U][3U] = 0x10U;
    vlSelf->top_ws_tb__DOT__B[3U][3U] = 0x10U;
    vlSelf->top_ws_tb__DOT__val1 = 0x10U;
    vlSelf->top_ws_tb__DOT__A2[3U][3U] = 4U;
    vlSelf->top_ws_tb__DOT__A3[3U][3U] = 1U;
    vlSelf->top_ws_tb__DOT__A4[3U][3U] = 1U;
    vlSelf->top_ws_tb__DOT__val4 = 0U;
    vlSelf->top_ws_tb__DOT__A5[3U][3U] = (0xffU & VL_URANDOM_RANGE_I(0x64U, 0U));
    vlSelf->top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    vlSelf->top_ws_tb__DOT__unnamedblk1__DOT__i = 4U;
    vlSelf->top_ws_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top_ws_tb__DOT__rst_n = 1U;
    VL_WRITEF_NX("[%0t] Reset released.\n",0,64,VL_TIME_UNITED_Q(1),
                 -9);
    vlSelf->top_ws_tb__DOT__C1_expected[0U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C1_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C1_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A1
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 4U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C2_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C2_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A2
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 4U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C3_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C3_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A3
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 4U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C4_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C4_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A4
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 4U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[0U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[1U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[2U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][0U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][1U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][2U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C5_expected[3U][3U] = (
                                                   vlSelf->top_ws_tb__DOT__C5_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__A5
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_ws_tb__DOT__B
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 4U;
    VL_WRITEF_NX("[%0t] Loading weights (matrix B).\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top_ws_tb__DOT__weight_load = 1U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top_ws_tb__DOT__weight_load = 0U;
    VL_WRITEF_NX("[%0t] Weights loaded.\n",0,64,VL_TIME_UNITED_Q(1),
                 -9);
    vlSelf->__Vfork_1__sync.init(2U, nullptr);
    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(vlSelf);
    co_await vlSelf->__Vfork_1__sync.join(nullptr, 
                                          "source/top_ws_tb.sv", 
                                          193);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("source/top_ws_tb.sv", 247, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ws_tb___024root___dump_triggers__act(Vtop_ws_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_ws_tb___024root___eval_triggers__act(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->top_ws_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top_ws_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->top_ws_tb__DOT__out_skew_done) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top_ws_tb__DOT__out_skew_done__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->top_ws_tb__DOT__done) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top_ws_tb__DOT__done__0))));
    vlSelf->__Vtrigprevexpr___TOP__top_ws_tb__DOT__clk__0 
        = vlSelf->top_ws_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top_ws_tb__DOT__out_skew_done__0 
        = vlSelf->top_ws_tb__DOT__out_skew_done;
    vlSelf->__Vtrigprevexpr___TOP__top_ws_tb__DOT__done__0 
        = vlSelf->top_ws_tb__DOT__done;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_ws_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
