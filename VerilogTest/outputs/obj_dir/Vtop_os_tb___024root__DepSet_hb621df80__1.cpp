// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_os_tb.h for the primary calling header

#include "Vtop_os_tb__pch.h"
#include "Vtop_os_tb___024root.h"

void Vtop_os_tb___024root___nba_sequent__TOP__0(Vtop_os_tb___024root* vlSelf);

void Vtop_os_tb___024root___eval_nba(Vtop_os_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_os_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_os_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_os_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
}

void Vtop_os_tb___024root___timing_resume(Vtop_os_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_os_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_os_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h2ab17985__0.resume("@(posedge top_os_tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hcba08fe2__0.resume("@(posedge top_os_tb.out_skew_done)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h589cf841__0.resume("@(posedge top_os_tb.done)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtop_os_tb___024root___timing_commit(Vtop_os_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_os_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_os_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h2ab17985__0.commit("@(posedge top_os_tb.clk)");
    }
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hcba08fe2__0.commit("@(posedge top_os_tb.out_skew_done)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h589cf841__0.commit("@(posedge top_os_tb.done)");
    }
}

void Vtop_os_tb___024root___eval_triggers__act(Vtop_os_tb___024root* vlSelf);
void Vtop_os_tb___024root___eval_act(Vtop_os_tb___024root* vlSelf);

bool Vtop_os_tb___024root___eval_phase__act(Vtop_os_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_os_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_os_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_os_tb___024root___eval_triggers__act(vlSelf);
    Vtop_os_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop_os_tb___024root___timing_resume(vlSelf);
        Vtop_os_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop_os_tb___024root___eval_phase__nba(Vtop_os_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_os_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_os_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_os_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_os_tb___024root___dump_triggers__nba(Vtop_os_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_os_tb___024root___dump_triggers__act(Vtop_os_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_os_tb___024root___eval(Vtop_os_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_os_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_os_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop_os_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("source/top_os_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop_os_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("source/top_os_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop_os_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop_os_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_os_tb___024root___eval_debug_assertions(Vtop_os_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_os_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_os_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
