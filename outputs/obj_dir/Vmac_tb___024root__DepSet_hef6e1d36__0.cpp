// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmac_tb.h for the primary calling header

#include "Vmac_tb__pch.h"
#include "Vmac_tb___024root.h"

VlCoroutine Vmac_tb___024root___eval_initial__TOP__Vtiming__0(Vmac_tb___024root* vlSelf);
VlCoroutine Vmac_tb___024root___eval_initial__TOP__Vtiming__1(Vmac_tb___024root* vlSelf);

void Vmac_tb___024root___eval_initial(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___eval_initial\n"); );
    // Body
    Vmac_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vmac_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__mac_tb__DOT__clk__0 
        = vlSelf->mac_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__mac_tb__DOT__reset__0 
        = vlSelf->mac_tb__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vmac_tb___024root___eval_initial__TOP__Vtiming__1(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "source/mac_tb.sv", 
                                           14);
        vlSelf->mac_tb__DOT__clk = (1U & (~ (IData)(vlSelf->mac_tb__DOT__clk)));
    }
}

void Vmac_tb___024root___eval_act(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vmac_tb___024root___nba_sequent__TOP__0(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->mac_tb__DOT__cout = ((IData)(vlSelf->mac_tb__DOT__reset)
                                  ? 0U : (0xfU & ((IData)(vlSelf->mac_tb__DOT__cin) 
                                                  * 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->mac_tb__DOT__a) 
                                                      + (IData)(vlSelf->mac_tb__DOT__b))))));
}

void Vmac_tb___024root___eval_nba(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmac_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vmac_tb___024root___timing_resume(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vmac_tb___024root___eval_triggers__act(Vmac_tb___024root* vlSelf);

bool Vmac_tb___024root___eval_phase__act(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmac_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vmac_tb___024root___timing_resume(vlSelf);
        Vmac_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmac_tb___024root___eval_phase__nba(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmac_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_tb___024root___dump_triggers__nba(Vmac_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_tb___024root___dump_triggers__act(Vmac_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmac_tb___024root___eval(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmac_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("source/mac_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vmac_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("source/mac_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vmac_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vmac_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmac_tb___024root___eval_debug_assertions(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
