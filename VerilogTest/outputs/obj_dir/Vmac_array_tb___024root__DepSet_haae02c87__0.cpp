// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmac_array_tb.h for the primary calling header

#include "Vmac_array_tb__pch.h"
#include "Vmac_array_tb___024root.h"

VlCoroutine Vmac_array_tb___024root___eval_initial__TOP__Vtiming__0(Vmac_array_tb___024root* vlSelf);
VlCoroutine Vmac_array_tb___024root___eval_initial__TOP__Vtiming__1(Vmac_array_tb___024root* vlSelf);

void Vmac_array_tb___024root___eval_initial(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vmac_array_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vmac_array_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__mac_array_tb__DOT__clk__0 
        = vlSelf->mac_array_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__mac_array_tb__DOT__nrst__0 
        = vlSelf->mac_array_tb__DOT__nrst;
}

VL_INLINE_OPT VlCoroutine Vmac_array_tb___024root___eval_initial__TOP__Vtiming__1(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "source/mac_array_tb.sv", 
                                           20);
        vlSelf->mac_array_tb__DOT__clk = (1U & ((IData)(1U) 
                                                + (IData)(vlSelf->mac_array_tb__DOT__clk)));
    }
}

VL_INLINE_OPT void Vmac_array_tb___024root___act_comb__TOP__0(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[0U] 
        = vlSelf->mac_array_tb__DOT__weights[0U][0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[1U] 
        = vlSelf->mac_array_tb__DOT__weights[0U][1U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[2U] 
        = vlSelf->mac_array_tb__DOT__weights[0U][2U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[3U] 
        = vlSelf->mac_array_tb__DOT__weights[0U][3U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[4U] 
        = vlSelf->mac_array_tb__DOT__weights[1U][0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[5U] 
        = vlSelf->mac_array_tb__DOT__weights[1U][1U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[6U] 
        = vlSelf->mac_array_tb__DOT__weights[1U][2U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[7U] 
        = vlSelf->mac_array_tb__DOT__weights[1U][3U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[8U] 
        = vlSelf->mac_array_tb__DOT__weights[2U][0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[9U] 
        = vlSelf->mac_array_tb__DOT__weights[2U][1U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[0xaU] 
        = vlSelf->mac_array_tb__DOT__weights[2U][2U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[0xbU] 
        = vlSelf->mac_array_tb__DOT__weights[2U][3U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[0xcU] 
        = vlSelf->mac_array_tb__DOT__weights[3U][0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[0xdU] 
        = vlSelf->mac_array_tb__DOT__weights[3U][1U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[0xeU] 
        = vlSelf->mac_array_tb__DOT__weights[3U][2U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[0xfU] 
        = vlSelf->mac_array_tb__DOT__weights[3U][3U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[0U] 
        = vlSelf->mac_array_tb__DOT__cin[0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[1U] 
        = vlSelf->mac_array_tb__DOT__cin[1U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[2U] 
        = vlSelf->mac_array_tb__DOT__cin[2U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[3U] 
        = vlSelf->mac_array_tb__DOT__cin[3U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[4U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[5U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [1U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[6U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [2U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[7U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [3U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[8U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [4U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[9U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [5U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[0xaU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [6U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[0xbU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [7U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[0xcU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [8U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[0xdU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [9U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[0xeU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [0xaU];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[0xfU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [0xbU];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[0U] 
        = vlSelf->mac_array_tb__DOT__ain[0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[1U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[2U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [1U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[3U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [2U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[4U] 
        = vlSelf->mac_array_tb__DOT__ain[1U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[5U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [4U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[6U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [5U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[7U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [6U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[8U] 
        = vlSelf->mac_array_tb__DOT__ain[2U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[9U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [8U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[0xaU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [9U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[0xbU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [0xaU];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[0xcU] 
        = vlSelf->mac_array_tb__DOT__ain[3U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[0xdU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [0xcU];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[0xeU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [0xdU];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[0xfU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [0xeU];
    vlSelf->mac_array_tb__DOT__aout[0U] = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [3U];
    vlSelf->mac_array_tb__DOT__aout[1U] = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [7U];
    vlSelf->mac_array_tb__DOT__aout[2U] = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [0xbU];
    vlSelf->mac_array_tb__DOT__aout[3U] = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [0xfU];
}

void Vmac_array_tb___024root___eval_act(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmac_array_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vmac_array_tb___024root___nba_sequent__TOP__0(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->mac_array_tb__DOT__nrst) {
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout 
            = (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                        [0xfU] * (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                           [0xfU] + 
                                           vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                           [0xfU]))));
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout 
            = (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                        [0xeU] * (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                           [0xeU] + 
                                           vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                           [0xeU]))));
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout 
            = (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                        [0xdU] * (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                           [0xdU] + 
                                           vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                           [0xdU]))));
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout 
            = (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                        [0xcU] * (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                           [0xcU] + 
                                           vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                           [0xcU]))));
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout 
            = (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                        [0xbU] * (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                           [0xbU] + 
                                           vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                           [0xbU]))));
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout 
            = (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                        [0xaU] * (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                           [0xaU] + 
                                           vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                           [0xaU]))));
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout 
            = (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                        [9U] * (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                         [9U] + vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                         [9U]))));
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout 
            = (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                        [8U] * (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                         [8U] + vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                         [8U]))));
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout 
            = (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                        [7U] * (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                         [7U] + vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                         [7U]))));
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout 
            = (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                        [6U] * (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                         [6U] + vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                         [6U]))));
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout 
            = (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                        [5U] * (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                         [5U] + vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                         [5U]))));
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout 
            = (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                        [4U] * (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                         [4U] + vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                         [4U]))));
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout 
            = (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                        [3U] * (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                         [3U] + vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                         [3U]))));
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout 
            = (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                        [2U] * (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                         [2U] + vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                         [2U]))));
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout 
            = (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                        [1U] * (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                         [1U] + vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                         [1U]))));
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout 
            = (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                        [0U] * (0xffU & (vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                         [0U] + vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                         [0U]))));
    } else {
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout = 0U;
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout = 0U;
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout = 0U;
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout = 0U;
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout = 0U;
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout = 0U;
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout = 0U;
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout = 0U;
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout = 0U;
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout = 0U;
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout = 0U;
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout = 0U;
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout = 0U;
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout = 0U;
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout = 0U;
        vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout = 0U;
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[0xfU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout;
    vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[0xeU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout;
    vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[0xdU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout;
    vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[0xcU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout;
    vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[0xbU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout;
    vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[0xaU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout;
    vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[9U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout;
    vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[8U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout;
    vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[7U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout;
    vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[6U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout;
    vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[5U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout;
    vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[4U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout;
    vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[3U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout;
    vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[2U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout;
    vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[1U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout;
    vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[0U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout;
    vlSelf->mac_array_tb__DOT__cout[0U] = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [0xcU];
    vlSelf->mac_array_tb__DOT__cout[1U] = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [0xdU];
    vlSelf->mac_array_tb__DOT__cout[2U] = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [0xeU];
    vlSelf->mac_array_tb__DOT__cout[3U] = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [0xfU];
}

VL_INLINE_OPT void Vmac_array_tb___024root___nba_comb__TOP__0(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[0U] 
        = vlSelf->mac_array_tb__DOT__weights[0U][0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[1U] 
        = vlSelf->mac_array_tb__DOT__weights[0U][1U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[2U] 
        = vlSelf->mac_array_tb__DOT__weights[0U][2U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[3U] 
        = vlSelf->mac_array_tb__DOT__weights[0U][3U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[4U] 
        = vlSelf->mac_array_tb__DOT__weights[1U][0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[5U] 
        = vlSelf->mac_array_tb__DOT__weights[1U][1U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[6U] 
        = vlSelf->mac_array_tb__DOT__weights[1U][2U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[7U] 
        = vlSelf->mac_array_tb__DOT__weights[1U][3U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[8U] 
        = vlSelf->mac_array_tb__DOT__weights[2U][0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[9U] 
        = vlSelf->mac_array_tb__DOT__weights[2U][1U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[0xaU] 
        = vlSelf->mac_array_tb__DOT__weights[2U][2U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[0xbU] 
        = vlSelf->mac_array_tb__DOT__weights[2U][3U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[0xcU] 
        = vlSelf->mac_array_tb__DOT__weights[3U][0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[0xdU] 
        = vlSelf->mac_array_tb__DOT__weights[3U][1U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[0xeU] 
        = vlSelf->mac_array_tb__DOT__weights[3U][2U];
    vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[0xfU] 
        = vlSelf->mac_array_tb__DOT__weights[3U][3U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[0U] 
        = vlSelf->mac_array_tb__DOT__ain[0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[1U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[2U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [1U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[3U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [2U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[4U] 
        = vlSelf->mac_array_tb__DOT__ain[1U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[5U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [4U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[6U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [5U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[7U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [6U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[8U] 
        = vlSelf->mac_array_tb__DOT__ain[2U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[9U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [8U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[0xaU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [9U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[0xbU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [0xaU];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[0xcU] 
        = vlSelf->mac_array_tb__DOT__ain[3U];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[0xdU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [0xcU];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[0xeU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [0xdU];
    vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[0xfU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [0xeU];
    vlSelf->mac_array_tb__DOT__aout[0U] = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [3U];
    vlSelf->mac_array_tb__DOT__aout[1U] = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [7U];
    vlSelf->mac_array_tb__DOT__aout[2U] = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [0xbU];
    vlSelf->mac_array_tb__DOT__aout[3U] = vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
        [0xfU];
}

VL_INLINE_OPT void Vmac_array_tb___024root___nba_comb__TOP__1(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[0U] 
        = vlSelf->mac_array_tb__DOT__cin[0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[1U] 
        = vlSelf->mac_array_tb__DOT__cin[1U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[2U] 
        = vlSelf->mac_array_tb__DOT__cin[2U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[3U] 
        = vlSelf->mac_array_tb__DOT__cin[3U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[4U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[5U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [1U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[6U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [2U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[7U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [3U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[8U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [4U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[9U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [5U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[0xaU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [6U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[0xbU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [7U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[0xcU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [8U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[0xdU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [9U];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[0xeU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [0xaU];
    vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[0xfU] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn
        [0xbU];
}

void Vmac_array_tb___024root___eval_nba(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmac_array_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmac_array_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmac_array_tb___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

void Vmac_array_tb___024root___timing_resume(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8888e10d__0.resume("@(posedge mac_array_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vmac_array_tb___024root___timing_commit(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8888e10d__0.commit("@(posedge mac_array_tb.clk)");
    }
}

void Vmac_array_tb___024root___eval_triggers__act(Vmac_array_tb___024root* vlSelf);

bool Vmac_array_tb___024root___eval_phase__act(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmac_array_tb___024root___eval_triggers__act(vlSelf);
    Vmac_array_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vmac_array_tb___024root___timing_resume(vlSelf);
        Vmac_array_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmac_array_tb___024root___eval_phase__nba(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmac_array_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_array_tb___024root___dump_triggers__nba(Vmac_array_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_array_tb___024root___dump_triggers__act(Vmac_array_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmac_array_tb___024root___eval(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmac_array_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("source/mac_array_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vmac_array_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("source/mac_array_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vmac_array_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vmac_array_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmac_array_tb___024root___eval_debug_assertions(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
