// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmac_array_tb.h for the primary calling header

#include "Vmac_array_tb__pch.h"
#include "Vmac_array_tb___024root.h"

VL_ATTR_COLD void Vmac_array_tb___024root___eval_static__TOP(Vmac_array_tb___024root* vlSelf);

VL_ATTR_COLD void Vmac_array_tb___024root___eval_static(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_static\n"); );
    // Body
    Vmac_array_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vmac_array_tb___024root___eval_static__TOP(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->mac_array_tb__DOT__clk = 0U;
    vlSelf->mac_array_tb__DOT__nrst = 1U;
}

VL_ATTR_COLD void Vmac_array_tb___024root___eval_final(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_array_tb___024root___dump_triggers__stl(Vmac_array_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmac_array_tb___024root___eval_phase__stl(Vmac_array_tb___024root* vlSelf);

VL_ATTR_COLD void Vmac_array_tb___024root___eval_settle(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_settle\n"); );
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
            Vmac_array_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("source/mac_array_tb.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmac_array_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_array_tb___024root___dump_triggers__stl(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmac_array_tb___024root___stl_sequent__TOP__0(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->mac_array_tb__DOT__dut__DOT__lw_skewed[0U] 
        = vlSelf->mac_array_tb__DOT__load_weight;
    vlSelf->mac_array_tb__DOT__dut__DOT__lw_skewed[1U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__lw_d1;
    vlSelf->mac_array_tb__DOT__dut__DOT__ain_skewed[0U] 
        = vlSelf->mac_array_tb__DOT__ain[0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__ain_skewed[1U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__skew_row__BRA__1__KET____DOT__ain_skew_chain
        [0U];
    vlSelf->mac_array_tb__DOT__dut__DOT__w_sig[0U][0U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__w_out_reg;
    vlSelf->mac_array_tb__DOT__dut__DOT__w_sig[0U][1U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__w_out_reg;
    vlSelf->mac_array_tb__DOT__dut__DOT__w_sig[1U][0U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__w_out_reg;
    vlSelf->mac_array_tb__DOT__dut__DOT__w_sig[1U][1U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__w_out_reg;
    vlSelf->mac_array_tb__DOT__dut__DOT__psum_sig[0U][0U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__psum_reg;
    vlSelf->mac_array_tb__DOT__dut__DOT__a_sig[0U][0U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__a_out_reg;
    vlSelf->mac_array_tb__DOT__dut__DOT__psum_sig[0U][1U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__psum_reg;
    vlSelf->mac_array_tb__DOT__dut__DOT__a_sig[0U][1U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__a_out_reg;
    vlSelf->mac_array_tb__DOT__dut__DOT__psum_sig[1U][0U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__psum_reg;
    vlSelf->mac_array_tb__DOT__dut__DOT__a_sig[1U][0U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__a_out_reg;
    vlSelf->mac_array_tb__DOT__dut__DOT__psum_sig[1U][1U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__psum_reg;
    vlSelf->mac_array_tb__DOT__dut__DOT__a_sig[1U][1U] 
        = vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__a_out_reg;
    vlSelf->mac_array_tb__DOT__cout[0U] = vlSelf->mac_array_tb__DOT__dut__DOT__psum_sig
        [1U][0U];
    vlSelf->mac_array_tb__DOT__cout[1U] = vlSelf->mac_array_tb__DOT__dut__DOT__psum_sig
        [1U][1U];
    vlSelf->mac_array_tb__DOT__aout[0U] = vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
        [0U][1U];
    vlSelf->mac_array_tb__DOT__aout[1U] = vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
        [1U][1U];
}

VL_ATTR_COLD void Vmac_array_tb___024root___eval_stl(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vmac_array_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vmac_array_tb___024root___eval_triggers__stl(Vmac_array_tb___024root* vlSelf);

VL_ATTR_COLD bool Vmac_array_tb___024root___eval_phase__stl(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmac_array_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vmac_array_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_array_tb___024root___dump_triggers__act(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge mac_array_tb.clk or negedge mac_array_tb.nrst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge mac_array_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_array_tb___024root___dump_triggers__nba(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge mac_array_tb.clk or negedge mac_array_tb.nrst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge mac_array_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmac_array_tb___024root___ctor_var_reset(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->mac_array_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->mac_array_tb__DOT__nrst = VL_RAND_RESET_I(1);
    vlSelf->mac_array_tb__DOT__load_weight = VL_RAND_RESET_I(1);
    vlSelf->mac_array_tb__DOT__clear_psum = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__ain[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__win[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__cin[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__aout[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__cout[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->mac_array_tb__DOT__A[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->mac_array_tb__DOT__B[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->mac_array_tb__DOT__C_sw[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->mac_array_tb__DOT__C_hw[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__valid_in_row[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mac_array_tb__DOT__flush_cycles = VL_RAND_RESET_I(32);
    vlSelf->mac_array_tb__DOT__cycle_count = VL_RAND_RESET_I(32);
    vlSelf->mac_array_tb__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->mac_array_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j = 0;
    vlSelf->mac_array_tb__DOT__unnamedblk8__DOT__col = 0;
    vlSelf->mac_array_tb__DOT__unnamedblk9__DOT__row = 0;
    vlSelf->mac_array_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__col = 0;
    vlSelf->mac_array_tb__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__k = 0;
    vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__unnamedblk13__DOT__r = 0;
    vlSelf->mac_array_tb__DOT__unnamedblk14__DOT__i = 0;
    vlSelf->mac_array_tb__DOT__unnamedblk14__DOT__unnamedblk15__DOT__j = 0;
    vlSelf->mac_array_tb__DOT__unnamedblk16__DOT__i = 0;
    vlSelf->mac_array_tb__DOT__unnamedblk16__DOT__unnamedblk17__DOT__j = 0;
    vlSelf->mac_array_tb__DOT__unnamedblk18__DOT__i = 0;
    vlSelf->mac_array_tb__DOT__unnamedblk18__DOT__unnamedblk19__DOT__j = 0;
    vlSelf->mac_array_tb__DOT__unnamedblk20__DOT__i = 0;
    vlSelf->mac_array_tb__DOT__unnamedblk20__DOT__unnamedblk21__DOT__j = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__dut__DOT__ain_skewed[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__dut__DOT__lw_skewed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__lw_pipe = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->mac_array_tb__DOT__dut__DOT__a_sig[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->mac_array_tb__DOT__dut__DOT__w_sig[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->mac_array_tb__DOT__dut__DOT__psum_sig[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__lw_d1 = VL_RAND_RESET_I(1);
    vlSelf->mac_array_tb__DOT__dut__DOT__lw_d2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->mac_array_tb__DOT__dut__DOT__skew_row__BRA__1__KET____DOT__ain_skew_chain[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__psum_pipe1 = VL_RAND_RESET_I(32);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__psum_pipe1 = VL_RAND_RESET_I(32);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__psum_pipe1 = VL_RAND_RESET_I(32);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__psum_pipe1 = VL_RAND_RESET_I(32);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__w_out_reg = VL_RAND_RESET_I(16);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__valid_reg = VL_RAND_RESET_I(1);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__psum_reg = VL_RAND_RESET_I(32);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__a_out_reg = VL_RAND_RESET_I(16);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__w_out_reg = VL_RAND_RESET_I(16);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__valid_reg = VL_RAND_RESET_I(1);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__psum_reg = VL_RAND_RESET_I(32);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__a_out_reg = VL_RAND_RESET_I(16);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__w_out_reg = VL_RAND_RESET_I(16);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__valid_reg = VL_RAND_RESET_I(1);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__psum_reg = VL_RAND_RESET_I(32);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__a_out_reg = VL_RAND_RESET_I(16);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__w_out_reg = VL_RAND_RESET_I(16);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__valid_reg = VL_RAND_RESET_I(1);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__psum_reg = VL_RAND_RESET_I(32);
    vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__a_out_reg = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__mac_array_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mac_array_tb__DOT__nrst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
