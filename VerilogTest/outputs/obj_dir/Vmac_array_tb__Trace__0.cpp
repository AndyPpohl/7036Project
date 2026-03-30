// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmac_array_tb__Syms.h"


void Vmac_array_tb___024root__trace_chg_0_sub_0(Vmac_array_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmac_array_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root__trace_chg_0\n"); );
    // Init
    Vmac_array_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmac_array_tb___024root*>(voidSelf);
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmac_array_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmac_array_tb___024root__trace_chg_0_sub_0(Vmac_array_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->mac_array_tb__DOT__nrst));
        bufp->chgBit(oldp+1,(vlSelf->mac_array_tb__DOT__load_weight));
        bufp->chgBit(oldp+2,(vlSelf->mac_array_tb__DOT__clear_psum));
        bufp->chgSData(oldp+3,(vlSelf->mac_array_tb__DOT__ain[0]),16);
        bufp->chgSData(oldp+4,(vlSelf->mac_array_tb__DOT__ain[1]),16);
        bufp->chgSData(oldp+5,(vlSelf->mac_array_tb__DOT__win[0]),16);
        bufp->chgSData(oldp+6,(vlSelf->mac_array_tb__DOT__win[1]),16);
        bufp->chgIData(oldp+7,(vlSelf->mac_array_tb__DOT__cin[0]),32);
        bufp->chgIData(oldp+8,(vlSelf->mac_array_tb__DOT__cin[1]),32);
        bufp->chgSData(oldp+9,(vlSelf->mac_array_tb__DOT__A
                               [0U][0U]),16);
        bufp->chgSData(oldp+10,(vlSelf->mac_array_tb__DOT__A
                                [0U][1U]),16);
        bufp->chgSData(oldp+11,(vlSelf->mac_array_tb__DOT__A
                                [1U][0U]),16);
        bufp->chgSData(oldp+12,(vlSelf->mac_array_tb__DOT__A
                                [1U][1U]),16);
        bufp->chgSData(oldp+13,(vlSelf->mac_array_tb__DOT__B
                                [0U][0U]),16);
        bufp->chgSData(oldp+14,(vlSelf->mac_array_tb__DOT__B
                                [0U][1U]),16);
        bufp->chgSData(oldp+15,(vlSelf->mac_array_tb__DOT__B
                                [1U][0U]),16);
        bufp->chgSData(oldp+16,(vlSelf->mac_array_tb__DOT__B
                                [1U][1U]),16);
        bufp->chgIData(oldp+17,(vlSelf->mac_array_tb__DOT__C_sw
                                [0U][0U]),32);
        bufp->chgIData(oldp+18,(vlSelf->mac_array_tb__DOT__C_sw
                                [0U][1U]),32);
        bufp->chgIData(oldp+19,(vlSelf->mac_array_tb__DOT__C_sw
                                [1U][0U]),32);
        bufp->chgIData(oldp+20,(vlSelf->mac_array_tb__DOT__C_sw
                                [1U][1U]),32);
        bufp->chgIData(oldp+21,(vlSelf->mac_array_tb__DOT__C_hw
                                [0U][0U]),32);
        bufp->chgIData(oldp+22,(vlSelf->mac_array_tb__DOT__C_hw
                                [0U][1U]),32);
        bufp->chgIData(oldp+23,(vlSelf->mac_array_tb__DOT__C_hw
                                [1U][0U]),32);
        bufp->chgIData(oldp+24,(vlSelf->mac_array_tb__DOT__C_hw
                                [1U][1U]),32);
        bufp->chgSData(oldp+25,(vlSelf->mac_array_tb__DOT__ain
                                [0U]),16);
        bufp->chgSData(oldp+26,(vlSelf->mac_array_tb__DOT__win
                                [0U]),16);
        bufp->chgIData(oldp+27,(vlSelf->mac_array_tb__DOT__cin
                                [0U]),32);
        bufp->chgSData(oldp+28,(vlSelf->mac_array_tb__DOT__win
                                [1U]),16);
        bufp->chgIData(oldp+29,(vlSelf->mac_array_tb__DOT__cin
                                [1U]),32);
        bufp->chgIData(oldp+30,(vlSelf->mac_array_tb__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+31,(vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__k),32);
        bufp->chgIData(oldp+32,(vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__unnamedblk13__DOT__r),32);
        bufp->chgIData(oldp+33,(vlSelf->mac_array_tb__DOT__unnamedblk14__DOT__i),32);
        bufp->chgIData(oldp+34,(vlSelf->mac_array_tb__DOT__unnamedblk14__DOT__unnamedblk15__DOT__j),32);
        bufp->chgIData(oldp+35,(vlSelf->mac_array_tb__DOT__unnamedblk16__DOT__i),32);
        bufp->chgIData(oldp+36,(vlSelf->mac_array_tb__DOT__unnamedblk16__DOT__unnamedblk17__DOT__j),32);
        bufp->chgIData(oldp+37,(vlSelf->mac_array_tb__DOT__unnamedblk18__DOT__i),32);
        bufp->chgIData(oldp+38,(vlSelf->mac_array_tb__DOT__unnamedblk18__DOT__unnamedblk19__DOT__j),32);
        bufp->chgIData(oldp+39,(vlSelf->mac_array_tb__DOT__unnamedblk20__DOT__i),32);
        bufp->chgIData(oldp+40,(vlSelf->mac_array_tb__DOT__unnamedblk20__DOT__unnamedblk21__DOT__j),32);
        bufp->chgIData(oldp+41,(vlSelf->mac_array_tb__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+42,(vlSelf->mac_array_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
        bufp->chgIData(oldp+43,(vlSelf->mac_array_tb__DOT__unnamedblk8__DOT__col),32);
        bufp->chgIData(oldp+44,(vlSelf->mac_array_tb__DOT__unnamedblk9__DOT__row),32);
        bufp->chgIData(oldp+45,(vlSelf->mac_array_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__col),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+46,(vlSelf->mac_array_tb__DOT__aout[0]),16);
        bufp->chgSData(oldp+47,(vlSelf->mac_array_tb__DOT__aout[1]),16);
        bufp->chgIData(oldp+48,(vlSelf->mac_array_tb__DOT__cout[0]),32);
        bufp->chgIData(oldp+49,(vlSelf->mac_array_tb__DOT__cout[1]),32);
        bufp->chgIData(oldp+50,(vlSelf->mac_array_tb__DOT__cycle_count),32);
        bufp->chgSData(oldp+51,(vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
                                [0U][0U]),16);
        bufp->chgSData(oldp+52,(vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
                                [0U][1U]),16);
        bufp->chgSData(oldp+53,(vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
                                [1U][0U]),16);
        bufp->chgSData(oldp+54,(vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
                                [1U][1U]),16);
        bufp->chgSData(oldp+55,(vlSelf->mac_array_tb__DOT__dut__DOT__w_sig
                                [0U][0U]),16);
        bufp->chgSData(oldp+56,(vlSelf->mac_array_tb__DOT__dut__DOT__w_sig
                                [0U][1U]),16);
        bufp->chgSData(oldp+57,(vlSelf->mac_array_tb__DOT__dut__DOT__w_sig
                                [1U][0U]),16);
        bufp->chgSData(oldp+58,(vlSelf->mac_array_tb__DOT__dut__DOT__w_sig
                                [1U][1U]),16);
        bufp->chgIData(oldp+59,(vlSelf->mac_array_tb__DOT__dut__DOT__psum_sig
                                [0U][0U]),32);
        bufp->chgIData(oldp+60,(vlSelf->mac_array_tb__DOT__dut__DOT__psum_sig
                                [0U][1U]),32);
        bufp->chgIData(oldp+61,(vlSelf->mac_array_tb__DOT__dut__DOT__psum_sig
                                [1U][0U]),32);
        bufp->chgIData(oldp+62,(vlSelf->mac_array_tb__DOT__dut__DOT__psum_sig
                                [1U][1U]),32);
        bufp->chgBit(oldp+63,(vlSelf->mac_array_tb__DOT__dut__DOT__lw_d1));
        bufp->chgBit(oldp+64,(vlSelf->mac_array_tb__DOT__dut__DOT__lw_d2));
        bufp->chgSData(oldp+65,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__a_out_reg),16);
        bufp->chgSData(oldp+66,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__w_out_reg),16);
        bufp->chgIData(oldp+67,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__psum_reg),32);
        bufp->chgSData(oldp+68,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__weight_reg),16);
        bufp->chgSData(oldp+69,(vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
                                [0U][0U]),16);
        bufp->chgSData(oldp+70,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__a_out_reg),16);
        bufp->chgSData(oldp+71,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__w_out_reg),16);
        bufp->chgIData(oldp+72,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__psum_reg),32);
        bufp->chgSData(oldp+73,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__weight_reg),16);
        bufp->chgIData(oldp+74,((vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
                                 [0U][0U] * (IData)(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__weight_reg))),32);
        bufp->chgSData(oldp+75,(vlSelf->mac_array_tb__DOT__dut__DOT__skew_row__BRA__1__KET____DOT__ain_skew_chain
                                [0U]),16);
        bufp->chgSData(oldp+76,(vlSelf->mac_array_tb__DOT__dut__DOT__w_sig
                                [0U][0U]),16);
        bufp->chgIData(oldp+77,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__psum_pipe1),32);
        bufp->chgSData(oldp+78,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__a_out_reg),16);
        bufp->chgSData(oldp+79,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__w_out_reg),16);
        bufp->chgIData(oldp+80,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__psum_reg),32);
        bufp->chgSData(oldp+81,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__weight_reg),16);
        bufp->chgIData(oldp+82,((vlSelf->mac_array_tb__DOT__dut__DOT__skew_row__BRA__1__KET____DOT__ain_skew_chain
                                 [0U] * (IData)(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__weight_reg))),32);
        bufp->chgSData(oldp+83,(vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
                                [1U][0U]),16);
        bufp->chgSData(oldp+84,(vlSelf->mac_array_tb__DOT__dut__DOT__w_sig
                                [0U][1U]),16);
        bufp->chgIData(oldp+85,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__psum_pipe1),32);
        bufp->chgSData(oldp+86,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__a_out_reg),16);
        bufp->chgSData(oldp+87,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__w_out_reg),16);
        bufp->chgIData(oldp+88,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__psum_reg),32);
        bufp->chgSData(oldp+89,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__weight_reg),16);
        bufp->chgIData(oldp+90,((vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
                                 [1U][0U] * (IData)(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__weight_reg))),32);
        bufp->chgSData(oldp+91,(vlSelf->mac_array_tb__DOT__dut__DOT__skew_row__BRA__1__KET____DOT__ain_skew_chain[0]),16);
    }
    bufp->chgBit(oldp+92,(vlSelf->mac_array_tb__DOT__clk));
    bufp->chgSData(oldp+93,(vlSelf->mac_array_tb__DOT__dut__DOT__ain_skewed[0]),16);
    bufp->chgSData(oldp+94,(vlSelf->mac_array_tb__DOT__dut__DOT__ain_skewed[1]),16);
    bufp->chgBit(oldp+95,(vlSelf->mac_array_tb__DOT__dut__DOT__lw_skewed[0]));
    bufp->chgBit(oldp+96,(vlSelf->mac_array_tb__DOT__dut__DOT__lw_skewed[1]));
    bufp->chgIData(oldp+97,((vlSelf->mac_array_tb__DOT__ain
                             [0U] * (IData)(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__weight_reg))),32);
}

void Vmac_array_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root__trace_cleanup\n"); );
    // Init
    Vmac_array_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmac_array_tb___024root*>(voidSelf);
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
