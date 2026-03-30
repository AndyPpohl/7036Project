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
}

VL_INLINE_OPT VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__1(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__1\n"); );
    // Body
    vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row = 0U;
    VL_WRITEF_NX("[%0t] Waiting for row_valid pulses...\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    while (VL_GTS_III(32, 4U, vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)) {
        co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_ws_tb.clk)", 
                                                           "source/top_ws_tb.sv", 
                                                           167);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        if (VL_UNLIKELY(((7U <= (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__ctr)) 
                         & (0xbU > (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__ctr))))) {
            vlSelf->top_ws_tb__DOT__C_got[(3U & vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)][0U] 
                = vlSelf->top_ws_tb__DOT__out_c[0U];
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = 1U;
            vlSelf->top_ws_tb__DOT__C_got[(3U & vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)][1U] 
                = vlSelf->top_ws_tb__DOT__out_c[1U];
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = 2U;
            vlSelf->top_ws_tb__DOT__C_got[(3U & vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)][2U] 
                = vlSelf->top_ws_tb__DOT__out_c[2U];
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = 3U;
            vlSelf->top_ws_tb__DOT__C_got[(3U & vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)][3U] 
                = vlSelf->top_ws_tb__DOT__out_c[3U];
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = 4U;
            VL_WRITEF_NX("[%0t] C_got[%0d] = %4#",0,
                         64,VL_TIME_UNITED_Q(1),-9,
                         32,vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row,
                         32,vlSelf->top_ws_tb__DOT__C_got
                         [(3U & vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)]
                         [0U]);
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = 1U;
            VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                         [(3U & vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)]
                         [1U]);
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = 2U;
            VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                         [(3U & vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)]
                         [2U]);
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = 3U;
            VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                         [(3U & vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)]
                         [3U]);
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = 4U;
            VL_WRITEF_NX("\n",0);
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row 
                = ((IData)(1U) + vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row);
        }
    }
    VL_WRITEF_NX("[%0t] Finished capturing all rows.\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    vlSelf->__Vfork_2__sync.done("source/top_ws_tb.sv", 
                                 312);
    vlSelf->__Vm_traceActivity[4U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__0(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__0\n"); );
    // Body
    VL_WRITEF_NX("[%0t] Starting matrix multiply, streaming A columns...\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       131);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       131);
    vlSelf->top_ws_tb__DOT__start = 1U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffffff00U & vlSelf->top_ws_tb__DOT__in_a) 
                                    | vlSelf->top_ws_tb__DOT__A
                                    [0U][0U]);
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffff00ffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [0U][1U] << 8U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xff00ffffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [0U][2U] << 0x10U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffffffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [0U][3U] << 0x18U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 4U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       138);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       138);
    vlSelf->top_ws_tb__DOT__start = 0U;
    VL_WRITEF_NX("[%0t]   Feeding column 1 of A.\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    vlSelf->top_ws_tb__DOT__in_a = ((0xffffff00U & vlSelf->top_ws_tb__DOT__in_a) 
                                    | vlSelf->top_ws_tb__DOT__A
                                    [1U][0U]);
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffff00ffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [1U][1U] << 8U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xff00ffffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [1U][2U] << 0x10U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffffffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [1U][3U] << 0x18U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 4U;
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__k = 2U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       138);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       138);
    vlSelf->top_ws_tb__DOT__start = 0U;
    VL_WRITEF_NX("[%0t]   Feeding column 2 of A.\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    vlSelf->top_ws_tb__DOT__in_a = ((0xffffff00U & vlSelf->top_ws_tb__DOT__in_a) 
                                    | vlSelf->top_ws_tb__DOT__A
                                    [2U][0U]);
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffff00ffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [2U][1U] << 8U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xff00ffffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [2U][2U] << 0x10U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffffffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [2U][3U] << 0x18U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 4U;
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__k = 3U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       138);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       138);
    vlSelf->top_ws_tb__DOT__start = 0U;
    VL_WRITEF_NX("[%0t]   Feeding column 3 of A.\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    vlSelf->top_ws_tb__DOT__in_a = ((0xffffff00U & vlSelf->top_ws_tb__DOT__in_a) 
                                    | vlSelf->top_ws_tb__DOT__A
                                    [3U][0U]);
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffff00ffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [3U][1U] << 8U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xff00ffffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [3U][2U] << 0x10U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffffffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [3U][3U] << 0x18U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 4U;
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__k = 4U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       146);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       146);
    vlSelf->top_ws_tb__DOT__start = 0U;
    vlSelf->top_ws_tb__DOT__in_a = 0U;
    VL_WRITEF_NX("[%0t] All columns fed.\n",0,64,VL_TIME_UNITED_Q(1),
                 -9);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       310);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       310);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       310);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       310);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       310);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       310);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       310);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       310);
    vlSelf->__Vfork_2__sync.done("source/top_ws_tb.sv", 
                                 308);
}

