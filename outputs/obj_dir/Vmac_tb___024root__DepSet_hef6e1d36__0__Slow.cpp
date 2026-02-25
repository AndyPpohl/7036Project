// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmac_tb.h for the primary calling header

#include "Vmac_tb__pch.h"
#include "Vmac_tb___024root.h"

VL_ATTR_COLD void Vmac_tb___024root___eval_static__TOP(Vmac_tb___024root* vlSelf);

VL_ATTR_COLD void Vmac_tb___024root___eval_static(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___eval_static\n"); );
    // Body
    Vmac_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vmac_tb___024root___eval_static__TOP(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->mac_tb__DOT__clk = 0U;
    vlSelf->mac_tb__DOT__reset = 0U;
}

VL_ATTR_COLD void Vmac_tb___024root___eval_final(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmac_tb___024root___eval_settle(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_tb___024root___dump_triggers__act(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge mac_tb.clk or negedge mac_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_tb___024root___dump_triggers__nba(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge mac_tb.clk or negedge mac_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmac_tb___024root___ctor_var_reset(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->mac_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->mac_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->mac_tb__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->mac_tb__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->mac_tb__DOT__cin = VL_RAND_RESET_I(4);
    vlSelf->mac_tb__DOT__cout = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__mac_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mac_tb__DOT__reset__0 = VL_RAND_RESET_I(1);
}
