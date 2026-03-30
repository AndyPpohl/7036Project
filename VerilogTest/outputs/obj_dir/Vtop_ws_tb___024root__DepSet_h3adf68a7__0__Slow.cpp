// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_ws_tb.h for the primary calling header

#include "Vtop_ws_tb__pch.h"
#include "Vtop_ws_tb___024root.h"

VL_ATTR_COLD void Vtop_ws_tb___024root___eval_static__TOP(Vtop_ws_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_ws_tb___024root___eval_static(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_static\n"); );
    // Body
    Vtop_ws_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop_ws_tb___024root___eval_static__TOP(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top_ws_tb__DOT__clk = 0U;
    vlSelf->top_ws_tb__DOT__rst_n = 0U;
}

VL_ATTR_COLD void Vtop_ws_tb___024root___eval_initial__TOP(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[0U][0U] = 0U;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[0U][1U] = 0U;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[0U][2U] = 0U;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[0U][3U] = 0U;
}

VL_ATTR_COLD void Vtop_ws_tb___024root___eval_final(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ws_tb___024root___dump_triggers__stl(Vtop_ws_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_ws_tb___024root___eval_phase__stl(Vtop_ws_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_ws_tb___024root___eval_settle(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop_ws_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("source/top_ws_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_ws_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ws_tb___024root___dump_triggers__stl(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_ws_tb___024root___stl_sequent__TOP__0(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
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
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[0U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[0U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[0U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[0U][4U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[1U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[1U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[1U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[1U][4U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[2U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[2U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[2U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[2U][4U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[3U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[3U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[3U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[3U][4U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[1U][0U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[1U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[1U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[1U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[2U][0U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[2U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[2U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[2U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[3U][0U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[3U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[3U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[3U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[4U][0U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[4U][1U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[4U][2U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum;
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[4U][3U] 
        = vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum;
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
    vlSelf->top_ws_tb__DOT__dut__DOT__skewed_a = ((0xffffff00U 
                                                   & vlSelf->top_ws_tb__DOT__dut__DOT__skewed_a) 
                                                  | (0xffU 
                                                     & vlSelf->top_ws_tb__DOT__in_a));
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
    vlSelf->top_ws_tb__DOT__out_c[3U] = vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum[3U];
}

VL_ATTR_COLD void Vtop_ws_tb___024root___eval_stl(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_ws_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtop_ws_tb___024root___eval_triggers__stl(Vtop_ws_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtop_ws_tb___024root___eval_phase__stl(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_ws_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_ws_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ws_tb___024root___dump_triggers__act(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge top_ws_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ws_tb___024root___dump_triggers__nba(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge top_ws_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_ws_tb___024root___ctor_var_reset(Vtop_ws_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->top_ws_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top_ws_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->top_ws_tb__DOT__load_weight = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top_ws_tb__DOT__weights_in);
    vlSelf->top_ws_tb__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->top_ws_tb__DOT__in_a = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->top_ws_tb__DOT__out_c);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top_ws_tb__DOT__A[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top_ws_tb__DOT__B[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top_ws_tb__DOT__C_expected[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top_ws_tb__DOT__C_got[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__k = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__r = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__c = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->top_ws_tb__DOT__dut__DOT__sr_a[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->top_ws_tb__DOT__dut__DOT__skewed_a = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->top_ws_tb__DOT__dut__DOT__sr_c[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->top_ws_tb__DOT__dut__DOT__ctr = VL_RAND_RESET_I(4);
    vlSelf->top_ws_tb__DOT__dut__DOT__counting = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum = VL_RAND_RESET_I(32);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__top_ws_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
