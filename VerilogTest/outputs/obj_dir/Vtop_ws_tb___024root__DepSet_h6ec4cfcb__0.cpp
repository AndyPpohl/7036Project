// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_ws_tb.h for the primary calling header

#include "Vtop_ws_tb__pch.h"
#include "Vtop_ws_tb__Syms.h"
#include "Vtop_ws_tb___024root.h"

extern const VlWide<49>/*1567:0*/ Vtop_ws_tb__ConstPool__CONST_hdd856ed7_0;

VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0__0(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0__0\n"); );
    // Init
    CData/*7:0*/ top_ws_tb__DOT____Vlvbound_h4cce03ad__0;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = 0;
    IData/*31:0*/ __Vilp;
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
    vlSelf->top_ws_tb__DOT__A[0U][4U] = 5U;
    vlSelf->top_ws_tb__DOT__B[0U][4U] = 5U;
    vlSelf->top_ws_tb__DOT__A[0U][5U] = 6U;
    vlSelf->top_ws_tb__DOT__B[0U][5U] = 6U;
    vlSelf->top_ws_tb__DOT__A[0U][6U] = 7U;
    vlSelf->top_ws_tb__DOT__B[0U][6U] = 7U;
    vlSelf->top_ws_tb__DOT__A[0U][7U] = 8U;
    vlSelf->top_ws_tb__DOT__B[0U][7U] = 8U;
    vlSelf->top_ws_tb__DOT__A[0U][8U] = 9U;
    vlSelf->top_ws_tb__DOT__B[0U][8U] = 9U;
    vlSelf->top_ws_tb__DOT__A[0U][9U] = 0xaU;
    vlSelf->top_ws_tb__DOT__B[0U][9U] = 0xaU;
    vlSelf->top_ws_tb__DOT__A[0U][0xaU] = 0xbU;
    vlSelf->top_ws_tb__DOT__B[0U][0xaU] = 0xbU;
    vlSelf->top_ws_tb__DOT__A[0U][0xbU] = 0xcU;
    vlSelf->top_ws_tb__DOT__B[0U][0xbU] = 0xcU;
    vlSelf->top_ws_tb__DOT__A[0U][0xcU] = 0xdU;
    vlSelf->top_ws_tb__DOT__B[0U][0xcU] = 0xdU;
    vlSelf->top_ws_tb__DOT__A[0U][0xdU] = 0xeU;
    vlSelf->top_ws_tb__DOT__B[0U][0xdU] = 0xeU;
    vlSelf->top_ws_tb__DOT__A[1U][0U] = 0xfU;
    vlSelf->top_ws_tb__DOT__B[1U][0U] = 0xfU;
    vlSelf->top_ws_tb__DOT__A[1U][1U] = 0x10U;
    vlSelf->top_ws_tb__DOT__B[1U][1U] = 0x10U;
    vlSelf->top_ws_tb__DOT__A[1U][2U] = 0x11U;
    vlSelf->top_ws_tb__DOT__B[1U][2U] = 0x11U;
    vlSelf->top_ws_tb__DOT__A[1U][3U] = 0x12U;
    vlSelf->top_ws_tb__DOT__B[1U][3U] = 0x12U;
    vlSelf->top_ws_tb__DOT__A[1U][4U] = 0x13U;
    vlSelf->top_ws_tb__DOT__B[1U][4U] = 0x13U;
    vlSelf->top_ws_tb__DOT__A[1U][5U] = 0x14U;
    vlSelf->top_ws_tb__DOT__B[1U][5U] = 0x14U;
    vlSelf->top_ws_tb__DOT__A[1U][6U] = 0x15U;
    vlSelf->top_ws_tb__DOT__B[1U][6U] = 0x15U;
    vlSelf->top_ws_tb__DOT__A[1U][7U] = 0x16U;
    vlSelf->top_ws_tb__DOT__B[1U][7U] = 0x16U;
    vlSelf->top_ws_tb__DOT__A[1U][8U] = 0x17U;
    vlSelf->top_ws_tb__DOT__B[1U][8U] = 0x17U;
    vlSelf->top_ws_tb__DOT__A[1U][9U] = 0x18U;
    vlSelf->top_ws_tb__DOT__B[1U][9U] = 0x18U;
    vlSelf->top_ws_tb__DOT__A[1U][0xaU] = 0x19U;
    vlSelf->top_ws_tb__DOT__B[1U][0xaU] = 0x19U;
    vlSelf->top_ws_tb__DOT__A[1U][0xbU] = 0x1aU;
    vlSelf->top_ws_tb__DOT__B[1U][0xbU] = 0x1aU;
    vlSelf->top_ws_tb__DOT__A[1U][0xcU] = 0x1bU;
    vlSelf->top_ws_tb__DOT__B[1U][0xcU] = 0x1bU;
    vlSelf->top_ws_tb__DOT__A[1U][0xdU] = 0x1cU;
    vlSelf->top_ws_tb__DOT__B[1U][0xdU] = 0x1cU;
    vlSelf->top_ws_tb__DOT__A[2U][0U] = 0x1dU;
    vlSelf->top_ws_tb__DOT__B[2U][0U] = 0x1dU;
    vlSelf->top_ws_tb__DOT__A[2U][1U] = 0x1eU;
    vlSelf->top_ws_tb__DOT__B[2U][1U] = 0x1eU;
    vlSelf->top_ws_tb__DOT__A[2U][2U] = 0x1fU;
    vlSelf->top_ws_tb__DOT__B[2U][2U] = 0x1fU;
    vlSelf->top_ws_tb__DOT__A[2U][3U] = 0x20U;
    vlSelf->top_ws_tb__DOT__B[2U][3U] = 0x20U;
    vlSelf->top_ws_tb__DOT__A[2U][4U] = 0x21U;
    vlSelf->top_ws_tb__DOT__B[2U][4U] = 0x21U;
    vlSelf->top_ws_tb__DOT__A[2U][5U] = 0x22U;
    vlSelf->top_ws_tb__DOT__B[2U][5U] = 0x22U;
    vlSelf->top_ws_tb__DOT__A[2U][6U] = 0x23U;
    vlSelf->top_ws_tb__DOT__B[2U][6U] = 0x23U;
    vlSelf->top_ws_tb__DOT__A[2U][7U] = 0x24U;
    vlSelf->top_ws_tb__DOT__B[2U][7U] = 0x24U;
    vlSelf->top_ws_tb__DOT__A[2U][8U] = 0x25U;
    vlSelf->top_ws_tb__DOT__B[2U][8U] = 0x25U;
    vlSelf->top_ws_tb__DOT__A[2U][9U] = 0x26U;
    vlSelf->top_ws_tb__DOT__B[2U][9U] = 0x26U;
    vlSelf->top_ws_tb__DOT__A[2U][0xaU] = 0x27U;
    vlSelf->top_ws_tb__DOT__B[2U][0xaU] = 0x27U;
    vlSelf->top_ws_tb__DOT__A[2U][0xbU] = 0x28U;
    vlSelf->top_ws_tb__DOT__B[2U][0xbU] = 0x28U;
    vlSelf->top_ws_tb__DOT__A[2U][0xcU] = 0x29U;
    vlSelf->top_ws_tb__DOT__B[2U][0xcU] = 0x29U;
    vlSelf->top_ws_tb__DOT__A[2U][0xdU] = 0x2aU;
    vlSelf->top_ws_tb__DOT__B[2U][0xdU] = 0x2aU;
    vlSelf->top_ws_tb__DOT__A[3U][0U] = 0x2bU;
    vlSelf->top_ws_tb__DOT__B[3U][0U] = 0x2bU;
    vlSelf->top_ws_tb__DOT__A[3U][1U] = 0x2cU;
    vlSelf->top_ws_tb__DOT__B[3U][1U] = 0x2cU;
    vlSelf->top_ws_tb__DOT__A[3U][2U] = 0x2dU;
    vlSelf->top_ws_tb__DOT__B[3U][2U] = 0x2dU;
    vlSelf->top_ws_tb__DOT__A[3U][3U] = 0x2eU;
    vlSelf->top_ws_tb__DOT__B[3U][3U] = 0x2eU;
    vlSelf->top_ws_tb__DOT__A[3U][4U] = 0x2fU;
    vlSelf->top_ws_tb__DOT__B[3U][4U] = 0x2fU;
    vlSelf->top_ws_tb__DOT__A[3U][5U] = 0x30U;
    vlSelf->top_ws_tb__DOT__B[3U][5U] = 0x30U;
    vlSelf->top_ws_tb__DOT__A[3U][6U] = 0x31U;
    vlSelf->top_ws_tb__DOT__B[3U][6U] = 0x31U;
    vlSelf->top_ws_tb__DOT__A[3U][7U] = 0x32U;
    vlSelf->top_ws_tb__DOT__B[3U][7U] = 0x32U;
    vlSelf->top_ws_tb__DOT__A[3U][8U] = 0x33U;
    vlSelf->top_ws_tb__DOT__B[3U][8U] = 0x33U;
    vlSelf->top_ws_tb__DOT__A[3U][9U] = 0x34U;
    vlSelf->top_ws_tb__DOT__B[3U][9U] = 0x34U;
    vlSelf->top_ws_tb__DOT__A[3U][0xaU] = 0x35U;
    vlSelf->top_ws_tb__DOT__B[3U][0xaU] = 0x35U;
    vlSelf->top_ws_tb__DOT__A[3U][0xbU] = 0x36U;
    vlSelf->top_ws_tb__DOT__B[3U][0xbU] = 0x36U;
    vlSelf->top_ws_tb__DOT__A[3U][0xcU] = 0x37U;
    vlSelf->top_ws_tb__DOT__B[3U][0xcU] = 0x37U;
    vlSelf->top_ws_tb__DOT__A[3U][0xdU] = 0x38U;
    vlSelf->top_ws_tb__DOT__B[3U][0xdU] = 0x38U;
    vlSelf->top_ws_tb__DOT__A[4U][0U] = 0x39U;
    vlSelf->top_ws_tb__DOT__B[4U][0U] = 0x39U;
    vlSelf->top_ws_tb__DOT__A[4U][1U] = 0x3aU;
    vlSelf->top_ws_tb__DOT__B[4U][1U] = 0x3aU;
    vlSelf->top_ws_tb__DOT__A[4U][2U] = 0x3bU;
    vlSelf->top_ws_tb__DOT__B[4U][2U] = 0x3bU;
    vlSelf->top_ws_tb__DOT__A[4U][3U] = 0x3cU;
    vlSelf->top_ws_tb__DOT__B[4U][3U] = 0x3cU;
    vlSelf->top_ws_tb__DOT__A[4U][4U] = 0x3dU;
    vlSelf->top_ws_tb__DOT__B[4U][4U] = 0x3dU;
    vlSelf->top_ws_tb__DOT__A[4U][5U] = 0x3eU;
    vlSelf->top_ws_tb__DOT__B[4U][5U] = 0x3eU;
    vlSelf->top_ws_tb__DOT__A[4U][6U] = 0x3fU;
    vlSelf->top_ws_tb__DOT__B[4U][6U] = 0x3fU;
    vlSelf->top_ws_tb__DOT__A[4U][7U] = 0x40U;
    vlSelf->top_ws_tb__DOT__B[4U][7U] = 0x40U;
    vlSelf->top_ws_tb__DOT__A[4U][8U] = 0x41U;
    vlSelf->top_ws_tb__DOT__B[4U][8U] = 0x41U;
    vlSelf->top_ws_tb__DOT__A[4U][9U] = 0x42U;
    vlSelf->top_ws_tb__DOT__B[4U][9U] = 0x42U;
    vlSelf->top_ws_tb__DOT__A[4U][0xaU] = 0x43U;
    vlSelf->top_ws_tb__DOT__B[4U][0xaU] = 0x43U;
    vlSelf->top_ws_tb__DOT__A[4U][0xbU] = 0x44U;
    vlSelf->top_ws_tb__DOT__B[4U][0xbU] = 0x44U;
    vlSelf->top_ws_tb__DOT__A[4U][0xcU] = 0x45U;
    vlSelf->top_ws_tb__DOT__B[4U][0xcU] = 0x45U;
    vlSelf->top_ws_tb__DOT__A[4U][0xdU] = 0x46U;
    vlSelf->top_ws_tb__DOT__B[4U][0xdU] = 0x46U;
    vlSelf->top_ws_tb__DOT__A[5U][0U] = 0x47U;
    vlSelf->top_ws_tb__DOT__B[5U][0U] = 0x47U;
    vlSelf->top_ws_tb__DOT__A[5U][1U] = 0x48U;
    vlSelf->top_ws_tb__DOT__B[5U][1U] = 0x48U;
    vlSelf->top_ws_tb__DOT__A[5U][2U] = 0x49U;
    vlSelf->top_ws_tb__DOT__B[5U][2U] = 0x49U;
    vlSelf->top_ws_tb__DOT__A[5U][3U] = 0x4aU;
    vlSelf->top_ws_tb__DOT__B[5U][3U] = 0x4aU;
    vlSelf->top_ws_tb__DOT__A[5U][4U] = 0x4bU;
    vlSelf->top_ws_tb__DOT__B[5U][4U] = 0x4bU;
    vlSelf->top_ws_tb__DOT__A[5U][5U] = 0x4cU;
    vlSelf->top_ws_tb__DOT__B[5U][5U] = 0x4cU;
    vlSelf->top_ws_tb__DOT__A[5U][6U] = 0x4dU;
    vlSelf->top_ws_tb__DOT__B[5U][6U] = 0x4dU;
    vlSelf->top_ws_tb__DOT__A[5U][7U] = 0x4eU;
    vlSelf->top_ws_tb__DOT__B[5U][7U] = 0x4eU;
    vlSelf->top_ws_tb__DOT__A[5U][8U] = 0x4fU;
    vlSelf->top_ws_tb__DOT__B[5U][8U] = 0x4fU;
    vlSelf->top_ws_tb__DOT__A[5U][9U] = 0x50U;
    vlSelf->top_ws_tb__DOT__B[5U][9U] = 0x50U;
    vlSelf->top_ws_tb__DOT__A[5U][0xaU] = 0x51U;
    vlSelf->top_ws_tb__DOT__B[5U][0xaU] = 0x51U;
    vlSelf->top_ws_tb__DOT__A[5U][0xbU] = 0x52U;
    vlSelf->top_ws_tb__DOT__B[5U][0xbU] = 0x52U;
    vlSelf->top_ws_tb__DOT__A[5U][0xcU] = 0x53U;
    vlSelf->top_ws_tb__DOT__B[5U][0xcU] = 0x53U;
    vlSelf->top_ws_tb__DOT__A[5U][0xdU] = 0x54U;
    vlSelf->top_ws_tb__DOT__B[5U][0xdU] = 0x54U;
    vlSelf->top_ws_tb__DOT__A[6U][0U] = 0x55U;
    vlSelf->top_ws_tb__DOT__B[6U][0U] = 0x55U;
    vlSelf->top_ws_tb__DOT__A[6U][1U] = 0x56U;
    vlSelf->top_ws_tb__DOT__B[6U][1U] = 0x56U;
    vlSelf->top_ws_tb__DOT__A[6U][2U] = 0x57U;
    vlSelf->top_ws_tb__DOT__B[6U][2U] = 0x57U;
    vlSelf->top_ws_tb__DOT__A[6U][3U] = 0x58U;
    vlSelf->top_ws_tb__DOT__B[6U][3U] = 0x58U;
    vlSelf->top_ws_tb__DOT__A[6U][4U] = 0x59U;
    vlSelf->top_ws_tb__DOT__B[6U][4U] = 0x59U;
    vlSelf->top_ws_tb__DOT__A[6U][5U] = 0x5aU;
    vlSelf->top_ws_tb__DOT__B[6U][5U] = 0x5aU;
    vlSelf->top_ws_tb__DOT__A[6U][6U] = 0x5bU;
    vlSelf->top_ws_tb__DOT__B[6U][6U] = 0x5bU;
    vlSelf->top_ws_tb__DOT__A[6U][7U] = 0x5cU;
    vlSelf->top_ws_tb__DOT__B[6U][7U] = 0x5cU;
    vlSelf->top_ws_tb__DOT__A[6U][8U] = 0x5dU;
    vlSelf->top_ws_tb__DOT__B[6U][8U] = 0x5dU;
    vlSelf->top_ws_tb__DOT__A[6U][9U] = 0x5eU;
    vlSelf->top_ws_tb__DOT__B[6U][9U] = 0x5eU;
    vlSelf->top_ws_tb__DOT__A[6U][0xaU] = 0x5fU;
    vlSelf->top_ws_tb__DOT__B[6U][0xaU] = 0x5fU;
    vlSelf->top_ws_tb__DOT__A[6U][0xbU] = 0x60U;
    vlSelf->top_ws_tb__DOT__B[6U][0xbU] = 0x60U;
    vlSelf->top_ws_tb__DOT__A[6U][0xcU] = 0x61U;
    vlSelf->top_ws_tb__DOT__B[6U][0xcU] = 0x61U;
    vlSelf->top_ws_tb__DOT__A[6U][0xdU] = 0x62U;
    vlSelf->top_ws_tb__DOT__B[6U][0xdU] = 0x62U;
    vlSelf->top_ws_tb__DOT__A[7U][0U] = 0x63U;
    vlSelf->top_ws_tb__DOT__B[7U][0U] = 0x63U;
    vlSelf->top_ws_tb__DOT__A[7U][1U] = 0x64U;
    vlSelf->top_ws_tb__DOT__B[7U][1U] = 0x64U;
    vlSelf->top_ws_tb__DOT__A[7U][2U] = 0x65U;
    vlSelf->top_ws_tb__DOT__B[7U][2U] = 0x65U;
    vlSelf->top_ws_tb__DOT__A[7U][3U] = 0x66U;
    vlSelf->top_ws_tb__DOT__B[7U][3U] = 0x66U;
    vlSelf->top_ws_tb__DOT__A[7U][4U] = 0x67U;
    vlSelf->top_ws_tb__DOT__B[7U][4U] = 0x67U;
    vlSelf->top_ws_tb__DOT__A[7U][5U] = 0x68U;
    vlSelf->top_ws_tb__DOT__B[7U][5U] = 0x68U;
    vlSelf->top_ws_tb__DOT__A[7U][6U] = 0x69U;
    vlSelf->top_ws_tb__DOT__B[7U][6U] = 0x69U;
    vlSelf->top_ws_tb__DOT__A[7U][7U] = 0x6aU;
    vlSelf->top_ws_tb__DOT__B[7U][7U] = 0x6aU;
    vlSelf->top_ws_tb__DOT__A[7U][8U] = 0x6bU;
    vlSelf->top_ws_tb__DOT__B[7U][8U] = 0x6bU;
    vlSelf->top_ws_tb__DOT__A[7U][9U] = 0x6cU;
    vlSelf->top_ws_tb__DOT__B[7U][9U] = 0x6cU;
    vlSelf->top_ws_tb__DOT__A[7U][0xaU] = 0x6dU;
    vlSelf->top_ws_tb__DOT__B[7U][0xaU] = 0x6dU;
    vlSelf->top_ws_tb__DOT__A[7U][0xbU] = 0x6eU;
    vlSelf->top_ws_tb__DOT__B[7U][0xbU] = 0x6eU;
    vlSelf->top_ws_tb__DOT__A[7U][0xcU] = 0x6fU;
    vlSelf->top_ws_tb__DOT__B[7U][0xcU] = 0x6fU;
    vlSelf->top_ws_tb__DOT__A[7U][0xdU] = 0x70U;
    vlSelf->top_ws_tb__DOT__B[7U][0xdU] = 0x70U;
    vlSelf->top_ws_tb__DOT__A[8U][0U] = 0x71U;
    vlSelf->top_ws_tb__DOT__B[8U][0U] = 0x71U;
    vlSelf->top_ws_tb__DOT__A[8U][1U] = 0x72U;
    vlSelf->top_ws_tb__DOT__B[8U][1U] = 0x72U;
    vlSelf->top_ws_tb__DOT__A[8U][2U] = 0x73U;
    vlSelf->top_ws_tb__DOT__B[8U][2U] = 0x73U;
    vlSelf->top_ws_tb__DOT__A[8U][3U] = 0x74U;
    vlSelf->top_ws_tb__DOT__B[8U][3U] = 0x74U;
    vlSelf->top_ws_tb__DOT__A[8U][4U] = 0x75U;
    vlSelf->top_ws_tb__DOT__B[8U][4U] = 0x75U;
    vlSelf->top_ws_tb__DOT__A[8U][5U] = 0x76U;
    vlSelf->top_ws_tb__DOT__B[8U][5U] = 0x76U;
    vlSelf->top_ws_tb__DOT__A[8U][6U] = 0x77U;
    vlSelf->top_ws_tb__DOT__B[8U][6U] = 0x77U;
    vlSelf->top_ws_tb__DOT__A[8U][7U] = 0x78U;
    vlSelf->top_ws_tb__DOT__B[8U][7U] = 0x78U;
    vlSelf->top_ws_tb__DOT__A[8U][8U] = 0x79U;
    vlSelf->top_ws_tb__DOT__B[8U][8U] = 0x79U;
    vlSelf->top_ws_tb__DOT__A[8U][9U] = 0x7aU;
    vlSelf->top_ws_tb__DOT__B[8U][9U] = 0x7aU;
    vlSelf->top_ws_tb__DOT__A[8U][0xaU] = 0x7bU;
    vlSelf->top_ws_tb__DOT__B[8U][0xaU] = 0x7bU;
    vlSelf->top_ws_tb__DOT__A[8U][0xbU] = 0x7cU;
    vlSelf->top_ws_tb__DOT__B[8U][0xbU] = 0x7cU;
    vlSelf->top_ws_tb__DOT__A[8U][0xcU] = 0x7dU;
    vlSelf->top_ws_tb__DOT__B[8U][0xcU] = 0x7dU;
    vlSelf->top_ws_tb__DOT__A[8U][0xdU] = 0x7eU;
    vlSelf->top_ws_tb__DOT__B[8U][0xdU] = 0x7eU;
    vlSelf->top_ws_tb__DOT__A[9U][0U] = 0x7fU;
    vlSelf->top_ws_tb__DOT__B[9U][0U] = 0x7fU;
    vlSelf->top_ws_tb__DOT__A[9U][1U] = 0x80U;
    vlSelf->top_ws_tb__DOT__B[9U][1U] = 0x80U;
    vlSelf->top_ws_tb__DOT__A[9U][2U] = 0x81U;
    vlSelf->top_ws_tb__DOT__B[9U][2U] = 0x81U;
    vlSelf->top_ws_tb__DOT__A[9U][3U] = 0x82U;
    vlSelf->top_ws_tb__DOT__B[9U][3U] = 0x82U;
    vlSelf->top_ws_tb__DOT__A[9U][4U] = 0x83U;
    vlSelf->top_ws_tb__DOT__B[9U][4U] = 0x83U;
    vlSelf->top_ws_tb__DOT__A[9U][5U] = 0x84U;
    vlSelf->top_ws_tb__DOT__B[9U][5U] = 0x84U;
    vlSelf->top_ws_tb__DOT__A[9U][6U] = 0x85U;
    vlSelf->top_ws_tb__DOT__B[9U][6U] = 0x85U;
    vlSelf->top_ws_tb__DOT__A[9U][7U] = 0x86U;
    vlSelf->top_ws_tb__DOT__B[9U][7U] = 0x86U;
    vlSelf->top_ws_tb__DOT__A[9U][8U] = 0x87U;
    vlSelf->top_ws_tb__DOT__B[9U][8U] = 0x87U;
    vlSelf->top_ws_tb__DOT__A[9U][9U] = 0x88U;
    vlSelf->top_ws_tb__DOT__B[9U][9U] = 0x88U;
    vlSelf->top_ws_tb__DOT__A[9U][0xaU] = 0x89U;
    vlSelf->top_ws_tb__DOT__B[9U][0xaU] = 0x89U;
    vlSelf->top_ws_tb__DOT__A[9U][0xbU] = 0x8aU;
    vlSelf->top_ws_tb__DOT__B[9U][0xbU] = 0x8aU;
    vlSelf->top_ws_tb__DOT__A[9U][0xcU] = 0x8bU;
    vlSelf->top_ws_tb__DOT__B[9U][0xcU] = 0x8bU;
    vlSelf->top_ws_tb__DOT__A[9U][0xdU] = 0x8cU;
    vlSelf->top_ws_tb__DOT__B[9U][0xdU] = 0x8cU;
    vlSelf->top_ws_tb__DOT__A[0xaU][0U] = 0x8dU;
    vlSelf->top_ws_tb__DOT__B[0xaU][0U] = 0x8dU;
    vlSelf->top_ws_tb__DOT__A[0xaU][1U] = 0x8eU;
    vlSelf->top_ws_tb__DOT__B[0xaU][1U] = 0x8eU;
    vlSelf->top_ws_tb__DOT__A[0xaU][2U] = 0x8fU;
    vlSelf->top_ws_tb__DOT__B[0xaU][2U] = 0x8fU;
    vlSelf->top_ws_tb__DOT__A[0xaU][3U] = 0x90U;
    vlSelf->top_ws_tb__DOT__B[0xaU][3U] = 0x90U;
    vlSelf->top_ws_tb__DOT__A[0xaU][4U] = 0x91U;
    vlSelf->top_ws_tb__DOT__B[0xaU][4U] = 0x91U;
    vlSelf->top_ws_tb__DOT__A[0xaU][5U] = 0x92U;
    vlSelf->top_ws_tb__DOT__B[0xaU][5U] = 0x92U;
    vlSelf->top_ws_tb__DOT__A[0xaU][6U] = 0x93U;
    vlSelf->top_ws_tb__DOT__B[0xaU][6U] = 0x93U;
    vlSelf->top_ws_tb__DOT__A[0xaU][7U] = 0x94U;
    vlSelf->top_ws_tb__DOT__B[0xaU][7U] = 0x94U;
    vlSelf->top_ws_tb__DOT__A[0xaU][8U] = 0x95U;
    vlSelf->top_ws_tb__DOT__B[0xaU][8U] = 0x95U;
    vlSelf->top_ws_tb__DOT__A[0xaU][9U] = 0x96U;
    vlSelf->top_ws_tb__DOT__B[0xaU][9U] = 0x96U;
    vlSelf->top_ws_tb__DOT__A[0xaU][0xaU] = 0x97U;
    vlSelf->top_ws_tb__DOT__B[0xaU][0xaU] = 0x97U;
    vlSelf->top_ws_tb__DOT__A[0xaU][0xbU] = 0x98U;
    vlSelf->top_ws_tb__DOT__B[0xaU][0xbU] = 0x98U;
    vlSelf->top_ws_tb__DOT__A[0xaU][0xcU] = 0x99U;
    vlSelf->top_ws_tb__DOT__B[0xaU][0xcU] = 0x99U;
    vlSelf->top_ws_tb__DOT__A[0xaU][0xdU] = 0x9aU;
    vlSelf->top_ws_tb__DOT__B[0xaU][0xdU] = 0x9aU;
    vlSelf->top_ws_tb__DOT__A[0xbU][0U] = 0x9bU;
    vlSelf->top_ws_tb__DOT__B[0xbU][0U] = 0x9bU;
    vlSelf->top_ws_tb__DOT__A[0xbU][1U] = 0x9cU;
    vlSelf->top_ws_tb__DOT__B[0xbU][1U] = 0x9cU;
    vlSelf->top_ws_tb__DOT__A[0xbU][2U] = 0x9dU;
    vlSelf->top_ws_tb__DOT__B[0xbU][2U] = 0x9dU;
    vlSelf->top_ws_tb__DOT__A[0xbU][3U] = 0x9eU;
    vlSelf->top_ws_tb__DOT__B[0xbU][3U] = 0x9eU;
    vlSelf->top_ws_tb__DOT__A[0xbU][4U] = 0x9fU;
    vlSelf->top_ws_tb__DOT__B[0xbU][4U] = 0x9fU;
    vlSelf->top_ws_tb__DOT__A[0xbU][5U] = 0xa0U;
    vlSelf->top_ws_tb__DOT__B[0xbU][5U] = 0xa0U;
    vlSelf->top_ws_tb__DOT__A[0xbU][6U] = 0xa1U;
    vlSelf->top_ws_tb__DOT__B[0xbU][6U] = 0xa1U;
    vlSelf->top_ws_tb__DOT__A[0xbU][7U] = 0xa2U;
    vlSelf->top_ws_tb__DOT__B[0xbU][7U] = 0xa2U;
    vlSelf->top_ws_tb__DOT__A[0xbU][8U] = 0xa3U;
    vlSelf->top_ws_tb__DOT__B[0xbU][8U] = 0xa3U;
    vlSelf->top_ws_tb__DOT__A[0xbU][9U] = 0xa4U;
    vlSelf->top_ws_tb__DOT__B[0xbU][9U] = 0xa4U;
    vlSelf->top_ws_tb__DOT__A[0xbU][0xaU] = 0xa5U;
    vlSelf->top_ws_tb__DOT__B[0xbU][0xaU] = 0xa5U;
    vlSelf->top_ws_tb__DOT__A[0xbU][0xbU] = 0xa6U;
    vlSelf->top_ws_tb__DOT__B[0xbU][0xbU] = 0xa6U;
    vlSelf->top_ws_tb__DOT__A[0xbU][0xcU] = 0xa7U;
    vlSelf->top_ws_tb__DOT__B[0xbU][0xcU] = 0xa7U;
    vlSelf->top_ws_tb__DOT__A[0xbU][0xdU] = 0xa8U;
    vlSelf->top_ws_tb__DOT__B[0xbU][0xdU] = 0xa8U;
    vlSelf->top_ws_tb__DOT__A[0xcU][0U] = 0xa9U;
    vlSelf->top_ws_tb__DOT__B[0xcU][0U] = 0xa9U;
    vlSelf->top_ws_tb__DOT__A[0xcU][1U] = 0xaaU;
    vlSelf->top_ws_tb__DOT__B[0xcU][1U] = 0xaaU;
    vlSelf->top_ws_tb__DOT__A[0xcU][2U] = 0xabU;
    vlSelf->top_ws_tb__DOT__B[0xcU][2U] = 0xabU;
    vlSelf->top_ws_tb__DOT__A[0xcU][3U] = 0xacU;
    vlSelf->top_ws_tb__DOT__B[0xcU][3U] = 0xacU;
    vlSelf->top_ws_tb__DOT__A[0xcU][4U] = 0xadU;
    vlSelf->top_ws_tb__DOT__B[0xcU][4U] = 0xadU;
    vlSelf->top_ws_tb__DOT__A[0xcU][5U] = 0xaeU;
    vlSelf->top_ws_tb__DOT__B[0xcU][5U] = 0xaeU;
    vlSelf->top_ws_tb__DOT__A[0xcU][6U] = 0xafU;
    vlSelf->top_ws_tb__DOT__B[0xcU][6U] = 0xafU;
    vlSelf->top_ws_tb__DOT__A[0xcU][7U] = 0xb0U;
    vlSelf->top_ws_tb__DOT__B[0xcU][7U] = 0xb0U;
    vlSelf->top_ws_tb__DOT__A[0xcU][8U] = 0xb1U;
    vlSelf->top_ws_tb__DOT__B[0xcU][8U] = 0xb1U;
    vlSelf->top_ws_tb__DOT__A[0xcU][9U] = 0xb2U;
    vlSelf->top_ws_tb__DOT__B[0xcU][9U] = 0xb2U;
    vlSelf->top_ws_tb__DOT__A[0xcU][0xaU] = 0xb3U;
    vlSelf->top_ws_tb__DOT__B[0xcU][0xaU] = 0xb3U;
    vlSelf->top_ws_tb__DOT__A[0xcU][0xbU] = 0xb4U;
    vlSelf->top_ws_tb__DOT__B[0xcU][0xbU] = 0xb4U;
    vlSelf->top_ws_tb__DOT__A[0xcU][0xcU] = 0xb5U;
    vlSelf->top_ws_tb__DOT__B[0xcU][0xcU] = 0xb5U;
    vlSelf->top_ws_tb__DOT__A[0xcU][0xdU] = 0xb6U;
    vlSelf->top_ws_tb__DOT__B[0xcU][0xdU] = 0xb6U;
    vlSelf->top_ws_tb__DOT__A[0xdU][0U] = 0xb7U;
    vlSelf->top_ws_tb__DOT__B[0xdU][0U] = 0xb7U;
    vlSelf->top_ws_tb__DOT__A[0xdU][1U] = 0xb8U;
    vlSelf->top_ws_tb__DOT__B[0xdU][1U] = 0xb8U;
    vlSelf->top_ws_tb__DOT__A[0xdU][2U] = 0xb9U;
    vlSelf->top_ws_tb__DOT__B[0xdU][2U] = 0xb9U;
    vlSelf->top_ws_tb__DOT__A[0xdU][3U] = 0xbaU;
    vlSelf->top_ws_tb__DOT__B[0xdU][3U] = 0xbaU;
    vlSelf->top_ws_tb__DOT__A[0xdU][4U] = 0xbbU;
    vlSelf->top_ws_tb__DOT__B[0xdU][4U] = 0xbbU;
    vlSelf->top_ws_tb__DOT__A[0xdU][5U] = 0xbcU;
    vlSelf->top_ws_tb__DOT__B[0xdU][5U] = 0xbcU;
    vlSelf->top_ws_tb__DOT__A[0xdU][6U] = 0xbdU;
    vlSelf->top_ws_tb__DOT__B[0xdU][6U] = 0xbdU;
    vlSelf->top_ws_tb__DOT__A[0xdU][7U] = 0xbeU;
    vlSelf->top_ws_tb__DOT__B[0xdU][7U] = 0xbeU;
    vlSelf->top_ws_tb__DOT__A[0xdU][8U] = 0xbfU;
    vlSelf->top_ws_tb__DOT__B[0xdU][8U] = 0xbfU;
    vlSelf->top_ws_tb__DOT__A[0xdU][9U] = 0xc0U;
    vlSelf->top_ws_tb__DOT__B[0xdU][9U] = 0xc0U;
    vlSelf->top_ws_tb__DOT__A[0xdU][0xaU] = 0xc1U;
    vlSelf->top_ws_tb__DOT__B[0xdU][0xaU] = 0xc1U;
    vlSelf->top_ws_tb__DOT__A[0xdU][0xbU] = 0xc2U;
    vlSelf->top_ws_tb__DOT__B[0xdU][0xbU] = 0xc2U;
    vlSelf->top_ws_tb__DOT__A[0xdU][0xcU] = 0xc3U;
    vlSelf->top_ws_tb__DOT__B[0xdU][0xcU] = 0xc3U;
    vlSelf->top_ws_tb__DOT__A[0xdU][0xdU] = 0xc4U;
    vlSelf->top_ws_tb__DOT__B[0xdU][0xdU] = 0xc4U;
    vlSelf->top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0xeU;
    vlSelf->top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0xeU;
    vlSelf->top_ws_tb__DOT__rst_n = 0U;
    vlSelf->top_ws_tb__DOT__load_weight = 0U;
    vlSelf->top_ws_tb__DOT__start = 0U;
    vlSelf->top_ws_tb__DOT__in_a[0U] = 0U;
    vlSelf->top_ws_tb__DOT__in_a[1U] = 0U;
    vlSelf->top_ws_tb__DOT__in_a[2U] = 0U;
    vlSelf->top_ws_tb__DOT__in_a[3U] = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x30U)) {
        vlSelf->top_ws_tb__DOT__weights_in[__Vilp] 
            = Vtop_ws_tb__ConstPool__CONST_hdd856ed7_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       73);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top_ws_tb__DOT__rst_n = 1U;
    VL_WRITEF_NX("[%0t] Reset released.\n",0,64,VL_TIME_UNITED_Q(1),
                 -9);
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = 0U;
    while (VL_GTS_III(32, 0xeU, vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)) {
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0 = 0U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0U]
                                                [0U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [1U]
                                                [0U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [2U]
                                                [0U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [3U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [3U]
                                                [0U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [4U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [4U]
                                                [0U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 5U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [5U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [5U]
                                                [0U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 6U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [6U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [6U]
                                                [0U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 7U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [7U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [7U]
                                                [0U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 8U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [8U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [8U]
                                                [0U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 9U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [9U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [9U]
                                                [0U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xaU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xaU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xaU]
                                                [0U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xbU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xbU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xbU]
                                                [0U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xcU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xcU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xcU]
                                                [0U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xdU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xdU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xdU]
                                                [0U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xeU;
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 1U;
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0 = 0U;
        if ((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][1U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0U]
                                                [1U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][1U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [1U]
                                                [1U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][1U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [2U]
                                                [1U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][1U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [3U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [3U]
                                                [1U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][1U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [4U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [4U]
                                                [1U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 5U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][1U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [5U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [5U]
                                                [1U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 6U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][1U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [6U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [6U]
                                                [1U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 7U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][1U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [7U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [7U]
                                                [1U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 8U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][1U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [8U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [8U]
                                                [1U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 9U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][1U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [9U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [9U]
                                                [1U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xaU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][1U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xaU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xaU]
                                                [1U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xbU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][1U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xbU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xbU]
                                                [1U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xcU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][1U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xcU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xcU]
                                                [1U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xdU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][1U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xdU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xdU]
                                                [1U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xeU;
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 2U;
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0 = 0U;
        if ((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][1U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][2U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0U]
                                                [2U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][2U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [1U]
                                                [2U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][2U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [2U]
                                                [2U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][2U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [3U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [3U]
                                                [2U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][2U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [4U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [4U]
                                                [2U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 5U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][2U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [5U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [5U]
                                                [2U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 6U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][2U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [6U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [6U]
                                                [2U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 7U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][2U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [7U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [7U]
                                                [2U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 8U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][2U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [8U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [8U]
                                                [2U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 9U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][2U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [9U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [9U]
                                                [2U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xaU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][2U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xaU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xaU]
                                                [2U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xbU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][2U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xbU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xbU]
                                                [2U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xcU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][2U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xcU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xcU]
                                                [2U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xdU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][2U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xdU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xdU]
                                                [2U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xeU;
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 3U;
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0 = 0U;
        if ((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][2U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][3U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0U]
                                                [3U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][3U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [1U]
                                                [3U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][3U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [2U]
                                                [3U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][3U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [3U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [3U]
                                                [3U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][3U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [4U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [4U]
                                                [3U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 5U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][3U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [5U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [5U]
                                                [3U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 6U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][3U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [6U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [6U]
                                                [3U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 7U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][3U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [7U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [7U]
                                                [3U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 8U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][3U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [8U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [8U]
                                                [3U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 9U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][3U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [9U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [9U]
                                                [3U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xaU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][3U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xaU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xaU]
                                                [3U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xbU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][3U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xbU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xbU]
                                                [3U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xcU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][3U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xcU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xcU]
                                                [3U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xdU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][3U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xdU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xdU]
                                                [3U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xeU;
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 4U;
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0 = 0U;
        if ((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][3U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][4U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [4U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0U]
                                                [4U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][4U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [4U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [1U]
                                                [4U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][4U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [4U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [2U]
                                                [4U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][4U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [4U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [3U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [3U]
                                                [4U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][4U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [4U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [4U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [4U]
                                                [4U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 5U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][4U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [4U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [5U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [5U]
                                                [4U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 6U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][4U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [4U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [6U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [6U]
                                                [4U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 7U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][4U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [4U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [7U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [7U]
                                                [4U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 8U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][4U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [4U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [8U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [8U]
                                                [4U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 9U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][4U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [4U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [9U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [9U]
                                                [4U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xaU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][4U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [4U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xaU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xaU]
                                                [4U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xbU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][4U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [4U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xbU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xbU]
                                                [4U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xcU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][4U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [4U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xcU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xcU]
                                                [4U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xdU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][4U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [4U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xdU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xdU]
                                                [4U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xeU;
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 5U;
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0 = 0U;
        if ((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][4U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][5U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [5U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0U]
                                                [5U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][5U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [5U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [1U]
                                                [5U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][5U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [5U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [2U]
                                                [5U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][5U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [5U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [3U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [3U]
                                                [5U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][5U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [5U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [4U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [4U]
                                                [5U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 5U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][5U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [5U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [5U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [5U]
                                                [5U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 6U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][5U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [5U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [6U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [6U]
                                                [5U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 7U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][5U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [5U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [7U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [7U]
                                                [5U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 8U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][5U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [5U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [8U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [8U]
                                                [5U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 9U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][5U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [5U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [9U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [9U]
                                                [5U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xaU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][5U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [5U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xaU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xaU]
                                                [5U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xbU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][5U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [5U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xbU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xbU]
                                                [5U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xcU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][5U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [5U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xcU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xcU]
                                                [5U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xdU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][5U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [5U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xdU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xdU]
                                                [5U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xeU;
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 6U;
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0 = 0U;
        if ((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][5U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][6U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [6U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0U]
                                                [6U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][6U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [6U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [1U]
                                                [6U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][6U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [6U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [2U]
                                                [6U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][6U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [6U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [3U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [3U]
                                                [6U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][6U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [6U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [4U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [4U]
                                                [6U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 5U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][6U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [6U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [5U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [5U]
                                                [6U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 6U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][6U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [6U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [6U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [6U]
                                                [6U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 7U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][6U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [6U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [7U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [7U]
                                                [6U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 8U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][6U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [6U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [8U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [8U]
                                                [6U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 9U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][6U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [6U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [9U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [9U]
                                                [6U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xaU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][6U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [6U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xaU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xaU]
                                                [6U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xbU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][6U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [6U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xbU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xbU]
                                                [6U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xcU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][6U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [6U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xcU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xcU]
                                                [6U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xdU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][6U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [6U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xdU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xdU]
                                                [6U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xeU;
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 7U;
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0 = 0U;
        if ((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][6U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][7U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [7U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0U]
                                                [7U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][7U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [7U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [1U]
                                                [7U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][7U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [7U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [2U]
                                                [7U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][7U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [7U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [3U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [3U]
                                                [7U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][7U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [7U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [4U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [4U]
                                                [7U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 5U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][7U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [7U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [5U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [5U]
                                                [7U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 6U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][7U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [7U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [6U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [6U]
                                                [7U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 7U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][7U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [7U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [7U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [7U]
                                                [7U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 8U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][7U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [7U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [8U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [8U]
                                                [7U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 9U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][7U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [7U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [9U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [9U]
                                                [7U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xaU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][7U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [7U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xaU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xaU]
                                                [7U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xbU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][7U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [7U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xbU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xbU]
                                                [7U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xcU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][7U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [7U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xcU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xcU]
                                                [7U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xdU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][7U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [7U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xdU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xdU]
                                                [7U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xeU;
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 8U;
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0 = 0U;
        if ((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][7U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][8U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [8U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0U]
                                                [8U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][8U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [8U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [1U]
                                                [8U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][8U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [8U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [2U]
                                                [8U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][8U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [8U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [3U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [3U]
                                                [8U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][8U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [8U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [4U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [4U]
                                                [8U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 5U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][8U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [8U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [5U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [5U]
                                                [8U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 6U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][8U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [8U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [6U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [6U]
                                                [8U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 7U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][8U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [8U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [7U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [7U]
                                                [8U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 8U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][8U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [8U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [8U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [8U]
                                                [8U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 9U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][8U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [8U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [9U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [9U]
                                                [8U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xaU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][8U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [8U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xaU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xaU]
                                                [8U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xbU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][8U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [8U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xbU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xbU]
                                                [8U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xcU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][8U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [8U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xcU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xcU]
                                                [8U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xdU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][8U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [8U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xdU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xdU]
                                                [8U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xeU;
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 9U;
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0 = 0U;
        if ((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][8U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][9U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [9U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0U]
                                                [9U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][9U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [9U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [1U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [1U]
                                                [9U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][9U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [9U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [2U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [2U]
                                                [9U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][9U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [9U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [3U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [3U]
                                                [9U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][9U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [9U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [4U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [4U]
                                                [9U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 5U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][9U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [9U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [5U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [5U]
                                                [9U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 6U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][9U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [9U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [6U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [6U]
                                                [9U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 7U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][9U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [9U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [7U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [7U]
                                                [9U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 8U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][9U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [9U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [8U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [8U]
                                                [9U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 9U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][9U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [9U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [9U]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [9U]
                                                [9U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xaU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][9U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [9U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xaU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xaU]
                                                [9U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xbU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][9U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [9U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xbU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xbU]
                                                [9U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xcU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][9U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [9U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xcU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xcU]
                                                [9U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xdU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][9U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [9U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__A
                                                    [
                                                    ((0xdU 
                                                      >= 
                                                      (0xfU 
                                                       & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                      ? 
                                                     (0xfU 
                                                      & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                      : 0U)]
                                                    [0xdU]), 
                                  VL_EXTENDS_II(32,8, 
                                                vlSelf->top_ws_tb__DOT__B
                                                [0xdU]
                                                [9U])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xeU;
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 0xaU;
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0 = 0U;
        if ((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][9U] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xaU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xaU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0U]
                                                  [0xaU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xaU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xaU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [1U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [1U]
                                                  [0xaU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xaU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xaU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [2U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [2U]
                                                  [0xaU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xaU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xaU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [3U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [3U]
                                                  [0xaU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xaU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xaU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [4U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [4U]
                                                  [0xaU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 5U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xaU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xaU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [5U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [5U]
                                                  [0xaU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 6U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xaU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xaU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [6U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [6U]
                                                  [0xaU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 7U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xaU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xaU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [7U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [7U]
                                                  [0xaU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 8U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xaU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xaU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [8U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [8U]
                                                  [0xaU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 9U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xaU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xaU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [9U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [9U]
                                                  [0xaU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xaU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xaU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xaU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0xaU]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0xaU]
                                                  [0xaU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xbU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xaU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xaU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0xbU]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0xbU]
                                                  [0xaU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xcU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xaU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xaU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0xcU]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0xcU]
                                                  [0xaU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xdU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xaU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xaU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0xdU]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0xdU]
                                                  [0xaU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xeU;
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 0xbU;
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0 = 0U;
        if ((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xaU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xbU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xbU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0U]
                                                  [0xbU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xbU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xbU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [1U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [1U]
                                                  [0xbU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xbU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xbU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [2U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [2U]
                                                  [0xbU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xbU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xbU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [3U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [3U]
                                                  [0xbU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xbU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xbU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [4U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [4U]
                                                  [0xbU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 5U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xbU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xbU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [5U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [5U]
                                                  [0xbU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 6U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xbU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xbU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [6U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [6U]
                                                  [0xbU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 7U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xbU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xbU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [7U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [7U]
                                                  [0xbU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 8U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xbU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xbU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [8U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [8U]
                                                  [0xbU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 9U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xbU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xbU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [9U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [9U]
                                                  [0xbU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xaU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xbU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xbU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0xaU]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0xaU]
                                                  [0xbU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xbU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xbU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xbU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0xbU]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0xbU]
                                                  [0xbU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xcU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xbU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xbU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0xcU]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0xcU]
                                                  [0xbU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xdU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xbU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xbU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0xdU]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0xdU]
                                                  [0xbU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xeU;
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 0xcU;
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0 = 0U;
        if ((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xbU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xcU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xcU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0U]
                                                  [0xcU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xcU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xcU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [1U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [1U]
                                                  [0xcU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xcU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xcU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [2U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [2U]
                                                  [0xcU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xcU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xcU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [3U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [3U]
                                                  [0xcU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xcU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xcU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [4U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [4U]
                                                  [0xcU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 5U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xcU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xcU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [5U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [5U]
                                                  [0xcU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 6U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xcU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xcU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [6U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [6U]
                                                  [0xcU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 7U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xcU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xcU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [7U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [7U]
                                                  [0xcU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 8U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xcU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xcU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [8U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [8U]
                                                  [0xcU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 9U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xcU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xcU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [9U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [9U]
                                                  [0xcU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xaU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xcU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xcU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0xaU]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0xaU]
                                                  [0xcU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xbU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xcU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xcU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0xbU]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0xbU]
                                                  [0xcU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xcU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xcU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xcU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0xcU]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0xcU]
                                                  [0xcU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xdU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xcU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xcU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0xdU]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0xdU]
                                                  [0xcU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xeU;
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 0xdU;
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0 = 0U;
        if ((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xcU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xdU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__0;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xdU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0U]
                                                  [0xdU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 1U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xdU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xdU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [1U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [1U]
                                                  [0xdU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 2U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xdU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xdU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [2U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [2U]
                                                  [0xdU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 3U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xdU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xdU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [3U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [3U]
                                                  [0xdU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 4U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xdU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xdU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [4U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [4U]
                                                  [0xdU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 5U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xdU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xdU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [5U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [5U]
                                                  [0xdU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 6U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xdU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xdU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [6U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [6U]
                                                  [0xdU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 7U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xdU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xdU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [7U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [7U]
                                                  [0xdU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 8U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xdU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xdU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [8U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [8U]
                                                  [0xdU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 9U;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xdU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xdU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [9U]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [9U]
                                                  [0xdU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xaU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xdU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xdU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0xaU]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0xaU]
                                                  [0xdU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xbU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xdU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xdU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0xbU]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0xbU]
                                                  [0xdU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xcU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xdU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xdU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0xcU]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0xcU]
                                                  [0xdU])));
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xdU;
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xdU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1 
            = (vlSelf->top_ws_tb__DOT__C_expected[(
                                                   (0xdU 
                                                    >= 
                                                    (0xfU 
                                                     & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                    : 0U)]
               [0xdU] + VL_MULS_III(32, VL_EXTENDS_II(32,8, 
                                                      vlSelf->top_ws_tb__DOT__A
                                                      [
                                                      ((0xdU 
                                                        >= 
                                                        (0xfU 
                                                         & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r))
                                                        ? 
                                                       (0xfU 
                                                        & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)
                                                        : 0U)]
                                                      [0xdU]), 
                                    VL_EXTENDS_II(32,8, 
                                                  vlSelf->top_ws_tb__DOT__B
                                                  [0xdU]
                                                  [0xdU])));
        if (VL_LIKELY((0xdU >= (0xfU & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)))) {
            vlSelf->top_ws_tb__DOT__C_expected[(0xfU 
                                                & vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r)][0xdU] 
                = vlSelf->top_ws_tb__DOT____Vlvbound_h5dda3790__1;
        }
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = 0xeU;
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = 0xeU;
        vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r);
    }
    VL_WRITEF_NX("[%0t] Loading weights (matrix B):\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0U][0U];
    vlSelf->top_ws_tb__DOT__weights_in[0U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[0U]) 
                                              | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0U][1U];
    vlSelf->top_ws_tb__DOT__weights_in[0U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[0U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0U][2U];
    vlSelf->top_ws_tb__DOT__weights_in[0U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[0U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0U][3U];
    vlSelf->top_ws_tb__DOT__weights_in[0U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[0U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0U][4U];
    vlSelf->top_ws_tb__DOT__weights_in[1U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[1U]) 
                                              | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 5U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0U][5U];
    vlSelf->top_ws_tb__DOT__weights_in[1U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[1U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 6U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0U][6U];
    vlSelf->top_ws_tb__DOT__weights_in[1U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[1U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 7U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0U][7U];
    vlSelf->top_ws_tb__DOT__weights_in[1U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[1U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 8U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0U][8U];
    vlSelf->top_ws_tb__DOT__weights_in[2U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[2U]) 
                                              | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 9U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0U][9U];
    vlSelf->top_ws_tb__DOT__weights_in[2U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[2U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xaU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0U][0xaU];
    vlSelf->top_ws_tb__DOT__weights_in[2U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[2U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xbU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0U][0xbU];
    vlSelf->top_ws_tb__DOT__weights_in[2U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[2U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xcU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0U][0xcU];
    vlSelf->top_ws_tb__DOT__weights_in[3U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[3U]) 
                                              | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xdU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0U][0xdU];
    vlSelf->top_ws_tb__DOT__weights_in[3U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[3U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xeU;
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 1U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [1U][0U];
    vlSelf->top_ws_tb__DOT__weights_in[3U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[3U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [1U][1U];
    vlSelf->top_ws_tb__DOT__weights_in[3U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[3U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [1U][2U];
    vlSelf->top_ws_tb__DOT__weights_in[4U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[4U]) 
                                              | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [1U][3U];
    vlSelf->top_ws_tb__DOT__weights_in[4U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[4U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [1U][4U];
    vlSelf->top_ws_tb__DOT__weights_in[4U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[4U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 5U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [1U][5U];
    vlSelf->top_ws_tb__DOT__weights_in[4U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[4U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 6U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [1U][6U];
    vlSelf->top_ws_tb__DOT__weights_in[5U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[5U]) 
                                              | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 7U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [1U][7U];
    vlSelf->top_ws_tb__DOT__weights_in[5U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[5U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 8U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [1U][8U];
    vlSelf->top_ws_tb__DOT__weights_in[5U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[5U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 9U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [1U][9U];
    vlSelf->top_ws_tb__DOT__weights_in[5U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[5U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xaU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [1U][0xaU];
    vlSelf->top_ws_tb__DOT__weights_in[6U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[6U]) 
                                              | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xbU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [1U][0xbU];
    vlSelf->top_ws_tb__DOT__weights_in[6U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[6U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xcU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [1U][0xcU];
    vlSelf->top_ws_tb__DOT__weights_in[6U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[6U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xdU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [1U][0xdU];
    vlSelf->top_ws_tb__DOT__weights_in[6U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[6U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xeU;
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 2U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [2U][0U];
    vlSelf->top_ws_tb__DOT__weights_in[7U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[7U]) 
                                              | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [2U][1U];
    vlSelf->top_ws_tb__DOT__weights_in[7U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[7U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [2U][2U];
    vlSelf->top_ws_tb__DOT__weights_in[7U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[7U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [2U][3U];
    vlSelf->top_ws_tb__DOT__weights_in[7U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[7U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [2U][4U];
    vlSelf->top_ws_tb__DOT__weights_in[8U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[8U]) 
                                              | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 5U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [2U][5U];
    vlSelf->top_ws_tb__DOT__weights_in[8U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[8U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 6U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [2U][6U];
    vlSelf->top_ws_tb__DOT__weights_in[8U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[8U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 7U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [2U][7U];
    vlSelf->top_ws_tb__DOT__weights_in[8U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[8U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 8U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [2U][8U];
    vlSelf->top_ws_tb__DOT__weights_in[9U] = ((0xffffff00U 
                                               & vlSelf->top_ws_tb__DOT__weights_in[9U]) 
                                              | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 9U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [2U][9U];
    vlSelf->top_ws_tb__DOT__weights_in[9U] = ((0xffff00ffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[9U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xaU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [2U][0xaU];
    vlSelf->top_ws_tb__DOT__weights_in[9U] = ((0xff00ffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[9U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xbU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [2U][0xbU];
    vlSelf->top_ws_tb__DOT__weights_in[9U] = ((0xffffffU 
                                               & vlSelf->top_ws_tb__DOT__weights_in[9U]) 
                                              | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                 << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xcU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [2U][0xcU];
    vlSelf->top_ws_tb__DOT__weights_in[0xaU] = ((0xffffff00U 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xaU]) 
                                                | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xdU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [2U][0xdU];
    vlSelf->top_ws_tb__DOT__weights_in[0xaU] = ((0xffff00ffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xaU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xeU;
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 3U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [3U][0U];
    vlSelf->top_ws_tb__DOT__weights_in[0xaU] = ((0xff00ffffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xaU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [3U][1U];
    vlSelf->top_ws_tb__DOT__weights_in[0xaU] = ((0xffffffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xaU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [3U][2U];
    vlSelf->top_ws_tb__DOT__weights_in[0xbU] = ((0xffffff00U 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xbU]) 
                                                | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [3U][3U];
    vlSelf->top_ws_tb__DOT__weights_in[0xbU] = ((0xffff00ffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xbU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [3U][4U];
    vlSelf->top_ws_tb__DOT__weights_in[0xbU] = ((0xff00ffffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xbU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 5U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [3U][5U];
    vlSelf->top_ws_tb__DOT__weights_in[0xbU] = ((0xffffffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xbU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 6U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [3U][6U];
    vlSelf->top_ws_tb__DOT__weights_in[0xcU] = ((0xffffff00U 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xcU]) 
                                                | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 7U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [3U][7U];
    vlSelf->top_ws_tb__DOT__weights_in[0xcU] = ((0xffff00ffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xcU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 8U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [3U][8U];
    vlSelf->top_ws_tb__DOT__weights_in[0xcU] = ((0xff00ffffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xcU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 9U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [3U][9U];
    vlSelf->top_ws_tb__DOT__weights_in[0xcU] = ((0xffffffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xcU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xaU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [3U][0xaU];
    vlSelf->top_ws_tb__DOT__weights_in[0xdU] = ((0xffffff00U 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xdU]) 
                                                | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xbU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [3U][0xbU];
    vlSelf->top_ws_tb__DOT__weights_in[0xdU] = ((0xffff00ffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xdU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xcU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [3U][0xcU];
    vlSelf->top_ws_tb__DOT__weights_in[0xdU] = ((0xff00ffffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xdU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xdU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [3U][0xdU];
    vlSelf->top_ws_tb__DOT__weights_in[0xdU] = ((0xffffffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xdU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xeU;
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 4U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [4U][0U];
    vlSelf->top_ws_tb__DOT__weights_in[0xeU] = ((0xffffff00U 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xeU]) 
                                                | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [4U][1U];
    vlSelf->top_ws_tb__DOT__weights_in[0xeU] = ((0xffff00ffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xeU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [4U][2U];
    vlSelf->top_ws_tb__DOT__weights_in[0xeU] = ((0xff00ffffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xeU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [4U][3U];
    vlSelf->top_ws_tb__DOT__weights_in[0xeU] = ((0xffffffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xeU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [4U][4U];
    vlSelf->top_ws_tb__DOT__weights_in[0xfU] = ((0xffffff00U 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xfU]) 
                                                | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 5U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [4U][5U];
    vlSelf->top_ws_tb__DOT__weights_in[0xfU] = ((0xffff00ffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xfU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 6U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [4U][6U];
    vlSelf->top_ws_tb__DOT__weights_in[0xfU] = ((0xff00ffffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xfU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 7U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [4U][7U];
    vlSelf->top_ws_tb__DOT__weights_in[0xfU] = ((0xffffffU 
                                                 & vlSelf->top_ws_tb__DOT__weights_in[0xfU]) 
                                                | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                   << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 8U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [4U][8U];
    vlSelf->top_ws_tb__DOT__weights_in[0x10U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x10U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 9U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [4U][9U];
    vlSelf->top_ws_tb__DOT__weights_in[0x10U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x10U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xaU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [4U][0xaU];
    vlSelf->top_ws_tb__DOT__weights_in[0x10U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x10U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xbU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [4U][0xbU];
    vlSelf->top_ws_tb__DOT__weights_in[0x10U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x10U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xcU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [4U][0xcU];
    vlSelf->top_ws_tb__DOT__weights_in[0x11U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x11U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xdU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [4U][0xdU];
    vlSelf->top_ws_tb__DOT__weights_in[0x11U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x11U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xeU;
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 5U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [5U][0U];
    vlSelf->top_ws_tb__DOT__weights_in[0x11U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x11U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [5U][1U];
    vlSelf->top_ws_tb__DOT__weights_in[0x11U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x11U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [5U][2U];
    vlSelf->top_ws_tb__DOT__weights_in[0x12U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x12U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [5U][3U];
    vlSelf->top_ws_tb__DOT__weights_in[0x12U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x12U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [5U][4U];
    vlSelf->top_ws_tb__DOT__weights_in[0x12U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x12U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 5U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [5U][5U];
    vlSelf->top_ws_tb__DOT__weights_in[0x12U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x12U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 6U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [5U][6U];
    vlSelf->top_ws_tb__DOT__weights_in[0x13U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x13U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 7U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [5U][7U];
    vlSelf->top_ws_tb__DOT__weights_in[0x13U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x13U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 8U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [5U][8U];
    vlSelf->top_ws_tb__DOT__weights_in[0x13U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x13U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 9U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [5U][9U];
    vlSelf->top_ws_tb__DOT__weights_in[0x13U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x13U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xaU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [5U][0xaU];
    vlSelf->top_ws_tb__DOT__weights_in[0x14U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x14U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xbU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [5U][0xbU];
    vlSelf->top_ws_tb__DOT__weights_in[0x14U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x14U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xcU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [5U][0xcU];
    vlSelf->top_ws_tb__DOT__weights_in[0x14U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x14U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xdU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [5U][0xdU];
    vlSelf->top_ws_tb__DOT__weights_in[0x14U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x14U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xeU;
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 6U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [6U][0U];
    vlSelf->top_ws_tb__DOT__weights_in[0x15U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x15U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [6U][1U];
    vlSelf->top_ws_tb__DOT__weights_in[0x15U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x15U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [6U][2U];
    vlSelf->top_ws_tb__DOT__weights_in[0x15U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x15U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [6U][3U];
    vlSelf->top_ws_tb__DOT__weights_in[0x15U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x15U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [6U][4U];
    vlSelf->top_ws_tb__DOT__weights_in[0x16U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x16U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 5U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [6U][5U];
    vlSelf->top_ws_tb__DOT__weights_in[0x16U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x16U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 6U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [6U][6U];
    vlSelf->top_ws_tb__DOT__weights_in[0x16U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x16U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 7U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [6U][7U];
    vlSelf->top_ws_tb__DOT__weights_in[0x16U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x16U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 8U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [6U][8U];
    vlSelf->top_ws_tb__DOT__weights_in[0x17U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x17U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 9U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [6U][9U];
    vlSelf->top_ws_tb__DOT__weights_in[0x17U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x17U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xaU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [6U][0xaU];
    vlSelf->top_ws_tb__DOT__weights_in[0x17U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x17U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xbU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [6U][0xbU];
    vlSelf->top_ws_tb__DOT__weights_in[0x17U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x17U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xcU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [6U][0xcU];
    vlSelf->top_ws_tb__DOT__weights_in[0x18U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x18U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xdU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [6U][0xdU];
    vlSelf->top_ws_tb__DOT__weights_in[0x18U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x18U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xeU;
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 7U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [7U][0U];
    vlSelf->top_ws_tb__DOT__weights_in[0x18U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x18U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [7U][1U];
    vlSelf->top_ws_tb__DOT__weights_in[0x18U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x18U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [7U][2U];
    vlSelf->top_ws_tb__DOT__weights_in[0x19U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x19U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [7U][3U];
    vlSelf->top_ws_tb__DOT__weights_in[0x19U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x19U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [7U][4U];
    vlSelf->top_ws_tb__DOT__weights_in[0x19U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x19U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 5U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [7U][5U];
    vlSelf->top_ws_tb__DOT__weights_in[0x19U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x19U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 6U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [7U][6U];
    vlSelf->top_ws_tb__DOT__weights_in[0x1aU] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1aU]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 7U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [7U][7U];
    vlSelf->top_ws_tb__DOT__weights_in[0x1aU] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1aU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 8U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [7U][8U];
    vlSelf->top_ws_tb__DOT__weights_in[0x1aU] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1aU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 9U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [7U][9U];
    vlSelf->top_ws_tb__DOT__weights_in[0x1aU] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1aU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xaU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [7U][0xaU];
    vlSelf->top_ws_tb__DOT__weights_in[0x1bU] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1bU]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xbU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [7U][0xbU];
    vlSelf->top_ws_tb__DOT__weights_in[0x1bU] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1bU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xcU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [7U][0xcU];
    vlSelf->top_ws_tb__DOT__weights_in[0x1bU] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1bU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xdU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [7U][0xdU];
    vlSelf->top_ws_tb__DOT__weights_in[0x1bU] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1bU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xeU;
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 8U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [8U][0U];
    vlSelf->top_ws_tb__DOT__weights_in[0x1cU] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1cU]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [8U][1U];
    vlSelf->top_ws_tb__DOT__weights_in[0x1cU] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1cU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [8U][2U];
    vlSelf->top_ws_tb__DOT__weights_in[0x1cU] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1cU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [8U][3U];
    vlSelf->top_ws_tb__DOT__weights_in[0x1cU] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1cU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [8U][4U];
    vlSelf->top_ws_tb__DOT__weights_in[0x1dU] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1dU]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 5U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [8U][5U];
    vlSelf->top_ws_tb__DOT__weights_in[0x1dU] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1dU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 6U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [8U][6U];
    vlSelf->top_ws_tb__DOT__weights_in[0x1dU] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1dU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 7U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [8U][7U];
    vlSelf->top_ws_tb__DOT__weights_in[0x1dU] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1dU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 8U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [8U][8U];
    vlSelf->top_ws_tb__DOT__weights_in[0x1eU] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1eU]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 9U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [8U][9U];
    vlSelf->top_ws_tb__DOT__weights_in[0x1eU] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1eU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xaU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [8U][0xaU];
    vlSelf->top_ws_tb__DOT__weights_in[0x1eU] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1eU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xbU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [8U][0xbU];
    vlSelf->top_ws_tb__DOT__weights_in[0x1eU] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1eU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xcU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [8U][0xcU];
    vlSelf->top_ws_tb__DOT__weights_in[0x1fU] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1fU]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xdU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [8U][0xdU];
    vlSelf->top_ws_tb__DOT__weights_in[0x1fU] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1fU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xeU;
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 9U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [9U][0U];
    vlSelf->top_ws_tb__DOT__weights_in[0x1fU] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1fU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [9U][1U];
    vlSelf->top_ws_tb__DOT__weights_in[0x1fU] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x1fU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [9U][2U];
    vlSelf->top_ws_tb__DOT__weights_in[0x20U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x20U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [9U][3U];
    vlSelf->top_ws_tb__DOT__weights_in[0x20U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x20U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [9U][4U];
    vlSelf->top_ws_tb__DOT__weights_in[0x20U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x20U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 5U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [9U][5U];
    vlSelf->top_ws_tb__DOT__weights_in[0x20U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x20U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 6U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [9U][6U];
    vlSelf->top_ws_tb__DOT__weights_in[0x21U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x21U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 7U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [9U][7U];
    vlSelf->top_ws_tb__DOT__weights_in[0x21U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x21U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 8U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [9U][8U];
    vlSelf->top_ws_tb__DOT__weights_in[0x21U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x21U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 9U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [9U][9U];
    vlSelf->top_ws_tb__DOT__weights_in[0x21U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x21U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xaU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [9U][0xaU];
    vlSelf->top_ws_tb__DOT__weights_in[0x22U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x22U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xbU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [9U][0xbU];
    vlSelf->top_ws_tb__DOT__weights_in[0x22U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x22U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xcU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [9U][0xcU];
    vlSelf->top_ws_tb__DOT__weights_in[0x22U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x22U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xdU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [9U][0xdU];
    vlSelf->top_ws_tb__DOT__weights_in[0x22U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x22U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xeU;
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 0xaU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xaU][0U];
    vlSelf->top_ws_tb__DOT__weights_in[0x23U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x23U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xaU][1U];
    vlSelf->top_ws_tb__DOT__weights_in[0x23U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x23U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xaU][2U];
    vlSelf->top_ws_tb__DOT__weights_in[0x23U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x23U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xaU][3U];
    vlSelf->top_ws_tb__DOT__weights_in[0x23U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x23U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xaU][4U];
    vlSelf->top_ws_tb__DOT__weights_in[0x24U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x24U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 5U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xaU][5U];
    vlSelf->top_ws_tb__DOT__weights_in[0x24U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x24U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 6U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xaU][6U];
    vlSelf->top_ws_tb__DOT__weights_in[0x24U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x24U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 7U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xaU][7U];
    vlSelf->top_ws_tb__DOT__weights_in[0x24U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x24U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 8U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xaU][8U];
    vlSelf->top_ws_tb__DOT__weights_in[0x25U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x25U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 9U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xaU][9U];
    vlSelf->top_ws_tb__DOT__weights_in[0x25U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x25U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xaU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xaU][0xaU];
    vlSelf->top_ws_tb__DOT__weights_in[0x25U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x25U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xbU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xaU][0xbU];
    vlSelf->top_ws_tb__DOT__weights_in[0x25U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x25U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xcU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xaU][0xcU];
    vlSelf->top_ws_tb__DOT__weights_in[0x26U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x26U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xdU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xaU][0xdU];
    vlSelf->top_ws_tb__DOT__weights_in[0x26U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x26U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xeU;
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 0xbU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xbU][0U];
    vlSelf->top_ws_tb__DOT__weights_in[0x26U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x26U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xbU][1U];
    vlSelf->top_ws_tb__DOT__weights_in[0x26U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x26U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xbU][2U];
    vlSelf->top_ws_tb__DOT__weights_in[0x27U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x27U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xbU][3U];
    vlSelf->top_ws_tb__DOT__weights_in[0x27U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x27U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xbU][4U];
    vlSelf->top_ws_tb__DOT__weights_in[0x27U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x27U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 5U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xbU][5U];
    vlSelf->top_ws_tb__DOT__weights_in[0x27U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x27U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 6U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xbU][6U];
    vlSelf->top_ws_tb__DOT__weights_in[0x28U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x28U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 7U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xbU][7U];
    vlSelf->top_ws_tb__DOT__weights_in[0x28U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x28U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 8U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xbU][8U];
    vlSelf->top_ws_tb__DOT__weights_in[0x28U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x28U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 9U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xbU][9U];
    vlSelf->top_ws_tb__DOT__weights_in[0x28U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x28U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xaU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xbU][0xaU];
    vlSelf->top_ws_tb__DOT__weights_in[0x29U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x29U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xbU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xbU][0xbU];
    vlSelf->top_ws_tb__DOT__weights_in[0x29U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x29U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xcU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xbU][0xcU];
    vlSelf->top_ws_tb__DOT__weights_in[0x29U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x29U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xdU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xbU][0xdU];
    vlSelf->top_ws_tb__DOT__weights_in[0x29U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x29U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xeU;
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 0xcU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xcU][0U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2aU] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2aU]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xcU][1U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2aU] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2aU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xcU][2U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2aU] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2aU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xcU][3U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2aU] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2aU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xcU][4U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2bU] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2bU]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 5U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xcU][5U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2bU] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2bU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 6U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xcU][6U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2bU] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2bU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 7U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xcU][7U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2bU] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2bU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 8U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xcU][8U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2cU] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2cU]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 9U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xcU][9U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2cU] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2cU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xaU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xcU][0xaU];
    vlSelf->top_ws_tb__DOT__weights_in[0x2cU] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2cU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xbU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xcU][0xbU];
    vlSelf->top_ws_tb__DOT__weights_in[0x2cU] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2cU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xcU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xcU][0xcU];
    vlSelf->top_ws_tb__DOT__weights_in[0x2dU] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2dU]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xdU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xcU][0xdU];
    vlSelf->top_ws_tb__DOT__weights_in[0x2dU] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2dU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xeU;
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 0xdU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xdU][0U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2dU] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2dU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 1U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xdU][1U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2dU] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2dU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 2U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xdU][2U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2eU] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2eU]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 3U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xdU][3U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2eU] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2eU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 4U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xdU][4U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2eU] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2eU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 5U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xdU][5U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2eU] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2eU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 6U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xdU][6U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2fU] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2fU]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 7U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xdU][7U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2fU] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2fU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 8U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xdU][8U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2fU] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2fU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 9U;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xdU][9U];
    vlSelf->top_ws_tb__DOT__weights_in[0x2fU] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x2fU]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xaU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xdU][0xaU];
    vlSelf->top_ws_tb__DOT__weights_in[0x30U] = ((0xffffff00U 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x30U]) 
                                                 | (IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xbU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xdU][0xbU];
    vlSelf->top_ws_tb__DOT__weights_in[0x30U] = ((0xffff00ffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x30U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 8U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xcU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xdU][0xcU];
    vlSelf->top_ws_tb__DOT__weights_in[0x30U] = ((0xff00ffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x30U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x10U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xdU;
    top_ws_tb__DOT____Vlvbound_h4cce03ad__0 = vlSelf->top_ws_tb__DOT__B
        [0xdU][0xdU];
    vlSelf->top_ws_tb__DOT__weights_in[0x30U] = ((0xffffffU 
                                                  & vlSelf->top_ws_tb__DOT__weights_in[0x30U]) 
                                                 | ((IData)(top_ws_tb__DOT____Vlvbound_h4cce03ad__0) 
                                                    << 0x18U));
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = 0xeU;
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = 0xeU;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top_ws_tb__DOT__load_weight = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       96);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top_ws_tb__DOT__load_weight = 0U;
    VL_WRITEF_NX("[%0t] Weights loaded.\n",0,64,VL_TIME_UNITED_Q(1),
                 -9);
    vlSelf->__Vfork_1__sync.init(2U, nullptr);
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
