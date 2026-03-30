// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_ws_tb.h for the primary calling header

#include "Vtop_ws_tb__pch.h"
#include "Vtop_ws_tb__Syms.h"
#include "Vtop_ws_tb___024root.h"

VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vtop_ws_tb___024root* vlSelf);
VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vtop_ws_tb___024root* vlSelf);
VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__0(Vtop_ws_tb___024root* vlSelf);
VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__1(Vtop_ws_tb___024root* vlSelf);

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
    vlSelf->top_ws_tb__DOT__A[0U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__B[0U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__A[0U][1U] = 2U;
    vlSelf->top_ws_tb__DOT__B[0U][1U] = 2U;
    vlSelf->top_ws_tb__DOT__A[0U][2U] = 3U;
    vlSelf->top_ws_tb__DOT__B[0U][2U] = 3U;
    vlSelf->top_ws_tb__DOT__A[0U][3U] = 4U;
    vlSelf->top_ws_tb__DOT__B[0U][3U] = 4U;
    vlSelf->top_ws_tb__DOT__A[1U][0U] = 5U;
    vlSelf->top_ws_tb__DOT__B[1U][0U] = 5U;
    vlSelf->top_ws_tb__DOT__A[1U][1U] = 6U;
    vlSelf->top_ws_tb__DOT__B[1U][1U] = 6U;
    vlSelf->top_ws_tb__DOT__A[1U][2U] = 7U;
    vlSelf->top_ws_tb__DOT__B[1U][2U] = 7U;
    vlSelf->top_ws_tb__DOT__A[1U][3U] = 8U;
    vlSelf->top_ws_tb__DOT__B[1U][3U] = 8U;
    vlSelf->top_ws_tb__DOT__A[2U][0U] = 9U;
    vlSelf->top_ws_tb__DOT__B[2U][0U] = 9U;
    vlSelf->top_ws_tb__DOT__A[2U][1U] = 0xaU;
    vlSelf->top_ws_tb__DOT__B[2U][1U] = 0xaU;
    vlSelf->top_ws_tb__DOT__A[2U][2U] = 0xbU;
    vlSelf->top_ws_tb__DOT__B[2U][2U] = 0xbU;
    vlSelf->top_ws_tb__DOT__A[2U][3U] = 0xcU;
    vlSelf->top_ws_tb__DOT__B[2U][3U] = 0xcU;
    vlSelf->top_ws_tb__DOT__A[3U][0U] = 0xdU;
    vlSelf->top_ws_tb__DOT__B[3U][0U] = 0xdU;
    vlSelf->top_ws_tb__DOT__A[3U][1U] = 0xeU;
    vlSelf->top_ws_tb__DOT__B[3U][1U] = 0xeU;
    vlSelf->top_ws_tb__DOT__A[3U][2U] = 0xfU;
    vlSelf->top_ws_tb__DOT__B[3U][2U] = 0xfU;
    vlSelf->top_ws_tb__DOT__A[3U][3U] = 0x10U;
    vlSelf->top_ws_tb__DOT__B[3U][3U] = 0x10U;
    vlSelf->top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    vlSelf->top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
    vlSelf->top_ws_tb__DOT__rst_n = 0U;
    vlSelf->top_ws_tb__DOT__load_weight = 0U;
    vlSelf->top_ws_tb__DOT__start = 0U;
    vlSelf->top_ws_tb__DOT__in_a = 0U;
    vlSelf->top_ws_tb__DOT__weights_in[0U] = 0U;
    vlSelf->top_ws_tb__DOT__weights_in[1U] = 0U;
    vlSelf->top_ws_tb__DOT__weights_in[2U] = 0U;
    vlSelf->top_ws_tb__DOT__weights_in[3U] = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top_ws_tb__DOT__rst_n = 1U;
    VL_WRITEF_NX("[%0t] Reset released.\n",0,64,VL_TIME_UNITED_Q(1),
                 -9);
    vlSelf->top_ws_tb__DOT__C_expected[0U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 4U;
    VL_WRITEF_NX("[%0t] Loading weights (matrix B):\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    vlSelf->top_ws_tb__DOT__weights_in[0U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[0U]) 
                                              | vlSelf->top_ws_tb__DOT__B
                                              [0U][0U]);
    VL_WRITEF_NX("  B[0][0] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [0U][0U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__weights_in[0U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[0U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [0U]
                                                 [1U] 
                                                 << 8U));
    VL_WRITEF_NX("  B[0][1] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [0U][1U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__weights_in[0U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[0U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [0U]
                                                 [2U] 
                                                 << 0x10U));
    VL_WRITEF_NX("  B[0][2] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [0U][2U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__weights_in[0U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[0U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [0U]
                                                 [3U] 
                                                 << 0x18U));
    VL_WRITEF_NX("  B[0][3] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [0U][3U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__weights_in[1U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[1U]) 
                                              | vlSelf->top_ws_tb__DOT__B
                                              [1U][0U]);
    VL_WRITEF_NX("  B[1][0] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [1U][0U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__weights_in[1U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[1U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [1U]
                                                 [1U] 
                                                 << 8U));
    VL_WRITEF_NX("  B[1][1] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [1U][1U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__weights_in[1U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[1U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [1U]
                                                 [2U] 
                                                 << 0x10U));
    VL_WRITEF_NX("  B[1][2] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [1U][2U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__weights_in[1U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[1U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [1U]
                                                 [3U] 
                                                 << 0x18U));
    VL_WRITEF_NX("  B[1][3] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [1U][3U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__weights_in[2U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[2U]) 
                                              | vlSelf->top_ws_tb__DOT__B
                                              [2U][0U]);
    VL_WRITEF_NX("  B[2][0] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [2U][0U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__weights_in[2U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[2U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [2U]
                                                 [1U] 
                                                 << 8U));
    VL_WRITEF_NX("  B[2][1] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [2U][1U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__weights_in[2U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[2U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [2U]
                                                 [2U] 
                                                 << 0x10U));
    VL_WRITEF_NX("  B[2][2] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [2U][2U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__weights_in[2U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[2U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [2U]
                                                 [3U] 
                                                 << 0x18U));
    VL_WRITEF_NX("  B[2][3] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [2U][3U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__weights_in[3U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[3U]) 
                                              | vlSelf->top_ws_tb__DOT__B
                                              [3U][0U]);
    VL_WRITEF_NX("  B[3][0] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [3U][0U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__weights_in[3U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[3U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [3U]
                                                 [1U] 
                                                 << 8U));
    VL_WRITEF_NX("  B[3][1] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [3U][1U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__weights_in[3U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[3U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [3U]
                                                 [2U] 
                                                 << 0x10U));
    VL_WRITEF_NX("  B[3][2] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [3U][2U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__weights_in[3U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[3U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [3U]
                                                 [3U] 
                                                 << 0x18U));
    VL_WRITEF_NX("  B[3][3] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [3U][3U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 4U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top_ws_tb__DOT__load_weight = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top_ws_tb__DOT__load_weight = 0U;
    VL_WRITEF_NX("[%0t] Weights loaded.\n",0,64,VL_TIME_UNITED_Q(1),
                 -9);
    vlSelf->__Vfork_1__sync.init(2U, nullptr);
    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(vlSelf);
    co_await vlSelf->__Vfork_1__sync.join(nullptr, 
                                          "source/top_ws_tb.sv", 
                                          283);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors = 0U;
    VL_WRITEF_NX("\n[%0t] --- Result Check ---\nExpected C = A * B:\n  C_exp[0] = %4#",0,
                 64,VL_TIME_UNITED_Q(1),-9,32,vlSelf->top_ws_tb__DOT__C_expected
                 [0U][0U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [0U][1U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [0U][2U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [0U][3U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 1U;
    VL_WRITEF_NX("  C_exp[1] = %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [1U][0U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [1U][1U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [1U][2U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [1U][3U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 2U;
    VL_WRITEF_NX("  C_exp[2] = %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [2U][0U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [2U][1U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [2U][2U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [2U][3U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 3U;
    VL_WRITEF_NX("  C_exp[3] = %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [3U][0U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [3U][1U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [3U][2U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [3U][3U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 4U;
    VL_WRITEF_NX("Got:\n  C_got[0] = %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [0U][0U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [0U][1U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [0U][2U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [0U][3U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 1U;
    VL_WRITEF_NX("  C_got[1] = %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [1U][0U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [1U][1U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [1U][2U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [1U][3U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 2U;
    VL_WRITEF_NX("  C_got[2] = %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [2U][0U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [2U][1U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [2U][2U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [2U][3U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 3U;
    VL_WRITEF_NX("  C_got[3] = %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [3U][0U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [3U][1U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [3U][2U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [3U][3U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 4U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[0U]
                     [0U] != vlSelf->top_ws_tb__DOT__C_expected
                     [0U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][0]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [0U][0U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [0U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[0U]
                     [1U] != vlSelf->top_ws_tb__DOT__C_expected
                     [0U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][1]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [0U][1U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [0U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[0U]
                     [2U] != vlSelf->top_ws_tb__DOT__C_expected
                     [0U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][2]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [0U][2U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [0U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[0U]
                     [3U] != vlSelf->top_ws_tb__DOT__C_expected
                     [0U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][3]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [0U][3U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [0U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[1U]
                     [0U] != vlSelf->top_ws_tb__DOT__C_expected
                     [1U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][0]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [1U][0U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [1U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[1U]
                     [1U] != vlSelf->top_ws_tb__DOT__C_expected
                     [1U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][1]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [1U][1U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [1U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[1U]
                     [2U] != vlSelf->top_ws_tb__DOT__C_expected
                     [1U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][2]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [1U][2U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [1U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[1U]
                     [3U] != vlSelf->top_ws_tb__DOT__C_expected
                     [1U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][3]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [1U][3U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [1U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[2U]
                     [0U] != vlSelf->top_ws_tb__DOT__C_expected
                     [2U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][0]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [2U][0U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [2U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[2U]
                     [1U] != vlSelf->top_ws_tb__DOT__C_expected
                     [2U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][1]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [2U][1U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [2U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[2U]
                     [2U] != vlSelf->top_ws_tb__DOT__C_expected
                     [2U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][2]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [2U][2U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [2U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[2U]
                     [3U] != vlSelf->top_ws_tb__DOT__C_expected
                     [2U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][3]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [2U][3U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [2U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[3U]
                     [0U] != vlSelf->top_ws_tb__DOT__C_expected
                     [3U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][0]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [3U][0U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [3U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[3U]
                     [1U] != vlSelf->top_ws_tb__DOT__C_expected
                     [3U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][1]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [3U][1U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [3U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[3U]
                     [2U] != vlSelf->top_ws_tb__DOT__C_expected
                     [3U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][2]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [3U][2U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [3U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[3U]
                     [3U] != vlSelf->top_ws_tb__DOT__C_expected
                     [3U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][3]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [3U][3U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [3U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 4U;
    if ((0U == vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors)) {
        VL_WRITEF_NX("  PASS \342\200\224 all 16 outputs match.\n\n",0);
    } else {
        VL_WRITEF_NX("  FAIL \342\200\224 %0d mismatches found.\n\n",0,
                     32,vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    VL_WRITEF_NX("[%0t] --- Second test: all-ones matrices ---\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    vlSelf->top_ws_tb__DOT__A[0U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__A[0U][1U] = 1U;
    vlSelf->top_ws_tb__DOT__A[0U][2U] = 1U;
    vlSelf->top_ws_tb__DOT__A[0U][3U] = 1U;
    vlSelf->top_ws_tb__DOT__A[1U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__A[1U][1U] = 1U;
    vlSelf->top_ws_tb__DOT__A[1U][2U] = 1U;
    vlSelf->top_ws_tb__DOT__A[1U][3U] = 1U;
    vlSelf->top_ws_tb__DOT__A[2U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__A[2U][1U] = 1U;
    vlSelf->top_ws_tb__DOT__A[2U][2U] = 1U;
    vlSelf->top_ws_tb__DOT__A[2U][3U] = 1U;
    vlSelf->top_ws_tb__DOT__A[3U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__A[3U][1U] = 1U;
    vlSelf->top_ws_tb__DOT__A[3U][2U] = 1U;
    vlSelf->top_ws_tb__DOT__A[3U][3U] = 1U;
    vlSelf->top_ws_tb__DOT__B[0U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__B[0U][1U] = 1U;
    vlSelf->top_ws_tb__DOT__B[0U][2U] = 1U;
    vlSelf->top_ws_tb__DOT__B[0U][3U] = 1U;
    vlSelf->top_ws_tb__DOT__B[1U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__B[1U][1U] = 1U;
    vlSelf->top_ws_tb__DOT__B[1U][2U] = 1U;
    vlSelf->top_ws_tb__DOT__B[1U][3U] = 1U;
    vlSelf->top_ws_tb__DOT__B[2U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__B[2U][1U] = 1U;
    vlSelf->top_ws_tb__DOT__B[2U][2U] = 1U;
    vlSelf->top_ws_tb__DOT__B[2U][3U] = 1U;
    vlSelf->top_ws_tb__DOT__B[3U][0U] = 1U;
    vlSelf->top_ws_tb__DOT__B[3U][1U] = 1U;
    vlSelf->top_ws_tb__DOT__B[3U][2U] = 1U;
    vlSelf->top_ws_tb__DOT__B[3U][3U] = 1U;
    vlSelf->top_ws_tb__DOT__rst_n = 0U;
    vlSelf->top_ws_tb__DOT__load_weight = 0U;
    vlSelf->top_ws_tb__DOT__start = 0U;
    vlSelf->top_ws_tb__DOT__in_a = 0U;
    vlSelf->top_ws_tb__DOT__weights_in[0U] = 0U;
    vlSelf->top_ws_tb__DOT__weights_in[1U] = 0U;
    vlSelf->top_ws_tb__DOT__weights_in[2U] = 0U;
    vlSelf->top_ws_tb__DOT__weights_in[3U] = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top_ws_tb__DOT__rst_n = 1U;
    VL_WRITEF_NX("[%0t] Reset released.\n",0,64,VL_TIME_UNITED_Q(1),
                 -9);
    vlSelf->top_ws_tb__DOT__C_expected[0U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[0U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [0U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [0U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[1U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [1U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [1U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[2U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [2U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [2U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][0U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [0U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [0U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][1U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [1U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [1U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][2U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [2U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [2U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][3U] = 0U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [0U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [0U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [1U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [1U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [2U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [2U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
    vlSelf->top_ws_tb__DOT__C_expected[3U][3U] = (vlSelf->top_ws_tb__DOT__C_expected
                                                  [3U]
                                                  [3U] 
                                                  + 
                                                  (vlSelf->top_ws_tb__DOT__A
                                                   [3U]
                                                   [3U] 
                                                   * 
                                                   vlSelf->top_ws_tb__DOT__B
                                                   [3U]
                                                   [3U]));
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 4U;
    VL_WRITEF_NX("[%0t] Loading weights (matrix B):\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    vlSelf->top_ws_tb__DOT__weights_in[0U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[0U]) 
                                              | vlSelf->top_ws_tb__DOT__B
                                              [0U][0U]);
    VL_WRITEF_NX("  B[0][0] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [0U][0U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__weights_in[0U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[0U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [0U]
                                                 [1U] 
                                                 << 8U));
    VL_WRITEF_NX("  B[0][1] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [0U][1U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__weights_in[0U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[0U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [0U]
                                                 [2U] 
                                                 << 0x10U));
    VL_WRITEF_NX("  B[0][2] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [0U][2U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__weights_in[0U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[0U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [0U]
                                                 [3U] 
                                                 << 0x18U));
    VL_WRITEF_NX("  B[0][3] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [0U][3U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__weights_in[1U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[1U]) 
                                              | vlSelf->top_ws_tb__DOT__B
                                              [1U][0U]);
    VL_WRITEF_NX("  B[1][0] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [1U][0U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__weights_in[1U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[1U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [1U]
                                                 [1U] 
                                                 << 8U));
    VL_WRITEF_NX("  B[1][1] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [1U][1U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__weights_in[1U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[1U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [1U]
                                                 [2U] 
                                                 << 0x10U));
    VL_WRITEF_NX("  B[1][2] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [1U][2U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__weights_in[1U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[1U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [1U]
                                                 [3U] 
                                                 << 0x18U));
    VL_WRITEF_NX("  B[1][3] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [1U][3U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__weights_in[2U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[2U]) 
                                              | vlSelf->top_ws_tb__DOT__B
                                              [2U][0U]);
    VL_WRITEF_NX("  B[2][0] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [2U][0U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__weights_in[2U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[2U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [2U]
                                                 [1U] 
                                                 << 8U));
    VL_WRITEF_NX("  B[2][1] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [2U][1U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__weights_in[2U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[2U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [2U]
                                                 [2U] 
                                                 << 0x10U));
    VL_WRITEF_NX("  B[2][2] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [2U][2U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__weights_in[2U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[2U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [2U]
                                                 [3U] 
                                                 << 0x18U));
    VL_WRITEF_NX("  B[2][3] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [2U][3U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__weights_in[3U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[3U]) 
                                              | vlSelf->top_ws_tb__DOT__B
                                              [3U][0U]);
    VL_WRITEF_NX("  B[3][0] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [3U][0U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    vlSelf->top_ws_tb__DOT__weights_in[3U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[3U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [3U]
                                                 [1U] 
                                                 << 8U));
    VL_WRITEF_NX("  B[3][1] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [3U][1U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    vlSelf->top_ws_tb__DOT__weights_in[3U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[3U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [3U]
                                                 [2U] 
                                                 << 0x10U));
    VL_WRITEF_NX("  B[3][2] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [3U][2U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    vlSelf->top_ws_tb__DOT__weights_in[3U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[3U]) 
                                              | (vlSelf->top_ws_tb__DOT__B
                                                 [3U]
                                                 [3U] 
                                                 << 0x18U));
    VL_WRITEF_NX("  B[3][3] = %0#",0,8,vlSelf->top_ws_tb__DOT__B
                 [3U][3U]);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 4U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top_ws_tb__DOT__load_weight = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top_ws_tb__DOT__load_weight = 0U;
    VL_WRITEF_NX("[%0t] Weights loaded.\n",0,64,VL_TIME_UNITED_Q(1),
                 -9);
    vlSelf->__Vfork_2__sync.init(2U, nullptr);
    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__0(vlSelf);
    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__1(vlSelf);
    co_await vlSelf->__Vfork_2__sync.join(nullptr, 
                                          "source/top_ws_tb.sv", 
                                          307);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors = 0U;
    VL_WRITEF_NX("\n[%0t] --- Result Check ---\nExpected C = A * B:\n  C_exp[0] = %4#",0,
                 64,VL_TIME_UNITED_Q(1),-9,32,vlSelf->top_ws_tb__DOT__C_expected
                 [0U][0U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [0U][1U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [0U][2U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [0U][3U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 1U;
    VL_WRITEF_NX("  C_exp[1] = %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [1U][0U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [1U][1U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [1U][2U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [1U][3U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 2U;
    VL_WRITEF_NX("  C_exp[2] = %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [2U][0U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [2U][1U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [2U][2U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [2U][3U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 3U;
    VL_WRITEF_NX("  C_exp[3] = %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [3U][0U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [3U][1U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [3U][2U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_expected
                 [3U][3U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 4U;
    VL_WRITEF_NX("Got:\n  C_got[0] = %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [0U][0U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [0U][1U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [0U][2U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [0U][3U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 1U;
    VL_WRITEF_NX("  C_got[1] = %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [1U][0U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [1U][1U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [1U][2U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [1U][3U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 2U;
    VL_WRITEF_NX("  C_got[2] = %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [2U][0U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [2U][1U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [2U][2U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [2U][3U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 3U;
    VL_WRITEF_NX("  C_got[3] = %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [3U][0U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [3U][1U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [3U][2U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                 [3U][3U]);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    VL_WRITEF_NX("\n",0);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 4U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[0U]
                     [0U] != vlSelf->top_ws_tb__DOT__C_expected
                     [0U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][0]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [0U][0U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [0U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[0U]
                     [1U] != vlSelf->top_ws_tb__DOT__C_expected
                     [0U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][1]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [0U][1U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [0U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[0U]
                     [2U] != vlSelf->top_ws_tb__DOT__C_expected
                     [0U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][2]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [0U][2U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [0U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[0U]
                     [3U] != vlSelf->top_ws_tb__DOT__C_expected
                     [0U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][3]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [0U][3U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [0U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[1U]
                     [0U] != vlSelf->top_ws_tb__DOT__C_expected
                     [1U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][0]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [1U][0U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [1U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[1U]
                     [1U] != vlSelf->top_ws_tb__DOT__C_expected
                     [1U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][1]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [1U][1U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [1U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[1U]
                     [2U] != vlSelf->top_ws_tb__DOT__C_expected
                     [1U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][2]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [1U][2U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [1U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[1U]
                     [3U] != vlSelf->top_ws_tb__DOT__C_expected
                     [1U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][3]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [1U][3U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [1U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[2U]
                     [0U] != vlSelf->top_ws_tb__DOT__C_expected
                     [2U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][0]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [2U][0U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [2U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[2U]
                     [1U] != vlSelf->top_ws_tb__DOT__C_expected
                     [2U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][1]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [2U][1U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [2U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[2U]
                     [2U] != vlSelf->top_ws_tb__DOT__C_expected
                     [2U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][2]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [2U][2U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [2U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[2U]
                     [3U] != vlSelf->top_ws_tb__DOT__C_expected
                     [2U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][3]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [2U][3U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [2U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[3U]
                     [0U] != vlSelf->top_ws_tb__DOT__C_expected
                     [3U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][0]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [3U][0U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [3U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[3U]
                     [1U] != vlSelf->top_ws_tb__DOT__C_expected
                     [3U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][1]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [3U][1U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [3U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[3U]
                     [2U] != vlSelf->top_ws_tb__DOT__C_expected
                     [3U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][2]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [3U][2U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [3U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C_got[3U]
                     [3U] != vlSelf->top_ws_tb__DOT__C_expected
                     [3U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][3]: got %0#, expected %0#\n",0,
                     32,vlSelf->top_ws_tb__DOT__C_got
                     [3U][3U],32,vlSelf->top_ws_tb__DOT__C_expected
                     [3U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 4U;
    if ((0U == vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors)) {
        VL_WRITEF_NX("  PASS \342\200\224 all 16 outputs match.\n\n",0);
    } else {
        VL_WRITEF_NX("  FAIL \342\200\224 %0d mismatches found.\n\n",0,
                     32,vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    co_await vlSelf->__VdlySched.delay(0x28ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       318);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("source/top_ws_tb.sv", 319, "");
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
    vlSelf->__Vtrigprevexpr___TOP__top_ws_tb__DOT__clk__0 
        = vlSelf->top_ws_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_ws_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