VL_INLINE_OPT VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1\n"); );
    // Body
    vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row = 0U;
    VL_WRITEF_NX("[%0t] Waiting for row_valid pulses...\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    while (VL_GTS_III(32, 4U, vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)) {
        co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_ws_tb.clk)", 
                                                           "source/top_ws_tb.sv", 
                                                           167);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        if (VL_UNLIKELY(((7U <= (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__ctr)) 
                         & (0xbU > (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__ctr))))) {
            vlSelf->top_ws_tb__DOT__C_got[(3U & vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)][0U] 
                = vlSelf->top_ws_tb__DOT__out_c[0U];
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = 1U;
            vlSelf->top_ws_tb__DOT__C_got[(3U & vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)][1U] 
                = vlSelf->top_ws_tb__DOT__out_c[1U];
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = 2U;
            vlSelf->top_ws_tb__DOT__C_got[(3U & vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)][2U] 
                = vlSelf->top_ws_tb__DOT__out_c[2U];
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = 3U;
            vlSelf->top_ws_tb__DOT__C_got[(3U & vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)][3U] 
                = vlSelf->top_ws_tb__DOT__out_c[3U];
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = 4U;
            VL_WRITEF_NX("[%0t] C_got[%0d] = %4#",0,
                         64,VL_TIME_UNITED_Q(1),-9,
                         32,vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row,
                         32,vlSelf->top_ws_tb__DOT__C_got
                         [(3U & vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)]
                         [0U]);
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = 1U;
            VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                         [(3U & vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)]
                         [1U]);
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = 2U;
            VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                         [(3U & vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)]
                         [2U]);
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = 3U;
            VL_WRITEF_NX(" %4#",0,32,vlSelf->top_ws_tb__DOT__C_got
                         [(3U & vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row)]
                         [3U]);
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = 4U;
            VL_WRITEF_NX("\n",0);
            vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row 
                = ((IData)(1U) + vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row);
        }
    }
    VL_WRITEF_NX("[%0t] Finished capturing all rows.\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    vlSelf->__Vfork_1__sync.done("source/top_ws_tb.sv", 
                                 290);
    vlSelf->__Vm_traceActivity[5U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0\n"); );
    // Body
    VL_WRITEF_NX("[%0t] Starting matrix multiply, streaming A columns...\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       131);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       131);
    vlSelf->top_ws_tb__DOT__start = 1U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffffff00U & vlSelf->top_ws_tb__DOT__in_a) 
                                    | vlSelf->top_ws_tb__DOT__A
                                    [0U][0U]);
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffff00ffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [0U][1U] << 8U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xff00ffffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [0U][2U] << 0x10U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffffffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [0U][3U] << 0x18U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 4U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       138);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       138);
    vlSelf->top_ws_tb__DOT__start = 0U;
    VL_WRITEF_NX("[%0t]   Feeding column 1 of A.\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    vlSelf->top_ws_tb__DOT__in_a = ((0xffffff00U & vlSelf->top_ws_tb__DOT__in_a) 
                                    | vlSelf->top_ws_tb__DOT__A
                                    [1U][0U]);
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffff00ffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [1U][1U] << 8U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xff00ffffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [1U][2U] << 0x10U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffffffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [1U][3U] << 0x18U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 4U;
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__k = 2U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       138);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       138);
    vlSelf->top_ws_tb__DOT__start = 0U;
    VL_WRITEF_NX("[%0t]   Feeding column 2 of A.\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    vlSelf->top_ws_tb__DOT__in_a = ((0xffffff00U & vlSelf->top_ws_tb__DOT__in_a) 
                                    | vlSelf->top_ws_tb__DOT__A
                                    [2U][0U]);
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffff00ffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [2U][1U] << 8U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xff00ffffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [2U][2U] << 0x10U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffffffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [2U][3U] << 0x18U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 4U;
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__k = 3U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       138);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       138);
    vlSelf->top_ws_tb__DOT__start = 0U;
    VL_WRITEF_NX("[%0t]   Feeding column 3 of A.\n",0,
                 64,VL_TIME_UNITED_Q(1),-9);
    vlSelf->top_ws_tb__DOT__in_a = ((0xffffff00U & vlSelf->top_ws_tb__DOT__in_a) 
                                    | vlSelf->top_ws_tb__DOT__A
                                    [3U][0U]);
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 1U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffff00ffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [3U][1U] << 8U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 2U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xff00ffffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [3U][2U] << 0x10U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 3U;
    vlSelf->top_ws_tb__DOT__in_a = ((0xffffffU & vlSelf->top_ws_tb__DOT__in_a) 
                                    | (vlSelf->top_ws_tb__DOT__A
                                       [3U][3U] << 0x18U));
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = 4U;
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__k = 4U;
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       146);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "source/top_ws_tb.sv", 
                                       146);
    vlSelf->top_ws_tb__DOT__start = 0U;
    vlSelf->top_ws_tb__DOT__in_a = 0U;
    VL_WRITEF_NX("[%0t] All columns fed.\n",0,64,VL_TIME_UNITED_Q(1),
                 -9);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       287);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       287);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       287);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       287);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       287);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       287);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       287);
    co_await vlSelf->__VtrigSched_hc4b95240__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_ws_tb.clk)", 
                                                       "source/top_ws_tb.sv", 
                                                       287);
    VL_WRITEF_NX("[%0t] Feed thread done.\n",0,64,VL_TIME_UNITED_Q(1),
                 -9);
    vlSelf->__Vfork_1__sync.done("source/top_ws_tb.sv", 
                                 284);
}

