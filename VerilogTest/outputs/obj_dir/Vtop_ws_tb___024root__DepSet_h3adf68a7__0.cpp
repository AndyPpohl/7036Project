// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_ws_tb.h for the primary calling header

#include "Vtop_ws_tb__pch.h"
#include "Vtop_ws_tb___024root.h"

VL_ATTR_COLD void Vtop_ws_tb___024root___eval_initial__TOP(Vtop_ws_tb___024root* vlSelf);
VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_ws_tb___024root* vlSelf);
VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_ws_tb___024root* vlSelf);

void Vtop_ws_tb___024root___eval_initial(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_initial\n"); );
    // Body
    Vtop_ws_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__top_ws_tb__DOT__clk__0 
        = vlSelf->top_ws_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top_ws_tb__DOT__out_skew_done__0 
        = vlSelf->top_ws_tb__DOT__out_skew_done;
    vlSelf->__Vtrigprevexpr___TOP__top_ws_tb__DOT__done__0 
        = vlSelf->top_ws_tb__DOT__done;
}

VL_INLINE_OPT VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_h5e37bb25__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.done)", 
                                                       "source/top_ws_tb.sv", 
                                                       229);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors = 0U;
    VL_WRITEF_NX("\n[%0t] --- Result Check ---\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][0U] 
                     != vlSelf->top_ws_tb__DOT__C1_expected
                     [0U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C1_expected
                     [0U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][1U] 
                     != vlSelf->top_ws_tb__DOT__C1_expected
                     [0U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C1_expected
                     [0U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][2U] 
                     != vlSelf->top_ws_tb__DOT__C1_expected
                     [0U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C1_expected
                     [0U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][3U] 
                     != vlSelf->top_ws_tb__DOT__C1_expected
                     [0U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C1_expected
                     [0U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][0U] 
                     != vlSelf->top_ws_tb__DOT__C1_expected
                     [1U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C1_expected
                     [1U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][1U] 
                     != vlSelf->top_ws_tb__DOT__C1_expected
                     [1U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C1_expected
                     [1U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][2U] 
                     != vlSelf->top_ws_tb__DOT__C1_expected
                     [1U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C1_expected
                     [1U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][3U] 
                     != vlSelf->top_ws_tb__DOT__C1_expected
                     [1U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C1_expected
                     [1U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][0U] 
                     != vlSelf->top_ws_tb__DOT__C1_expected
                     [2U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C1_expected
                     [2U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][1U] 
                     != vlSelf->top_ws_tb__DOT__C1_expected
                     [2U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C1_expected
                     [2U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][2U] 
                     != vlSelf->top_ws_tb__DOT__C1_expected
                     [2U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C1_expected
                     [2U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][3U] 
                     != vlSelf->top_ws_tb__DOT__C1_expected
                     [2U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C1_expected
                     [2U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][0U] 
                     != vlSelf->top_ws_tb__DOT__C1_expected
                     [3U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C1_expected
                     [3U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][1U] 
                     != vlSelf->top_ws_tb__DOT__C1_expected
                     [3U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C1_expected
                     [3U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][2U] 
                     != vlSelf->top_ws_tb__DOT__C1_expected
                     [3U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C1_expected
                     [3U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][3U] 
                     != vlSelf->top_ws_tb__DOT__C1_expected
                     [3U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C1_expected
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
    co_await vlSelf->__VtrigSched_h5e37bb25__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.done)", 
                                                       "source/top_ws_tb.sv", 
                                                       232);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       232);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors = 0U;
    VL_WRITEF_NX("\n[%0t] --- Result Check ---\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][0U] 
                     != vlSelf->top_ws_tb__DOT__C2_expected
                     [0U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C2_expected
                     [0U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][1U] 
                     != vlSelf->top_ws_tb__DOT__C2_expected
                     [0U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C2_expected
                     [0U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][2U] 
                     != vlSelf->top_ws_tb__DOT__C2_expected
                     [0U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C2_expected
                     [0U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][3U] 
                     != vlSelf->top_ws_tb__DOT__C2_expected
                     [0U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C2_expected
                     [0U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][0U] 
                     != vlSelf->top_ws_tb__DOT__C2_expected
                     [1U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C2_expected
                     [1U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][1U] 
                     != vlSelf->top_ws_tb__DOT__C2_expected
                     [1U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C2_expected
                     [1U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][2U] 
                     != vlSelf->top_ws_tb__DOT__C2_expected
                     [1U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C2_expected
                     [1U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][3U] 
                     != vlSelf->top_ws_tb__DOT__C2_expected
                     [1U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C2_expected
                     [1U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][0U] 
                     != vlSelf->top_ws_tb__DOT__C2_expected
                     [2U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C2_expected
                     [2U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][1U] 
                     != vlSelf->top_ws_tb__DOT__C2_expected
                     [2U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C2_expected
                     [2U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][2U] 
                     != vlSelf->top_ws_tb__DOT__C2_expected
                     [2U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C2_expected
                     [2U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][3U] 
                     != vlSelf->top_ws_tb__DOT__C2_expected
                     [2U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C2_expected
                     [2U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][0U] 
                     != vlSelf->top_ws_tb__DOT__C2_expected
                     [3U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C2_expected
                     [3U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][1U] 
                     != vlSelf->top_ws_tb__DOT__C2_expected
                     [3U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C2_expected
                     [3U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][2U] 
                     != vlSelf->top_ws_tb__DOT__C2_expected
                     [3U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C2_expected
                     [3U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][3U] 
                     != vlSelf->top_ws_tb__DOT__C2_expected
                     [3U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C2_expected
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
    co_await vlSelf->__VtrigSched_h5e37bb25__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.done)", 
                                                       "source/top_ws_tb.sv", 
                                                       235);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       235);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors = 0U;
    VL_WRITEF_NX("\n[%0t] --- Result Check ---\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][0U] 
                     != vlSelf->top_ws_tb__DOT__C3_expected
                     [0U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C3_expected
                     [0U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][1U] 
                     != vlSelf->top_ws_tb__DOT__C3_expected
                     [0U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C3_expected
                     [0U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][2U] 
                     != vlSelf->top_ws_tb__DOT__C3_expected
                     [0U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C3_expected
                     [0U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][3U] 
                     != vlSelf->top_ws_tb__DOT__C3_expected
                     [0U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C3_expected
                     [0U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][0U] 
                     != vlSelf->top_ws_tb__DOT__C3_expected
                     [1U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C3_expected
                     [1U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][1U] 
                     != vlSelf->top_ws_tb__DOT__C3_expected
                     [1U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C3_expected
                     [1U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][2U] 
                     != vlSelf->top_ws_tb__DOT__C3_expected
                     [1U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C3_expected
                     [1U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][3U] 
                     != vlSelf->top_ws_tb__DOT__C3_expected
                     [1U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C3_expected
                     [1U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][0U] 
                     != vlSelf->top_ws_tb__DOT__C3_expected
                     [2U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C3_expected
                     [2U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][1U] 
                     != vlSelf->top_ws_tb__DOT__C3_expected
                     [2U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C3_expected
                     [2U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][2U] 
                     != vlSelf->top_ws_tb__DOT__C3_expected
                     [2U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C3_expected
                     [2U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][3U] 
                     != vlSelf->top_ws_tb__DOT__C3_expected
                     [2U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C3_expected
                     [2U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][0U] 
                     != vlSelf->top_ws_tb__DOT__C3_expected
                     [3U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C3_expected
                     [3U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][1U] 
                     != vlSelf->top_ws_tb__DOT__C3_expected
                     [3U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C3_expected
                     [3U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][2U] 
                     != vlSelf->top_ws_tb__DOT__C3_expected
                     [3U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C3_expected
                     [3U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][3U] 
                     != vlSelf->top_ws_tb__DOT__C3_expected
                     [3U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C3_expected
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
    co_await vlSelf->__VtrigSched_h5e37bb25__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.done)", 
                                                       "source/top_ws_tb.sv", 
                                                       238);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       238);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors = 0U;
    VL_WRITEF_NX("\n[%0t] --- Result Check ---\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][0U] 
                     != vlSelf->top_ws_tb__DOT__C4_expected
                     [0U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C4_expected
                     [0U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][1U] 
                     != vlSelf->top_ws_tb__DOT__C4_expected
                     [0U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C4_expected
                     [0U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][2U] 
                     != vlSelf->top_ws_tb__DOT__C4_expected
                     [0U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C4_expected
                     [0U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][3U] 
                     != vlSelf->top_ws_tb__DOT__C4_expected
                     [0U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C4_expected
                     [0U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][0U] 
                     != vlSelf->top_ws_tb__DOT__C4_expected
                     [1U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C4_expected
                     [1U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][1U] 
                     != vlSelf->top_ws_tb__DOT__C4_expected
                     [1U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C4_expected
                     [1U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][2U] 
                     != vlSelf->top_ws_tb__DOT__C4_expected
                     [1U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C4_expected
                     [1U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][3U] 
                     != vlSelf->top_ws_tb__DOT__C4_expected
                     [1U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C4_expected
                     [1U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][0U] 
                     != vlSelf->top_ws_tb__DOT__C4_expected
                     [2U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C4_expected
                     [2U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][1U] 
                     != vlSelf->top_ws_tb__DOT__C4_expected
                     [2U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C4_expected
                     [2U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][2U] 
                     != vlSelf->top_ws_tb__DOT__C4_expected
                     [2U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C4_expected
                     [2U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][3U] 
                     != vlSelf->top_ws_tb__DOT__C4_expected
                     [2U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C4_expected
                     [2U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][0U] 
                     != vlSelf->top_ws_tb__DOT__C4_expected
                     [3U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C4_expected
                     [3U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][1U] 
                     != vlSelf->top_ws_tb__DOT__C4_expected
                     [3U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C4_expected
                     [3U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][2U] 
                     != vlSelf->top_ws_tb__DOT__C4_expected
                     [3U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C4_expected
                     [3U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][3U] 
                     != vlSelf->top_ws_tb__DOT__C4_expected
                     [3U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C4_expected
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
    co_await vlSelf->__VtrigSched_h5e37bb25__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.done)", 
                                                       "source/top_ws_tb.sv", 
                                                       241);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       241);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors = 0U;
    VL_WRITEF_NX("\n[%0t] --- Result Check ---\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][0U] 
                     != vlSelf->top_ws_tb__DOT__C5_expected
                     [0U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C5_expected
                     [0U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][1U] 
                     != vlSelf->top_ws_tb__DOT__C5_expected
                     [0U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C5_expected
                     [0U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][2U] 
                     != vlSelf->top_ws_tb__DOT__C5_expected
                     [0U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C5_expected
                     [0U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[0U][3U] 
                     != vlSelf->top_ws_tb__DOT__C5_expected
                     [0U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[0][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[0U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C5_expected
                     [0U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][0U] 
                     != vlSelf->top_ws_tb__DOT__C5_expected
                     [1U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C5_expected
                     [1U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][1U] 
                     != vlSelf->top_ws_tb__DOT__C5_expected
                     [1U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C5_expected
                     [1U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][2U] 
                     != vlSelf->top_ws_tb__DOT__C5_expected
                     [1U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C5_expected
                     [1U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[1U][3U] 
                     != vlSelf->top_ws_tb__DOT__C5_expected
                     [1U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[1][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[1U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C5_expected
                     [1U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][0U] 
                     != vlSelf->top_ws_tb__DOT__C5_expected
                     [2U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C5_expected
                     [2U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][1U] 
                     != vlSelf->top_ws_tb__DOT__C5_expected
                     [2U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C5_expected
                     [2U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][2U] 
                     != vlSelf->top_ws_tb__DOT__C5_expected
                     [2U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C5_expected
                     [2U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[2U][3U] 
                     != vlSelf->top_ws_tb__DOT__C5_expected
                     [2U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[2][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[2U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C5_expected
                     [2U][3U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 4U;
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][0U] 
                     != vlSelf->top_ws_tb__DOT__C5_expected
                     [3U][0U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][0]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [0U],32,vlSelf->top_ws_tb__DOT__C5_expected
                     [3U][0U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 1U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][1U] 
                     != vlSelf->top_ws_tb__DOT__C5_expected
                     [3U][1U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][1]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [1U],32,vlSelf->top_ws_tb__DOT__C5_expected
                     [3U][1U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 2U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][2U] 
                     != vlSelf->top_ws_tb__DOT__C5_expected
                     [3U][2U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][2]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [2U],32,vlSelf->top_ws_tb__DOT__C5_expected
                     [3U][2U]);
        vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors 
            = ((IData)(1U) + vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors);
    }
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = 3U;
    if (VL_UNLIKELY((vlSelf->top_ws_tb__DOT__C[3U][3U] 
                     != vlSelf->top_ws_tb__DOT__C5_expected
                     [3U][3U]))) {
        VL_WRITEF_NX("  MISMATCH at C[3][3]: got %0d, expected %0d\n",0,
                     32,vlSelf->top_ws_tb__DOT__C[3U]
                     [3U],32,vlSelf->top_ws_tb__DOT__C5_expected
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
    vlSelf->__Vfork_1__sync.done("source/top_ws_tb.sv", 
                                 228);
}

VL_INLINE_OPT VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0\n"); );
    // Body
    vlSelf->top_ws_tb__DOT__A[0U][0U] = vlSelf->top_ws_tb__DOT__A1
        [0U][0U];
    vlSelf->top_ws_tb__DOT__A[0U][1U] = vlSelf->top_ws_tb__DOT__A1
        [0U][1U];
    vlSelf->top_ws_tb__DOT__A[0U][2U] = vlSelf->top_ws_tb__DOT__A1
        [0U][2U];
    vlSelf->top_ws_tb__DOT__A[0U][3U] = vlSelf->top_ws_tb__DOT__A1
        [0U][3U];
    vlSelf->top_ws_tb__DOT__A[1U][0U] = vlSelf->top_ws_tb__DOT__A1
        [1U][0U];
    vlSelf->top_ws_tb__DOT__A[1U][1U] = vlSelf->top_ws_tb__DOT__A1
        [1U][1U];
    vlSelf->top_ws_tb__DOT__A[1U][2U] = vlSelf->top_ws_tb__DOT__A1
        [1U][2U];
    vlSelf->top_ws_tb__DOT__A[1U][3U] = vlSelf->top_ws_tb__DOT__A1
        [1U][3U];
    vlSelf->top_ws_tb__DOT__A[2U][0U] = vlSelf->top_ws_tb__DOT__A1
        [2U][0U];
    vlSelf->top_ws_tb__DOT__A[2U][1U] = vlSelf->top_ws_tb__DOT__A1
        [2U][1U];
    vlSelf->top_ws_tb__DOT__A[2U][2U] = vlSelf->top_ws_tb__DOT__A1
        [2U][2U];
    vlSelf->top_ws_tb__DOT__A[2U][3U] = vlSelf->top_ws_tb__DOT__A1
        [2U][3U];
    vlSelf->top_ws_tb__DOT__A[3U][0U] = vlSelf->top_ws_tb__DOT__A1
        [3U][0U];
    vlSelf->top_ws_tb__DOT__A[3U][1U] = vlSelf->top_ws_tb__DOT__A1
        [3U][1U];
    vlSelf->top_ws_tb__DOT__A[3U][2U] = vlSelf->top_ws_tb__DOT__A1
        [3U][2U];
    vlSelf->top_ws_tb__DOT__A[3U][3U] = vlSelf->top_ws_tb__DOT__A1
        [3U][3U];
    vlSelf->top_ws_tb__DOT__activation = 1U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       199);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       199);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top_ws_tb__DOT__activation = 0U;
    co_await vlSelf->__VtrigSched_h02c7d36f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.out_skew_done)", 
                                                       "source/top_ws_tb.sv", 
                                                       201);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top_ws_tb__DOT__A[0U][0U] = vlSelf->top_ws_tb__DOT__A2
        [0U][0U];
    vlSelf->top_ws_tb__DOT__A[0U][1U] = vlSelf->top_ws_tb__DOT__A2
        [0U][1U];
    vlSelf->top_ws_tb__DOT__A[0U][2U] = vlSelf->top_ws_tb__DOT__A2
        [0U][2U];
    vlSelf->top_ws_tb__DOT__A[0U][3U] = vlSelf->top_ws_tb__DOT__A2
        [0U][3U];
    vlSelf->top_ws_tb__DOT__A[1U][0U] = vlSelf->top_ws_tb__DOT__A2
        [1U][0U];
    vlSelf->top_ws_tb__DOT__A[1U][1U] = vlSelf->top_ws_tb__DOT__A2
        [1U][1U];
    vlSelf->top_ws_tb__DOT__A[1U][2U] = vlSelf->top_ws_tb__DOT__A2
        [1U][2U];
    vlSelf->top_ws_tb__DOT__A[1U][3U] = vlSelf->top_ws_tb__DOT__A2
        [1U][3U];
    vlSelf->top_ws_tb__DOT__A[2U][0U] = vlSelf->top_ws_tb__DOT__A2
        [2U][0U];
    vlSelf->top_ws_tb__DOT__A[2U][1U] = vlSelf->top_ws_tb__DOT__A2
        [2U][1U];
    vlSelf->top_ws_tb__DOT__A[2U][2U] = vlSelf->top_ws_tb__DOT__A2
        [2U][2U];
    vlSelf->top_ws_tb__DOT__A[2U][3U] = vlSelf->top_ws_tb__DOT__A2
        [2U][3U];
    vlSelf->top_ws_tb__DOT__A[3U][0U] = vlSelf->top_ws_tb__DOT__A2
        [3U][0U];
    vlSelf->top_ws_tb__DOT__A[3U][1U] = vlSelf->top_ws_tb__DOT__A2
        [3U][1U];
    vlSelf->top_ws_tb__DOT__A[3U][2U] = vlSelf->top_ws_tb__DOT__A2
        [3U][2U];
    vlSelf->top_ws_tb__DOT__A[3U][3U] = vlSelf->top_ws_tb__DOT__A2
        [3U][3U];
    vlSelf->top_ws_tb__DOT__activation = 1U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       205);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       205);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top_ws_tb__DOT__activation = 0U;
    co_await vlSelf->__VtrigSched_h02c7d36f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.out_skew_done)", 
                                                       "source/top_ws_tb.sv", 
                                                       207);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top_ws_tb__DOT__A[0U][0U] = vlSelf->top_ws_tb__DOT__A3
        [0U][0U];
    vlSelf->top_ws_tb__DOT__A[0U][1U] = vlSelf->top_ws_tb__DOT__A3
        [0U][1U];
    vlSelf->top_ws_tb__DOT__A[0U][2U] = vlSelf->top_ws_tb__DOT__A3
        [0U][2U];
    vlSelf->top_ws_tb__DOT__A[0U][3U] = vlSelf->top_ws_tb__DOT__A3
        [0U][3U];
    vlSelf->top_ws_tb__DOT__A[1U][0U] = vlSelf->top_ws_tb__DOT__A3
        [1U][0U];
    vlSelf->top_ws_tb__DOT__A[1U][1U] = vlSelf->top_ws_tb__DOT__A3
        [1U][1U];
    vlSelf->top_ws_tb__DOT__A[1U][2U] = vlSelf->top_ws_tb__DOT__A3
        [1U][2U];
    vlSelf->top_ws_tb__DOT__A[1U][3U] = vlSelf->top_ws_tb__DOT__A3
        [1U][3U];
    vlSelf->top_ws_tb__DOT__A[2U][0U] = vlSelf->top_ws_tb__DOT__A3
        [2U][0U];
    vlSelf->top_ws_tb__DOT__A[2U][1U] = vlSelf->top_ws_tb__DOT__A3
        [2U][1U];
    vlSelf->top_ws_tb__DOT__A[2U][2U] = vlSelf->top_ws_tb__DOT__A3
        [2U][2U];
    vlSelf->top_ws_tb__DOT__A[2U][3U] = vlSelf->top_ws_tb__DOT__A3
        [2U][3U];
    vlSelf->top_ws_tb__DOT__A[3U][0U] = vlSelf->top_ws_tb__DOT__A3
        [3U][0U];
    vlSelf->top_ws_tb__DOT__A[3U][1U] = vlSelf->top_ws_tb__DOT__A3
        [3U][1U];
    vlSelf->top_ws_tb__DOT__A[3U][2U] = vlSelf->top_ws_tb__DOT__A3
        [3U][2U];
    vlSelf->top_ws_tb__DOT__A[3U][3U] = vlSelf->top_ws_tb__DOT__A3
        [3U][3U];
    vlSelf->top_ws_tb__DOT__activation = 1U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       211);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       211);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top_ws_tb__DOT__activation = 0U;
    co_await vlSelf->__VtrigSched_h02c7d36f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.out_skew_done)", 
                                                       "source/top_ws_tb.sv", 
                                                       213);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top_ws_tb__DOT__A[0U][0U] = vlSelf->top_ws_tb__DOT__A4
        [0U][0U];
    vlSelf->top_ws_tb__DOT__A[0U][1U] = vlSelf->top_ws_tb__DOT__A4
        [0U][1U];
    vlSelf->top_ws_tb__DOT__A[0U][2U] = vlSelf->top_ws_tb__DOT__A4
        [0U][2U];
    vlSelf->top_ws_tb__DOT__A[0U][3U] = vlSelf->top_ws_tb__DOT__A4
        [0U][3U];
    vlSelf->top_ws_tb__DOT__A[1U][0U] = vlSelf->top_ws_tb__DOT__A4
        [1U][0U];
    vlSelf->top_ws_tb__DOT__A[1U][1U] = vlSelf->top_ws_tb__DOT__A4
        [1U][1U];
    vlSelf->top_ws_tb__DOT__A[1U][2U] = vlSelf->top_ws_tb__DOT__A4
        [1U][2U];
    vlSelf->top_ws_tb__DOT__A[1U][3U] = vlSelf->top_ws_tb__DOT__A4
        [1U][3U];
    vlSelf->top_ws_tb__DOT__A[2U][0U] = vlSelf->top_ws_tb__DOT__A4
        [2U][0U];
    vlSelf->top_ws_tb__DOT__A[2U][1U] = vlSelf->top_ws_tb__DOT__A4
        [2U][1U];
    vlSelf->top_ws_tb__DOT__A[2U][2U] = vlSelf->top_ws_tb__DOT__A4
        [2U][2U];
    vlSelf->top_ws_tb__DOT__A[2U][3U] = vlSelf->top_ws_tb__DOT__A4
        [2U][3U];
    vlSelf->top_ws_tb__DOT__A[3U][0U] = vlSelf->top_ws_tb__DOT__A4
        [3U][0U];
    vlSelf->top_ws_tb__DOT__A[3U][1U] = vlSelf->top_ws_tb__DOT__A4
        [3U][1U];
    vlSelf->top_ws_tb__DOT__A[3U][2U] = vlSelf->top_ws_tb__DOT__A4
        [3U][2U];
    vlSelf->top_ws_tb__DOT__A[3U][3U] = vlSelf->top_ws_tb__DOT__A4
        [3U][3U];
    vlSelf->top_ws_tb__DOT__activation = 1U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       217);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       217);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top_ws_tb__DOT__activation = 0U;
    co_await vlSelf->__VtrigSched_h02c7d36f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.out_skew_done)", 
                                                       "source/top_ws_tb.sv", 
                                                       219);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top_ws_tb__DOT__A[0U][0U] = vlSelf->top_ws_tb__DOT__A5
        [0U][0U];
    vlSelf->top_ws_tb__DOT__A[0U][1U] = vlSelf->top_ws_tb__DOT__A5
        [0U][1U];
    vlSelf->top_ws_tb__DOT__A[0U][2U] = vlSelf->top_ws_tb__DOT__A5
        [0U][2U];
    vlSelf->top_ws_tb__DOT__A[0U][3U] = vlSelf->top_ws_tb__DOT__A5
        [0U][3U];
    vlSelf->top_ws_tb__DOT__A[1U][0U] = vlSelf->top_ws_tb__DOT__A5
        [1U][0U];
    vlSelf->top_ws_tb__DOT__A[1U][1U] = vlSelf->top_ws_tb__DOT__A5
        [1U][1U];
    vlSelf->top_ws_tb__DOT__A[1U][2U] = vlSelf->top_ws_tb__DOT__A5
        [1U][2U];
    vlSelf->top_ws_tb__DOT__A[1U][3U] = vlSelf->top_ws_tb__DOT__A5
        [1U][3U];
    vlSelf->top_ws_tb__DOT__A[2U][0U] = vlSelf->top_ws_tb__DOT__A5
        [2U][0U];
    vlSelf->top_ws_tb__DOT__A[2U][1U] = vlSelf->top_ws_tb__DOT__A5
        [2U][1U];
    vlSelf->top_ws_tb__DOT__A[2U][2U] = vlSelf->top_ws_tb__DOT__A5
        [2U][2U];
    vlSelf->top_ws_tb__DOT__A[2U][3U] = vlSelf->top_ws_tb__DOT__A5
        [2U][3U];
    vlSelf->top_ws_tb__DOT__A[3U][0U] = vlSelf->top_ws_tb__DOT__A5
        [3U][0U];
    vlSelf->top_ws_tb__DOT__A[3U][1U] = vlSelf->top_ws_tb__DOT__A5
        [3U][1U];
    vlSelf->top_ws_tb__DOT__A[3U][2U] = vlSelf->top_ws_tb__DOT__A5
        [3U][2U];
    vlSelf->top_ws_tb__DOT__A[3U][3U] = vlSelf->top_ws_tb__DOT__A5
        [3U][3U];
    vlSelf->top_ws_tb__DOT__activation = 1U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       223);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       223);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top_ws_tb__DOT__activation = 0U;
    co_await vlSelf->__VtrigSched_h02c7d36f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.out_skew_done)", 
                                                       "source/top_ws_tb.sv", 
                                                       225);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vfork_1__sync.done("source/top_ws_tb.sv", 
                                 194);
    vlSelf->__Vm_traceActivity[4U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "source/top_ws_tb.sv", 
                                           32);
        vlSelf->top_ws_tb__DOT__clk = (1U & ((IData)(1U) 
                                             + (IData)(vlSelf->top_ws_tb__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtop_ws_tb___024root___act_comb__TOP__0(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[0U] 
        = ((0xffff0000U & vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[0U]) 
           | ((vlSelf->top_ws_tb__DOT__B[0U][1U] << 8U) 
              | vlSelf->top_ws_tb__DOT__B[0U][0U]));
    vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[0U] 
        = ((0xffffU & vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[0U]) 
           | (0xffff0000U & ((vlSelf->top_ws_tb__DOT__B
                              [0U][3U] << 0x18U) | 
                             (vlSelf->top_ws_tb__DOT__B
                              [0U][2U] << 0x10U))));
    vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[1U] 
        = ((0xffff0000U & vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[1U]) 
           | ((vlSelf->top_ws_tb__DOT__B[1U][1U] << 8U) 
              | vlSelf->top_ws_tb__DOT__B[1U][0U]));
    vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[1U] 
        = ((0xffffU & vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[1U]) 
           | (0xffff0000U & ((vlSelf->top_ws_tb__DOT__B
                              [1U][3U] << 0x18U) | 
                             (vlSelf->top_ws_tb__DOT__B
                              [1U][2U] << 0x10U))));
    vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[2U] 
        = ((0xffff0000U & vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[2U]) 
           | ((vlSelf->top_ws_tb__DOT__B[2U][1U] << 8U) 
              | vlSelf->top_ws_tb__DOT__B[2U][0U]));
    vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[2U] 
        = ((0xffffU & vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[2U]) 
           | (0xffff0000U & ((vlSelf->top_ws_tb__DOT__B
                              [2U][3U] << 0x18U) | 
                             (vlSelf->top_ws_tb__DOT__B
                              [2U][2U] << 0x10U))));
    vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[3U] 
        = ((0xffff0000U & vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[3U]) 
           | ((vlSelf->top_ws_tb__DOT__B[3U][1U] << 8U) 
              | vlSelf->top_ws_tb__DOT__B[3U][0U]));
    vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[3U] 
        = ((0xffffU & vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[3U]) 
           | (0xffff0000U & ((vlSelf->top_ws_tb__DOT__B
                              [3U][3U] << 0x18U) | 
                             (vlSelf->top_ws_tb__DOT__B
                              [3U][2U] << 0x10U))));
}

void Vtop_ws_tb___024root___eval_act(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_act\n"); );
    // Body
    if ((0xfULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop_ws_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void Vtop_ws_tb___024root___nba_sequent__TOP__0(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__top_ws_tb__DOT__dut__DOT__k;
    __Vdly__top_ws_tb__DOT__dut__DOT__k = 0;
    CData/*1:0*/ __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf1__v0;
    __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf1__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v0;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v0;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf0__v0;
    __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf0__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v0;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v0;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf1__v1;
    __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf1__v1 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v1;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v1;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v1 = 0;
    CData/*1:0*/ __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf0__v1;
    __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf0__v1 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v1;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v1;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v1 = 0;
    CData/*1:0*/ __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf1__v2;
    __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf1__v2 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v2;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v2 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v2;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v2 = 0;
    CData/*1:0*/ __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf0__v2;
    __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf0__v2 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v2;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v2 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v2;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v2 = 0;
    CData/*1:0*/ __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf1__v3;
    __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf1__v3 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v3;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v3 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v3;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v3 = 0;
    CData/*1:0*/ __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf0__v3;
    __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf0__v3 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v3;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v3 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v3;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v3 = 0;
    IData/*31:0*/ __Vdly__top_ws_tb__DOT__dut__DOT__row;
    __Vdly__top_ws_tb__DOT__dut__DOT__row = 0;
    CData/*0:0*/ __Vdly__top_ws_tb__DOT__dut__DOT__buf_select;
    __Vdly__top_ws_tb__DOT__dut__DOT__buf_select = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v4;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v4 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v4;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v4 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v4;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v4 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v4;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v4 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v5;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v5 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v5;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v5 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v5;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v5 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v5;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v5 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v6;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v6 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v6;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v6 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v6;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v6 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v6;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v6 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v7;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v7 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v7;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v7 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v7;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v7 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v7;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v7 = 0;
    CData/*0:0*/ __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v8;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v8 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v0;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v1;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v1 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v2;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v2 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v3;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v3 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v4;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v4 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v5;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v5 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v6;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v6 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v7;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v7 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v8;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v8 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v0;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v1;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v1 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v2;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v2 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v3;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v3 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v4;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v4 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v5;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v5 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v6;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v6 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v7;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v7 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v8;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v8 = 0;
    IData/*31:0*/ __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__ctr;
    __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__ctr = 0;
    CData/*0:0*/ __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__counting;
    __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__counting = 0;
    SData/*15:0*/ __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_len;
    __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_len = 0;
    CData/*0:0*/ __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__out_valid_flag;
    __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__out_valid_flag = 0;
    SData/*15:0*/ __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_ctr;
    __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_ctr = 0;
    // Body
    __Vdly__top_ws_tb__DOT__dut__DOT__k = vlSelf->top_ws_tb__DOT__dut__DOT__k;
    __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_ctr 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_ctr;
    __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__out_valid_flag 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__out_valid_flag;
    __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_len 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_len;
    __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__counting 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__counting;
    __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__ctr 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__ctr;
    __Vdly__top_ws_tb__DOT__dut__DOT__row = vlSelf->top_ws_tb__DOT__dut__DOT__row;
    __Vdly__top_ws_tb__DOT__dut__DOT__buf_select = vlSelf->top_ws_tb__DOT__dut__DOT__buf_select;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v0 = 0U;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v1 = 0U;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v2 = 0U;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v3 = 0U;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v4 = 0U;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v5 = 0U;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v6 = 0U;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v7 = 0U;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v0 = 0U;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v1 = 0U;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v2 = 0U;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v3 = 0U;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v4 = 0U;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v5 = 0U;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v6 = 0U;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v7 = 0U;
    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v8 = 0U;
    if ((1U & (~ (IData)(vlSelf->top_ws_tb__DOT__rst_n)))) {
        vlSelf->top_ws_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        vlSelf->top_ws_tb__DOT__dut__DOT__unnamedblk1__DOT__i = 4U;
    }
    if (vlSelf->top_ws_tb__DOT__rst_n) {
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v0 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__raw_psum[0U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v3 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__raw_psum[1U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v6 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__raw_psum[2U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v1 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
            [0U][0U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v2 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
            [0U][1U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v4 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
            [1U][0U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v5 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
            [1U][1U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v7 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
            [2U][0U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v8 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
            [2U][1U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v1 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
            [1U][0U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v2 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
            [1U][1U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v4 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
            [2U][0U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v5 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
            [2U][1U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v7 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
            [3U][0U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v8 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
            [3U][1U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v0 
            = (0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew 
                        >> 8U));
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v3 
            = (0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew 
                        >> 0x10U));
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v6 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew 
               >> 0x18U);
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
            [3U][3U];
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
            [3U][2U];
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
            [3U][1U];
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
            [3U][0U];
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
            [2U][3U];
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
            [2U][2U];
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
            [2U][1U];
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
            [2U][0U];
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
            [1U][3U];
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
            [1U][2U];
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
            [1U][1U];
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
            [1U][0U];
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
            [0U][3U];
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
            [0U][2U];
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
            [0U][1U];
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
            [0U][0U];
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
               [3U][3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg)), 
                                      VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                                                    [3U]
                                                    [3U])));
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
               [3U][2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg)), 
                                      VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                                                    [3U]
                                                    [2U])));
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
               [3U][1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg)), 
                                      VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                                                    [3U]
                                                    [1U])));
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
               [3U][0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg)), 
                                      VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                                                    [3U]
                                                    [0U])));
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
               [2U][3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg)), 
                                      VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                                                    [2U]
                                                    [3U])));
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
               [2U][2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg)), 
                                      VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                                                    [2U]
                                                    [2U])));
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
               [2U][1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg)), 
                                      VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                                                    [2U]
                                                    [1U])));
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
               [2U][0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg)), 
                                      VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                                                    [2U]
                                                    [0U])));
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
               [1U][3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg)), 
                                      VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                                                    [1U]
                                                    [3U])));
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
               [1U][2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg)), 
                                      VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                                                    [1U]
                                                    [2U])));
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
               [1U][1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg)), 
                                      VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                                                    [1U]
                                                    [1U])));
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
               [1U][0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg)), 
                                      VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                                                    [1U]
                                                    [0U])));
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
               [0U][3U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg)), 
                                      VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                                                    [0U]
                                                    [3U])));
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
               [0U][2U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg)), 
                                      VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                                                    [0U]
                                                    [2U])));
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
               [0U][1U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg)), 
                                      VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                                                    [0U]
                                                    [1U])));
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
               [0U][0U] + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg)), 
                                      VL_EXTENDS_II(32,8, 
                                                    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                                                    [0U]
                                                    [0U])));
        vlSelf->top_ws_tb__DOT__done = 0U;
        if ((4U > vlSelf->top_ws_tb__DOT__dut__DOT__row)) {
            if (vlSelf->top_ws_tb__DOT__dut__DOT__row_valid) {
                vlSelf->top_ws_tb__DOT__dut__DOT__unnamedblk3__DOT__c = 4U;
                if (vlSelf->top_ws_tb__DOT__dut__DOT__buf_select) {
                    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v0 
                        = vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[0U];
                    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v0 = 1U;
                    __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf1__v0 
                        = (3U & vlSelf->top_ws_tb__DOT__dut__DOT__row);
                    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v1 
                        = vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[1U];
                    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v1 = 1U;
                    __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf1__v1 
                        = (3U & vlSelf->top_ws_tb__DOT__dut__DOT__row);
                    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v2 
                        = vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[2U];
                    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v2 = 1U;
                    __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf1__v2 
                        = (3U & vlSelf->top_ws_tb__DOT__dut__DOT__row);
                    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v3 
                        = vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[3U];
                    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v3 = 1U;
                    __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf1__v3 
                        = (3U & vlSelf->top_ws_tb__DOT__dut__DOT__row);
                } else {
                    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v0 
                        = vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[0U];
                    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v0 = 1U;
                    __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf0__v0 
                        = (3U & vlSelf->top_ws_tb__DOT__dut__DOT__row);
                    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v1 
                        = vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[1U];
                    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v1 = 1U;
                    __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf0__v1 
                        = (3U & vlSelf->top_ws_tb__DOT__dut__DOT__row);
                    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v2 
                        = vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[2U];
                    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v2 = 1U;
                    __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf0__v2 
                        = (3U & vlSelf->top_ws_tb__DOT__dut__DOT__row);
                    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v3 
                        = vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[3U];
                    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v3 = 1U;
                    __Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf0__v3 
                        = (3U & vlSelf->top_ws_tb__DOT__dut__DOT__row);
                }
                __Vdly__top_ws_tb__DOT__dut__DOT__row 
                    = ((IData)(1U) + vlSelf->top_ws_tb__DOT__dut__DOT__row);
            }
        } else if ((4U == vlSelf->top_ws_tb__DOT__dut__DOT__row)) {
            __Vdly__top_ws_tb__DOT__dut__DOT__buf_select 
                = (1U & (~ (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__buf_select)));
            vlSelf->top_ws_tb__DOT__done = 1U;
            if (vlSelf->top_ws_tb__DOT__dut__DOT__row_valid) {
                vlSelf->top_ws_tb__DOT__dut__DOT__unnamedblk4__DOT__c = 4U;
                __Vdly__top_ws_tb__DOT__dut__DOT__row = 1U;
                if (vlSelf->top_ws_tb__DOT__dut__DOT__buf_select) {
                    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v4 
                        = vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[0U];
                    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v4 = 1U;
                    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v5 
                        = vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[1U];
                    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v5 = 1U;
                    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v6 
                        = vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[2U];
                    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v6 = 1U;
                    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v7 
                        = vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[3U];
                    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v7 = 1U;
                } else {
                    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v4 
                        = vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[0U];
                    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v4 = 1U;
                    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v5 
                        = vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[1U];
                    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v5 = 1U;
                    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v6 
                        = vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[2U];
                    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v6 = 1U;
                    __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v7 
                        = vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[3U];
                    __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v7 = 1U;
                }
            } else {
                __Vdly__top_ws_tb__DOT__dut__DOT__row = 0U;
            }
        }
        if (vlSelf->top_ws_tb__DOT__dut__DOT__load_weight) {
            vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[3U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[3U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[3U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[3U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[2U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[2U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[2U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[2U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[1U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[1U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[1U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[1U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[0U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[0U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[0U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[0U]);
        }
        if (((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skew_start) 
             & (~ (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__counting)))) {
            __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__ctr = 1U;
            __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__counting = 1U;
            __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_len = 3U;
        } else if (((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skew_start) 
                    & (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__counting))) {
            __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__ctr 
                = ((IData)(1U) + vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__ctr);
            __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_len 
                = (0xffffU & ((IData)(4U) + (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_len)));
        } else if (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__counting) {
            __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__ctr 
                = ((IData)(1U) + vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__ctr);
        }
        if ((6U == vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__ctr)) {
            __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__out_valid_flag = 1U;
            __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_ctr = 0U;
            vlSelf->top_ws_tb__DOT__dut__DOT__row_valid = 1U;
        } else if (((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__out_valid_flag) 
                    & ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_ctr) 
                       < (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_len)))) {
            __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_ctr 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_ctr)));
        } else if (((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__out_valid_flag) 
                    & ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_ctr) 
                       == (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_len)))) {
            __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__out_valid_flag = 0U;
            __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_ctr = 0U;
            __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_len = 3U;
            vlSelf->top_ws_tb__DOT__dut__DOT__row_valid = 0U;
        }
        vlSelf->top_ws_tb__DOT__dut__DOT__load_weight = 0U;
        if (vlSelf->top_ws_tb__DOT__weight_load) {
            vlSelf->top_ws_tb__DOT__dut__DOT__load_weight = 1U;
        }
        vlSelf->top_ws_tb__DOT__dut__DOT__skew_start = 0U;
        vlSelf->top_ws_tb__DOT__out_skew_done = 0U;
        if (vlSelf->top_ws_tb__DOT__dut__DOT__streaming) {
            vlSelf->top_ws_tb__DOT__dut__DOT__r = 4U;
            vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew 
                = ((0xffffff00U & vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew) 
                   | vlSelf->top_ws_tb__DOT__A[(3U 
                                                & vlSelf->top_ws_tb__DOT__dut__DOT__k)]
                   [0U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew 
                = ((0xffff00ffU & vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew) 
                   | (vlSelf->top_ws_tb__DOT__A[(3U 
                                                 & vlSelf->top_ws_tb__DOT__dut__DOT__k)]
                      [1U] << 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew 
                = ((0xff00ffffU & vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew) 
                   | (vlSelf->top_ws_tb__DOT__A[(3U 
                                                 & vlSelf->top_ws_tb__DOT__dut__DOT__k)]
                      [2U] << 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew 
                = ((0xffffffU & vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew) 
                   | (vlSelf->top_ws_tb__DOT__A[(3U 
                                                 & vlSelf->top_ws_tb__DOT__dut__DOT__k)]
                      [3U] << 0x18U));
            if ((3U == vlSelf->top_ws_tb__DOT__dut__DOT__k)) {
                vlSelf->top_ws_tb__DOT__dut__DOT__streaming = 0U;
                vlSelf->top_ws_tb__DOT__out_skew_done = 1U;
                __Vdly__top_ws_tb__DOT__dut__DOT__k = 0U;
            } else {
                __Vdly__top_ws_tb__DOT__dut__DOT__k 
                    = ((IData)(1U) + vlSelf->top_ws_tb__DOT__dut__DOT__k);
            }
        } else if (vlSelf->top_ws_tb__DOT__activation) {
            __Vdly__top_ws_tb__DOT__dut__DOT__k = 1U;
            vlSelf->top_ws_tb__DOT__dut__DOT__r = 4U;
            vlSelf->top_ws_tb__DOT__dut__DOT__streaming = 1U;
            vlSelf->top_ws_tb__DOT__dut__DOT__skew_start = 1U;
            vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew 
                = ((0xffff0000U & vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew) 
                   | ((vlSelf->top_ws_tb__DOT__A[0U]
                       [1U] << 8U) | vlSelf->top_ws_tb__DOT__A
                      [0U][0U]));
            vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew 
                = ((0xffffU & vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew) 
                   | ((vlSelf->top_ws_tb__DOT__A[0U]
                       [3U] << 0x18U) | (vlSelf->top_ws_tb__DOT__A
                                         [0U][2U] << 0x10U)));
        } else {
            vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew = 0U;
        }
    } else {
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v0 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v3 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v6 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v1 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v2 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v4 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v5 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v7 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v8 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v1 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v2 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v4 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v5 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v7 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v8 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v0 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v3 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v6 = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum = 0U;
        __Vdly__top_ws_tb__DOT__dut__DOT__row = 0U;
        __Vdly__top_ws_tb__DOT__dut__DOT__buf_select = 0U;
        vlSelf->top_ws_tb__DOT__done = 0U;
        __Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v8 = 1U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg = 0U;
        __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__ctr = 0U;
        __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__counting = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__row_valid = 0U;
        __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_len = 0U;
        __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_ctr = 0U;
        __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__out_valid_flag = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__load_weight = 0U;
        __Vdly__top_ws_tb__DOT__dut__DOT__k = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__streaming = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__skew_start = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew = 0U;
        vlSelf->top_ws_tb__DOT__out_skew_done = 0U;
    }
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out[0U][0U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v0;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out[0U][1U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v1;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out[0U][2U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v2;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out[1U][0U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v3;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out[1U][1U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v4;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out[1U][2U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v5;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out[2U][0U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v6;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out[2U][1U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v7;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out[2U][2U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out__v8;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a[1U][0U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v0;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a[1U][1U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v1;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a[1U][2U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v2;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a[2U][0U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v3;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a[2U][1U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v4;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a[2U][2U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v5;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a[3U][0U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v6;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a[3U][1U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v7;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a[3U][2U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a__v8;
    vlSelf->top_ws_tb__DOT__dut__DOT__row = __Vdly__top_ws_tb__DOT__dut__DOT__row;
    vlSelf->top_ws_tb__DOT__dut__DOT__buf_select = __Vdly__top_ws_tb__DOT__dut__DOT__buf_select;
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v0) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[__Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf0__v0][0U] 
            = __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v0;
    }
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v1) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[__Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf0__v1][1U] 
            = __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v1;
    }
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v2) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[__Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf0__v2][2U] 
            = __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v2;
    }
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v3) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[__Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf0__v3][3U] 
            = __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v3;
    }
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v4) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[0U][0U] 
            = __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v4;
    }
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v5) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[0U][1U] 
            = __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v5;
    }
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v6) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[0U][2U] 
            = __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v6;
    }
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v7) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[0U][3U] 
            = __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf0__v7;
    }
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v0) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[__Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf1__v0][0U] 
            = __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v0;
    }
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v1) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[__Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf1__v1][1U] 
            = __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v1;
    }
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v2) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[__Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf1__v2][2U] 
            = __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v2;
    }
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v3) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[__Vdlyvdim0__top_ws_tb__DOT__dut__DOT__C_buf1__v3][3U] 
            = __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v3;
    }
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v4) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[0U][0U] 
            = __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v4;
    }
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v5) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[0U][1U] 
            = __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v5;
    }
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v6) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[0U][2U] 
            = __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v6;
    }
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf1__v7) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[0U][3U] 
            = __Vdlyvval__top_ws_tb__DOT__dut__DOT__C_buf1__v7;
    }
    if (__Vdlyvset__top_ws_tb__DOT__dut__DOT__C_buf0__v8) {
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[0U][0U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[0U][1U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[0U][2U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[0U][3U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[1U][0U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[1U][1U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[1U][2U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[1U][3U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[2U][0U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[2U][1U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[2U][2U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[2U][3U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[3U][0U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[3U][1U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[3U][2U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0[3U][3U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[0U][0U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[0U][1U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[0U][2U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[0U][3U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[1U][0U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[1U][1U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[1U][2U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[1U][3U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[2U][0U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[2U][1U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[2U][2U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[2U][3U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[3U][0U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[3U][1U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[3U][2U] = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1[3U][3U] = 0U;
    }
    vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[0U] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
                                    [1U][1U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
                                     [0U][2U]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[1U] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
                                     [1U][1U])) << 0x20U) 
                    | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
                                      [0U][2U]))) >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
        [2U][0U];
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__skewed_a 
        = ((0xff0000ffU & vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__skewed_a) 
           | ((vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
               [2U][1U] << 0x10U) | (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
                                     [1U][0U] << 8U)));
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__skewed_a 
        = ((0xffffffU & vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__skewed_a) 
           | (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
              [3U][2U] << 0x18U));
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[3U][4U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[3U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[3U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[3U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[2U][4U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[2U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[2U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[2U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[1U][4U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[1U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[1U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[1U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[0U][4U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[0U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[0U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[0U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire[4U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire[4U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire[4U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire[4U][0U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire[3U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire[3U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire[3U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire[3U][0U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire[2U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire[2U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire[2U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire[2U][0U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire[1U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire[1U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire[1U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire[1U][0U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum;
    if (vlSelf->top_ws_tb__DOT__dut__DOT__buf_select) {
        vlSelf->top_ws_tb__DOT__C[0U][0U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
            [0U][0U];
        vlSelf->top_ws_tb__DOT__C[0U][1U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
            [0U][1U];
        vlSelf->top_ws_tb__DOT__C[0U][2U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
            [0U][2U];
        vlSelf->top_ws_tb__DOT__C[0U][3U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
            [0U][3U];
        vlSelf->top_ws_tb__DOT__C[1U][0U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
            [1U][0U];
        vlSelf->top_ws_tb__DOT__C[1U][1U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
            [1U][1U];
        vlSelf->top_ws_tb__DOT__C[1U][2U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
            [1U][2U];
        vlSelf->top_ws_tb__DOT__C[1U][3U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
            [1U][3U];
        vlSelf->top_ws_tb__DOT__C[2U][0U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
            [2U][0U];
        vlSelf->top_ws_tb__DOT__C[2U][1U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
            [2U][1U];
        vlSelf->top_ws_tb__DOT__C[2U][2U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
            [2U][2U];
        vlSelf->top_ws_tb__DOT__C[2U][3U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
            [2U][3U];
        vlSelf->top_ws_tb__DOT__C[3U][0U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
            [3U][0U];
        vlSelf->top_ws_tb__DOT__C[3U][1U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
            [3U][1U];
        vlSelf->top_ws_tb__DOT__C[3U][2U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
            [3U][2U];
        vlSelf->top_ws_tb__DOT__C[3U][3U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
            [3U][3U];
    } else {
        vlSelf->top_ws_tb__DOT__C[0U][0U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
            [0U][0U];
        vlSelf->top_ws_tb__DOT__C[0U][1U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
            [0U][1U];
        vlSelf->top_ws_tb__DOT__C[0U][2U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
            [0U][2U];
        vlSelf->top_ws_tb__DOT__C[0U][3U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
            [0U][3U];
        vlSelf->top_ws_tb__DOT__C[1U][0U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
            [1U][0U];
        vlSelf->top_ws_tb__DOT__C[1U][1U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
            [1U][1U];
        vlSelf->top_ws_tb__DOT__C[1U][2U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
            [1U][2U];
        vlSelf->top_ws_tb__DOT__C[1U][3U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
            [1U][3U];
        vlSelf->top_ws_tb__DOT__C[2U][0U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
            [2U][0U];
        vlSelf->top_ws_tb__DOT__C[2U][1U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
            [2U][1U];
        vlSelf->top_ws_tb__DOT__C[2U][2U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
            [2U][2U];
        vlSelf->top_ws_tb__DOT__C[2U][3U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
            [2U][3U];
        vlSelf->top_ws_tb__DOT__C[3U][0U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
            [3U][0U];
        vlSelf->top_ws_tb__DOT__C[3U][1U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
            [3U][1U];
        vlSelf->top_ws_tb__DOT__C[3U][2U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
            [3U][2U];
        vlSelf->top_ws_tb__DOT__C[3U][3U] = vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
            [3U][3U];
    }
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__raw_psum[0U] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                                    [4U][1U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                                     [4U][0U]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__raw_psum[1U] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                                     [4U][1U])) << 0x20U) 
                    | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                                      [4U][0U]))) >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__raw_psum[2U] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                                    [4U][3U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                                     [4U][2U]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__raw_psum[3U] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                                     [4U][3U])) << 0x20U) 
                    | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                                      [4U][2U]))) >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__ctr 
        = __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__ctr;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__counting 
        = __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__counting;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_len 
        = __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_len;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__out_valid_flag 
        = __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__out_valid_flag;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_ctr 
        = __Vdly__top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_ctr;
    vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew[3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__raw_psum[3U];
    vlSelf->top_ws_tb__DOT__dut__DOT__k = __Vdly__top_ws_tb__DOT__dut__DOT__k;
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__skewed_a 
        = ((0xffffff00U & vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__skewed_a) 
           | (0xffU & vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew));
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[0U][0U] 
        = (0xffU & vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__skewed_a);
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[1U][0U] 
        = (0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__skewed_a 
                    >> 8U));
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[2U][0U] 
        = (0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__skewed_a 
                    >> 0x10U));
    vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire[3U][0U] 
        = (vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__skewed_a 
           >> 0x18U);
}

void Vtop_ws_tb___024root___eval_nba(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_ws_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0xfULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_ws_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
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
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h02c7d36f__0.resume("@(posedge top_ws_tb.out_skew_done)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h5e37bb25__0.resume("@(posedge top_ws_tb.done)");
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
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h02c7d36f__0.commit("@(posedge top_ws_tb.out_skew_done)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h5e37bb25__0.commit("@(posedge top_ws_tb.done)");
    }
}

void Vtop_ws_tb___024root___eval_triggers__act(Vtop_ws_tb___024root* vlSelf);

bool Vtop_ws_tb___024root___eval_phase__act(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
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
            VL_FATAL_MT("source/top_ws_tb.sv", 4, "", "NBA region did not converge.");
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
                VL_FATAL_MT("source/top_ws_tb.sv", 4, "", "Active region did not converge.");
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
