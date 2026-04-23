// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_os_tb.h for the primary calling header

#include "Vtop_os_tb__pch.h"
#include "Vtop_os_tb__Syms.h"
#include "Vtop_os_tb___024root.h"

VlCoroutine Vtop_os_tb___024root___eval_initial__TOP__Vtiming__0__0(Vtop_os_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_os_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_os_tb___024root___eval_initial__TOP__Vtiming__0__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x77617665U;
    __Vtemp_1[2U] = 0x7574732fU;
    __Vtemp_1[3U] = 0x6f757470U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->top_os_tb__DOT__activation = 0U;
    vlSelf->top_os_tb__DOT__last_tile = 0U;
    vlSelf->top_os_tb__DOT__A1[0U][0U] = 0U;
    vlSelf->top_os_tb__DOT__B1[0U][0U] = 1U;
    vlSelf->top_os_tb__DOT__A2[0U][0U] = 1U;
    vlSelf->top_os_tb__DOT__B2[0U][0U] = 1U;
    vlSelf->top_os_tb__DOT__A3[0U][0U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__B3[0U][0U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__A4[0U][0U] = 1U;
    vlSelf->top_os_tb__DOT__A5[0U][0U] = 5U;
    vlSelf->top_os_tb__DOT__B4[0U][0U] = 0U;
    vlSelf->top_os_tb__DOT__B5[0U][0U] = 0U;
    vlSelf->top_os_tb__DOT__A1[0U][1U] = 1U;
    vlSelf->top_os_tb__DOT__B1[0U][1U] = 2U;
    vlSelf->top_os_tb__DOT__A2[0U][1U] = 0U;
    vlSelf->top_os_tb__DOT__B2[0U][1U] = 0U;
    vlSelf->top_os_tb__DOT__A3[0U][1U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__B3[0U][1U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__A4[0U][1U] = 2U;
    vlSelf->top_os_tb__DOT__A5[0U][1U] = 0U;
    vlSelf->top_os_tb__DOT__B4[0U][1U] = 1U;
    vlSelf->top_os_tb__DOT__B5[0U][1U] = 0U;
    vlSelf->top_os_tb__DOT__A1[0U][2U] = 2U;
    vlSelf->top_os_tb__DOT__B1[0U][2U] = 3U;
    vlSelf->top_os_tb__DOT__A2[0U][2U] = 0U;
    vlSelf->top_os_tb__DOT__B2[0U][2U] = 0U;
    vlSelf->top_os_tb__DOT__A3[0U][2U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__B3[0U][2U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__A4[0U][2U] = 3U;
    vlSelf->top_os_tb__DOT__A5[0U][2U] = 0U;
    vlSelf->top_os_tb__DOT__B4[0U][2U] = 2U;
    vlSelf->top_os_tb__DOT__B5[0U][2U] = 0U;
    vlSelf->top_os_tb__DOT__A1[0U][3U] = 3U;
    vlSelf->top_os_tb__DOT__B1[0U][3U] = 4U;
    vlSelf->top_os_tb__DOT__A2[0U][3U] = 0U;
    vlSelf->top_os_tb__DOT__B2[0U][3U] = 0U;
    vlSelf->top_os_tb__DOT__A3[0U][3U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__B3[0U][3U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__A4[0U][3U] = 4U;
    vlSelf->top_os_tb__DOT__A5[0U][3U] = 0U;
    vlSelf->top_os_tb__DOT__B4[0U][3U] = 3U;
    vlSelf->top_os_tb__DOT__B5[0U][3U] = 0U;
    vlSelf->top_os_tb__DOT__A1[1U][0U] = 4U;
    vlSelf->top_os_tb__DOT__B1[1U][0U] = 5U;
    vlSelf->top_os_tb__DOT__A2[1U][0U] = 0U;
    vlSelf->top_os_tb__DOT__B2[1U][0U] = 0U;
    vlSelf->top_os_tb__DOT__A3[1U][0U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__B3[1U][0U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__A4[1U][0U] = 1U;
    vlSelf->top_os_tb__DOT__A5[1U][0U] = 5U;
    vlSelf->top_os_tb__DOT__B4[1U][0U] = 4U;
    vlSelf->top_os_tb__DOT__B5[1U][0U] = 0U;
    vlSelf->top_os_tb__DOT__A1[1U][1U] = 5U;
    vlSelf->top_os_tb__DOT__B1[1U][1U] = 6U;
    vlSelf->top_os_tb__DOT__A2[1U][1U] = 2U;
    vlSelf->top_os_tb__DOT__B2[1U][1U] = 2U;
    vlSelf->top_os_tb__DOT__A3[1U][1U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__B3[1U][1U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__A4[1U][1U] = 2U;
    vlSelf->top_os_tb__DOT__A5[1U][1U] = 0U;
    vlSelf->top_os_tb__DOT__B4[1U][1U] = 5U;
    vlSelf->top_os_tb__DOT__B5[1U][1U] = 0U;
    vlSelf->top_os_tb__DOT__A1[1U][2U] = 6U;
    vlSelf->top_os_tb__DOT__B1[1U][2U] = 7U;
    vlSelf->top_os_tb__DOT__A2[1U][2U] = 0U;
    vlSelf->top_os_tb__DOT__B2[1U][2U] = 0U;
    vlSelf->top_os_tb__DOT__A3[1U][2U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__B3[1U][2U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__A4[1U][2U] = 3U;
    vlSelf->top_os_tb__DOT__A5[1U][2U] = 0U;
    vlSelf->top_os_tb__DOT__B4[1U][2U] = 6U;
    vlSelf->top_os_tb__DOT__B5[1U][2U] = 0U;
    vlSelf->top_os_tb__DOT__A1[1U][3U] = 7U;
    vlSelf->top_os_tb__DOT__B1[1U][3U] = 8U;
    vlSelf->top_os_tb__DOT__A2[1U][3U] = 0U;
    vlSelf->top_os_tb__DOT__B2[1U][3U] = 0U;
    vlSelf->top_os_tb__DOT__A3[1U][3U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__B3[1U][3U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__A4[1U][3U] = 4U;
    vlSelf->top_os_tb__DOT__A5[1U][3U] = 0U;
    vlSelf->top_os_tb__DOT__B4[1U][3U] = 7U;
    vlSelf->top_os_tb__DOT__B5[1U][3U] = 0U;
    vlSelf->top_os_tb__DOT__A1[2U][0U] = 8U;
    vlSelf->top_os_tb__DOT__B1[2U][0U] = 9U;
    vlSelf->top_os_tb__DOT__A2[2U][0U] = 0U;
    vlSelf->top_os_tb__DOT__B2[2U][0U] = 0U;
    vlSelf->top_os_tb__DOT__A3[2U][0U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__B3[2U][0U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__A4[2U][0U] = 1U;
    vlSelf->top_os_tb__DOT__A5[2U][0U] = 5U;
    vlSelf->top_os_tb__DOT__B4[2U][0U] = 8U;
    vlSelf->top_os_tb__DOT__B5[2U][0U] = 0U;
    vlSelf->top_os_tb__DOT__A1[2U][1U] = 9U;
    vlSelf->top_os_tb__DOT__B1[2U][1U] = 0xaU;
    vlSelf->top_os_tb__DOT__A2[2U][1U] = 0U;
    vlSelf->top_os_tb__DOT__B2[2U][1U] = 0U;
    vlSelf->top_os_tb__DOT__A3[2U][1U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__B3[2U][1U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__A4[2U][1U] = 2U;
    vlSelf->top_os_tb__DOT__A5[2U][1U] = 0U;
    vlSelf->top_os_tb__DOT__B4[2U][1U] = 9U;
    vlSelf->top_os_tb__DOT__B5[2U][1U] = 0U;
    vlSelf->top_os_tb__DOT__A1[2U][2U] = 0xaU;
    vlSelf->top_os_tb__DOT__B1[2U][2U] = 0xbU;
    vlSelf->top_os_tb__DOT__A2[2U][2U] = 3U;
    vlSelf->top_os_tb__DOT__B2[2U][2U] = 3U;
    vlSelf->top_os_tb__DOT__A3[2U][2U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__B3[2U][2U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__A4[2U][2U] = 3U;
    vlSelf->top_os_tb__DOT__A5[2U][2U] = 0U;
    vlSelf->top_os_tb__DOT__B4[2U][2U] = 0xaU;
    vlSelf->top_os_tb__DOT__B5[2U][2U] = 0U;
    vlSelf->top_os_tb__DOT__A1[2U][3U] = 0xbU;
    vlSelf->top_os_tb__DOT__B1[2U][3U] = 0xcU;
    vlSelf->top_os_tb__DOT__A2[2U][3U] = 0U;
    vlSelf->top_os_tb__DOT__B2[2U][3U] = 0U;
    vlSelf->top_os_tb__DOT__A3[2U][3U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__B3[2U][3U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__A4[2U][3U] = 4U;
    vlSelf->top_os_tb__DOT__A5[2U][3U] = 0U;
    vlSelf->top_os_tb__DOT__B4[2U][3U] = 0xbU;
    vlSelf->top_os_tb__DOT__B5[2U][3U] = 0U;
    vlSelf->top_os_tb__DOT__A1[3U][0U] = 0xcU;
    vlSelf->top_os_tb__DOT__B1[3U][0U] = 0xdU;
    vlSelf->top_os_tb__DOT__A2[3U][0U] = 0U;
    vlSelf->top_os_tb__DOT__B2[3U][0U] = 0U;
    vlSelf->top_os_tb__DOT__A3[3U][0U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__B3[3U][0U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__A4[3U][0U] = 1U;
    vlSelf->top_os_tb__DOT__A5[3U][0U] = 5U;
    vlSelf->top_os_tb__DOT__B4[3U][0U] = 0xcU;
    vlSelf->top_os_tb__DOT__B5[3U][0U] = 0U;
    vlSelf->top_os_tb__DOT__A1[3U][1U] = 0xdU;
    vlSelf->top_os_tb__DOT__B1[3U][1U] = 0xeU;
    vlSelf->top_os_tb__DOT__A2[3U][1U] = 0U;
    vlSelf->top_os_tb__DOT__B2[3U][1U] = 0U;
    vlSelf->top_os_tb__DOT__A3[3U][1U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__B3[3U][1U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__A4[3U][1U] = 2U;
    vlSelf->top_os_tb__DOT__A5[3U][1U] = 0U;
    vlSelf->top_os_tb__DOT__B4[3U][1U] = 0xdU;
    vlSelf->top_os_tb__DOT__B5[3U][1U] = 0U;
    vlSelf->top_os_tb__DOT__A1[3U][2U] = 0xeU;
    vlSelf->top_os_tb__DOT__B1[3U][2U] = 0xfU;
    vlSelf->top_os_tb__DOT__A2[3U][2U] = 0U;
    vlSelf->top_os_tb__DOT__B2[3U][2U] = 0U;
    vlSelf->top_os_tb__DOT__A3[3U][2U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__B3[3U][2U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__A4[3U][2U] = 3U;
    vlSelf->top_os_tb__DOT__A5[3U][2U] = 0U;
    vlSelf->top_os_tb__DOT__B4[3U][2U] = 0xeU;
    vlSelf->top_os_tb__DOT__B5[3U][2U] = 0U;
    vlSelf->top_os_tb__DOT__A1[3U][3U] = 0xfU;
    vlSelf->top_os_tb__DOT__B1[3U][3U] = 0x10U;
    vlSelf->top_os_tb__DOT__A2[3U][3U] = 4U;
    vlSelf->top_os_tb__DOT__B2[3U][3U] = 4U;
    vlSelf->top_os_tb__DOT__A3[3U][3U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__B3[3U][3U] = (0xffU & VL_URANDOM_RANGE_I(0xaU, 1U));
    vlSelf->top_os_tb__DOT__A4[3U][3U] = 4U;
    vlSelf->top_os_tb__DOT__A5[3U][3U] = 0U;
    vlSelf->top_os_tb__DOT__B4[3U][3U] = 0xfU;
    vlSelf->top_os_tb__DOT__B5[3U][3U] = 0U;
    vlSelf->top_os_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    vlSelf->top_os_tb__DOT__unnamedblk1__DOT__i = 4U;
    vlSelf->top_os_tb__DOT__B5[0U][0U] = 0x10U;
    vlSelf->top_os_tb__DOT__B5[0U][1U] = 0x11U;
    vlSelf->top_os_tb__DOT__B5[0U][2U] = 0x12U;
    vlSelf->top_os_tb__DOT__B5[0U][3U] = 0x13U;
    vlSelf->top_os_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/top_os_tb.sv", 
                                       51);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    co_await vlSelf->__VtrigSched_h2ab17985__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_os_tb.clk)", 
                                                       "source/top_os_tb.sv", 
                                                       52);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->top_os_tb__DOT__rst_n = 1U;
    VL_WRITEF_NX("[%0t] Reset released.\n",0,64,VL_TIME_UNITED_Q(1),
                 -9);
    vlSelf->top_os_tb__DOT__C1_expected[0U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[0U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[1U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[2U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C1_expected[3U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C1_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A1
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B1
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 4U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[0U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[1U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[2U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C2_expected[3U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C2_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A2
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B2
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 4U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [0U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [0U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [0U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [0U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [0U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [0U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[0U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [0U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [0U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [1U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [1U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [1U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [1U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [1U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [1U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[1U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [1U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [1U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [2U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [2U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [2U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [2U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [2U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [2U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[2U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [2U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [2U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [0U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [1U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [2U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][0U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [3U]
                                                   [0U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [3U]
                                                                             [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [0U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [1U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [2U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][1U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [3U]
                                                   [1U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [3U]
                                                                             [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [0U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [1U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [2U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][2U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [3U]
                                                   [2U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [3U]
                                                                             [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [3U]
                                                                             [0U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [0U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [3U]
                                                                             [1U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [1U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [3U]
                                                                             [2U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [2U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C3_expected[3U][3U] = (
                                                   vlSelf->top_os_tb__DOT__C3_expected
                                                   [3U]
                                                   [3U] 
                                                   + 
                                                   VL_MULS_III(32, 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__A3
                                                                             [3U]
                                                                             [3U]), 
                                                               VL_EXTENDS_II(32,8, 
                                                                             vlSelf->top_os_tb__DOT__B3
                                                                             [3U]
                                                                             [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 4U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 4U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 4U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A1
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 4U;
    vlSelf->top_os_tb__DOT__C4_expected[0U][0U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [0U]
                                                    [0U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [0U]
                                                    [0U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [0U]
                                                   [0U]);
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
    vlSelf->top_os_tb__DOT__C4_expected[0U][1U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [0U]
                                                    [1U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [0U]
                                                    [1U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [0U]
                                                   [1U]);
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
    vlSelf->top_os_tb__DOT__C4_expected[0U][2U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [0U]
                                                    [2U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [0U]
                                                    [2U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [0U]
                                                   [2U]);
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 3U;
    vlSelf->top_os_tb__DOT__C4_expected[0U][3U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [0U]
                                                    [3U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [0U]
                                                    [3U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [0U]
                                                   [3U]);
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__i = 1U;
    vlSelf->top_os_tb__DOT__C4_expected[1U][0U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [1U]
                                                    [0U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [1U]
                                                    [0U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [1U]
                                                   [0U]);
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
    vlSelf->top_os_tb__DOT__C4_expected[1U][1U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [1U]
                                                    [1U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [1U]
                                                    [1U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [1U]
                                                   [1U]);
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
    vlSelf->top_os_tb__DOT__C4_expected[1U][2U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [1U]
                                                    [2U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [1U]
                                                    [2U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [1U]
                                                   [2U]);
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 3U;
    vlSelf->top_os_tb__DOT__C4_expected[1U][3U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [1U]
                                                    [3U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [1U]
                                                    [3U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [1U]
                                                   [3U]);
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__i = 2U;
    vlSelf->top_os_tb__DOT__C4_expected[2U][0U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [2U]
                                                    [0U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [2U]
                                                    [0U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [2U]
                                                   [0U]);
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
    vlSelf->top_os_tb__DOT__C4_expected[2U][1U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [2U]
                                                    [1U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [2U]
                                                    [1U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [2U]
                                                   [1U]);
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
    vlSelf->top_os_tb__DOT__C4_expected[2U][2U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [2U]
                                                    [2U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [2U]
                                                    [2U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [2U]
                                                   [2U]);
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 3U;
    vlSelf->top_os_tb__DOT__C4_expected[2U][3U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [2U]
                                                    [3U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [2U]
                                                    [3U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [2U]
                                                   [3U]);
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__i = 3U;
    vlSelf->top_os_tb__DOT__C4_expected[3U][0U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [3U]
                                                    [0U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [3U]
                                                    [0U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [3U]
                                                   [0U]);
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
    vlSelf->top_os_tb__DOT__C4_expected[3U][1U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [3U]
                                                    [1U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [3U]
                                                    [1U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [3U]
                                                   [1U]);
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
    vlSelf->top_os_tb__DOT__C4_expected[3U][2U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [3U]
                                                    [2U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [3U]
                                                    [2U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [3U]
                                                   [2U]);
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 3U;
    vlSelf->top_os_tb__DOT__C4_expected[3U][3U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [3U]
                                                    [3U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [3U]
                                                    [3U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [3U]
                                                   [3U]);
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
    vlSelf->top_os_tb__DOT__unnamedblk3__DOT__i = 4U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp1[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 4U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp2[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp2
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B2
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 4U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[0U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [0U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [0U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[1U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [1U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [1U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[2U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [2U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [2U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][0U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][1U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][1U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][1U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [1U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][2U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][2U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][2U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [2U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][3U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [0U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [1U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [2U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_os_tb__DOT__C_tmp3[3U][3U] = (vlSelf->top_os_tb__DOT__C_tmp3
                                              [3U][3U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A2
                                                                          [3U]
                                                                          [3U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B3
                                                                          [3U]
                                                                          [3U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__r = 4U;
    vlSelf->top_os_tb__DOT__C5_expected[0U][0U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [0U]
                                                    [0U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [0U]
                                                    [0U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [0U]
                                                   [0U]);
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
    vlSelf->top_os_tb__DOT__C5_expected[0U][1U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [0U]
                                                    [1U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [0U]
                                                    [1U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [0U]
                                                   [1U]);
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 2U;
    vlSelf->top_os_tb__DOT__C5_expected[0U][2U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [0U]
                                                    [2U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [0U]
                                                    [2U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [0U]
                                                   [2U]);
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 3U;
    vlSelf->top_os_tb__DOT__C5_expected[0U][3U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [0U]
                                                    [3U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [0U]
                                                    [3U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [0U]
                                                   [3U]);
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 4U;
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__i = 1U;
    vlSelf->top_os_tb__DOT__C5_expected[1U][0U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [1U]
                                                    [0U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [1U]
                                                    [0U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [1U]
                                                   [0U]);
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
    vlSelf->top_os_tb__DOT__C5_expected[1U][1U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [1U]
                                                    [1U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [1U]
                                                    [1U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [1U]
                                                   [1U]);
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 2U;
    vlSelf->top_os_tb__DOT__C5_expected[1U][2U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [1U]
                                                    [2U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [1U]
                                                    [2U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [1U]
                                                   [2U]);
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 3U;
    vlSelf->top_os_tb__DOT__C5_expected[1U][3U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [1U]
                                                    [3U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [1U]
                                                    [3U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [1U]
                                                   [3U]);
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 4U;
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__i = 2U;
    vlSelf->top_os_tb__DOT__C5_expected[2U][0U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [2U]
                                                    [0U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [2U]
                                                    [0U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [2U]
                                                   [0U]);
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
    vlSelf->top_os_tb__DOT__C5_expected[2U][1U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [2U]
                                                    [1U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [2U]
                                                    [1U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [2U]
                                                   [1U]);
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 2U;
    vlSelf->top_os_tb__DOT__C5_expected[2U][2U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [2U]
                                                    [2U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [2U]
                                                    [2U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [2U]
                                                   [2U]);
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 3U;
    vlSelf->top_os_tb__DOT__C5_expected[2U][3U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [2U]
                                                    [3U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [2U]
                                                    [3U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [2U]
                                                   [3U]);
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 4U;
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__i = 3U;
    vlSelf->top_os_tb__DOT__C5_expected[3U][0U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [3U]
                                                    [0U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [3U]
                                                    [0U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [3U]
                                                   [0U]);
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 1U;
    vlSelf->top_os_tb__DOT__C5_expected[3U][1U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [3U]
                                                    [1U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [3U]
                                                    [1U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [3U]
                                                   [1U]);
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 2U;
    vlSelf->top_os_tb__DOT__C5_expected[3U][2U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [3U]
                                                    [2U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [3U]
                                                    [2U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [3U]
                                                   [2U]);
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 3U;
    vlSelf->top_os_tb__DOT__C5_expected[3U][3U] = (
                                                   (vlSelf->top_os_tb__DOT__C_tmp1
                                                    [3U]
                                                    [3U] 
                                                    + 
                                                    vlSelf->top_os_tb__DOT__C_tmp2
                                                    [3U]
                                                    [3U]) 
                                                   + 
                                                   vlSelf->top_os_tb__DOT__C_tmp3
                                                   [3U]
                                                   [3U]);
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j = 4U;
    vlSelf->top_os_tb__DOT__unnamedblk5__DOT__i = 4U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][0U] = 0U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A3
                                                                          [0U]
                                                                          [0U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [0U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A3
                                                                          [0U]
                                                                          [1U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [1U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_os_tb__DOT__C_tmp1[0U][0U] = (vlSelf->top_os_tb__DOT__C_tmp1
                                              [0U][0U] 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__A3
                                                                          [0U]
                                                                          [2U]), 
                                                            VL_EXTENDS_II(32,8, 
                                                                          vlSelf->top_os_tb__DOT__B1
                                                                          [2U]
                                                                          [0U])));
    vlSelf->top_os_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_os_tb___024root___dump_triggers__act(Vtop_os_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_os_tb___024root___eval_triggers__act(Vtop_os_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_os_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_os_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->top_os_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top_os_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->top_os_tb__DOT__out_skew_done) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top_os_tb__DOT__out_skew_done__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->top_os_tb__DOT__done) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top_os_tb__DOT__done__0))));
    vlSelf->__Vtrigprevexpr___TOP__top_os_tb__DOT__clk__0 
        = vlSelf->top_os_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top_os_tb__DOT__out_skew_done__0 
        = vlSelf->top_os_tb__DOT__out_skew_done;
    vlSelf->__Vtrigprevexpr___TOP__top_os_tb__DOT__done__0 
        = vlSelf->top_os_tb__DOT__done;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_os_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