VL_INLINE_OPT VlCoroutine Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "source/top_ws_tb.sv", 
                                           33);
        vlSelf->top_ws_tb__DOT__clk = (1U & ((IData)(1U) 
                                             + (IData)(vlSelf->top_ws_tb__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtop_ws_tb___024root___act_comb__TOP__0(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->top_ws_tb__DOT__dut__DOT__skewed_a = ((0xffffff00U 
                                                   & vlSelf->top_ws_tb__DOT__dut__DOT__skewed_a) 
                                                  | (0xffU 
                                                     & vlSelf->top_ws_tb__DOT__in_a));
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[0U][0U] 
        = (0xffU & vlSelf->top_ws_tb__DOT__dut__DOT__skewed_a);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[1U][0U] 
        = (0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__skewed_a 
                    >> 8U));
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[2U][0U] 
        = (0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__skewed_a 
                    >> 0x10U));
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[3U][0U] 
        = (vlSelf->top_ws_tb__DOT__dut__DOT__skewed_a 
           >> 0x18U);
}

void Vtop_ws_tb___024root___eval_act(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop_ws_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtop_ws_tb__ConstPool__TABLE_he08668b2_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vtop_ws_tb__ConstPool__TABLE_h026e137d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_ws_tb__ConstPool__TABLE_h329b942b_0;

VL_INLINE_OPT void Vtop_ws_tb___024root___nba_sequent__TOP__0(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v0;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v1;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v1 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v2;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v2 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v3;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v3 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v4;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v4 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v5;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v5 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v6;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v6 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v7;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v7 = 0;
    CData/*7:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v8;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v8 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v0;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v1;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v1 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v2;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v2 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v3;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v3 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v4;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v4 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v5;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v5 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v6;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v6 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v7;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v7 = 0;
    IData/*31:0*/ __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v8;
    __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v8 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__ctr) 
                     << 3U) | (((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__counting) 
                                << 2U) | (((IData)(vlSelf->top_ws_tb__DOT__start) 
                                           << 1U) | (IData)(vlSelf->top_ws_tb__DOT__rst_n))));
    if ((1U & Vtop_ws_tb__ConstPool__TABLE_he08668b2_0
         [__Vtableidx1])) {
        vlSelf->top_ws_tb__DOT__dut__DOT__ctr = Vtop_ws_tb__ConstPool__TABLE_h026e137d_0
            [__Vtableidx1];
    }
    if ((2U & Vtop_ws_tb__ConstPool__TABLE_he08668b2_0
         [__Vtableidx1])) {
        vlSelf->top_ws_tb__DOT__dut__DOT__counting 
            = Vtop_ws_tb__ConstPool__TABLE_h329b942b_0
            [__Vtableidx1];
    }
    if (vlSelf->top_ws_tb__DOT__rst_n) {
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v0 
            = vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v3 
            = vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[1U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v6 
            = vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[2U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v1 
            = vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
            [0U][0U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v2 
            = vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
            [0U][1U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v4 
            = vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
            [1U][0U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v5 
            = vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
            [1U][1U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v7 
            = vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
            [2U][0U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v8 
            = vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
            [2U][1U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v0 
            = (0xffU & (vlSelf->top_ws_tb__DOT__in_a 
                        >> 8U));
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v3 
            = (0xffU & (vlSelf->top_ws_tb__DOT__in_a 
                        >> 0x10U));
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v6 
            = (vlSelf->top_ws_tb__DOT__in_a >> 0x18U);
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v1 
            = vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
            [1U][0U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v2 
            = vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
            [1U][1U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v4 
            = vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
            [2U][0U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v5 
            = vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
            [2U][1U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v7 
            = vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
            [3U][0U];
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v8 
            = vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
            [3U][1U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
            [3U][3U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
            [3U][2U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
            [3U][1U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
            [3U][0U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
            [2U][3U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
            [2U][2U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
            [2U][1U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
            [2U][0U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
            [1U][3U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
            [1U][2U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
            [1U][1U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
            [1U][0U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
            [0U][3U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
            [0U][2U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
            [0U][1U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a 
            = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
            [0U][0U];
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
               [3U][3U] + ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg) 
                           * vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                           [3U][3U]));
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
               [3U][2U] + ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg) 
                           * vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                           [3U][2U]));
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
               [3U][1U] + ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg) 
                           * vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                           [3U][1U]));
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
               [3U][0U] + ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg) 
                           * vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                           [3U][0U]));
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
               [2U][3U] + ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg) 
                           * vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                           [2U][3U]));
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
               [2U][2U] + ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg) 
                           * vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                           [2U][2U]));
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
               [2U][1U] + ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg) 
                           * vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                           [2U][1U]));
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
               [2U][0U] + ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg) 
                           * vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                           [2U][0U]));
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
               [1U][3U] + ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg) 
                           * vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                           [1U][3U]));
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
               [1U][2U] + ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg) 
                           * vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                           [1U][2U]));
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
               [1U][1U] + ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg) 
                           * vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                           [1U][1U]));
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
               [1U][0U] + ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg) 
                           * vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                           [1U][0U]));
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
               [0U][3U] + ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg) 
                           * vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                           [0U][3U]));
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
               [0U][2U] + ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg) 
                           * vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                           [0U][2U]));
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
               [0U][1U] + ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg) 
                           * vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                           [0U][1U]));
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum 
            = (vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
               [0U][0U] + ((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg) 
                           * vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                           [0U][0U]));
        if (vlSelf->top_ws_tb__DOT__load_weight) {
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[3U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[3U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[3U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[3U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[2U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[2U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[2U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[2U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[1U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[1U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[1U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[1U]);
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg 
                = (vlSelf->top_ws_tb__DOT__weights_in[0U] 
                   >> 0x18U);
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0U] 
                            >> 0x10U));
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg 
                = (0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0U] 
                            >> 8U));
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg 
                = (0xffU & vlSelf->top_ws_tb__DOT__weights_in[0U]);
        }
    } else {
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v0 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v3 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v6 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v1 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v2 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v4 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v5 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v7 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v8 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v0 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v3 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v6 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v1 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v2 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v4 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v5 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v7 = 0U;
        __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v8 = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg = 0U;
        vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg = 0U;
    }
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_c[0U][0U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v0;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_c[0U][1U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v1;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_c[0U][2U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v2;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_c[1U][0U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v3;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_c[1U][1U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v4;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_c[1U][2U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v5;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_c[2U][0U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v6;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_c[2U][1U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v7;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_c[2U][2U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_c__v8;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_a[1U][0U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v0;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_a[1U][1U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v1;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_a[1U][2U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v2;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_a[2U][0U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v3;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_a[2U][1U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v4;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_a[2U][2U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v5;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_a[3U][0U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v6;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_a[3U][1U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v7;
    vlSelf->top_ws_tb__DOT__dut__DOT__sr_a[3U][2U] 
        = __Vdlyvval__top_ws_tb__DOT__dut__DOT__sr_a__v8;
    vlSelf->top_ws_tb__DOT__out_c[0U] = (IData)((((QData)((IData)(
                                                                  vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
                                                                  [1U]
                                                                  [1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
                                                                   [0U]
                                                                   [2U]))));
    vlSelf->top_ws_tb__DOT__out_c[1U] = (IData)(((((QData)((IData)(
                                                                   vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
                                                                   [1U]
                                                                   [1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
                                                                    [0U]
                                                                    [2U]))) 
                                                 >> 0x20U));
    vlSelf->top_ws_tb__DOT__out_c[2U] = vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
        [2U][0U];
    vlSelf->top_ws_tb__DOT__dut__DOT__skewed_a = ((0xff0000ffU 
                                                   & vlSelf->top_ws_tb__DOT__dut__DOT__skewed_a) 
                                                  | ((vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
                                                      [2U]
                                                      [1U] 
                                                      << 0x10U) 
                                                     | (vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
                                                        [1U]
                                                        [0U] 
                                                        << 8U)));
    vlSelf->top_ws_tb__DOT__dut__DOT__skewed_a = ((0xffffffU 
                                                   & vlSelf->top_ws_tb__DOT__dut__DOT__skewed_a) 
                                                  | (vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
                                                     [3U]
                                                     [2U] 
                                                     << 0x18U));
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[3U][4U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[3U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[3U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[3U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[2U][4U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[2U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[2U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[2U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[1U][4U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[1U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[1U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[1U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[0U][4U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[0U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[0U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[0U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[4U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[4U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[4U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[4U][0U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[3U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[3U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[3U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[3U][0U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[2U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[2U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[2U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[2U][0U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[1U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[1U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[1U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[1U][0U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[0U] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                    [4U][1U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                     [4U][0U]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[1U] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                     [4U][1U])) << 0x20U) 
                    | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                      [4U][0U]))) >> 0x20U));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[2U] 
        = (IData)((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                    [4U][3U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                     [4U][2U]))));
    vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[3U] 
        = (IData)(((((QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                     [4U][3U])) << 0x20U) 
                    | (QData)((IData)(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                      [4U][2U]))) >> 0x20U));
    vlSelf->top_ws_tb__DOT__out_c[3U] = vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[3U];
}

void Vtop_ws_tb___024root___eval_nba(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_ws_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_ws_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
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
