// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_ws_tb__Syms.h"


void Vtop_ws_tb___024root__trace_chg_0_sub_0(Vtop_ws_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_ws_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root__trace_chg_0\n"); );
    // Init
    Vtop_ws_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_ws_tb___024root*>(voidSelf);
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_ws_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_ws_tb___024root__trace_chg_0_sub_0(Vtop_ws_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+0,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                               [0U][0U]),32);
        bufp->chgIData(oldp+1,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                               [0U][0xaU]),32);
        bufp->chgIData(oldp+2,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                               [0U][0xbU]),32);
        bufp->chgIData(oldp+3,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                               [0U][0xcU]),32);
        bufp->chgIData(oldp+4,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                               [0U][0xdU]),32);
        bufp->chgIData(oldp+5,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                               [0U][1U]),32);
        bufp->chgIData(oldp+6,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                               [0U][2U]),32);
        bufp->chgIData(oldp+7,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                               [0U][3U]),32);
        bufp->chgIData(oldp+8,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                               [0U][4U]),32);
        bufp->chgIData(oldp+9,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                               [0U][5U]),32);
        bufp->chgIData(oldp+10,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0U][6U]),32);
        bufp->chgIData(oldp+11,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0U][7U]),32);
        bufp->chgIData(oldp+12,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0U][8U]),32);
        bufp->chgIData(oldp+13,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0U][9U]),32);
        bufp->chgIData(oldp+14,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xaU][0U]),32);
        bufp->chgIData(oldp+15,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xaU][0xaU]),32);
        bufp->chgIData(oldp+16,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xaU][0xbU]),32);
        bufp->chgIData(oldp+17,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xaU][0xcU]),32);
        bufp->chgIData(oldp+18,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xaU][0xdU]),32);
        bufp->chgIData(oldp+19,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xaU][1U]),32);
        bufp->chgIData(oldp+20,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xaU][2U]),32);
        bufp->chgIData(oldp+21,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xaU][3U]),32);
        bufp->chgIData(oldp+22,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xaU][4U]),32);
        bufp->chgIData(oldp+23,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xaU][5U]),32);
        bufp->chgIData(oldp+24,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xaU][6U]),32);
        bufp->chgIData(oldp+25,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xaU][7U]),32);
        bufp->chgIData(oldp+26,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xaU][8U]),32);
        bufp->chgIData(oldp+27,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xaU][9U]),32);
        bufp->chgIData(oldp+28,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xbU][0U]),32);
        bufp->chgIData(oldp+29,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xbU][0xaU]),32);
        bufp->chgIData(oldp+30,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xbU][0xbU]),32);
        bufp->chgIData(oldp+31,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xbU][0xcU]),32);
        bufp->chgIData(oldp+32,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xbU][0xdU]),32);
        bufp->chgIData(oldp+33,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xbU][1U]),32);
        bufp->chgIData(oldp+34,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xbU][2U]),32);
        bufp->chgIData(oldp+35,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xbU][3U]),32);
        bufp->chgIData(oldp+36,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xbU][4U]),32);
        bufp->chgIData(oldp+37,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xbU][5U]),32);
        bufp->chgIData(oldp+38,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xbU][6U]),32);
        bufp->chgIData(oldp+39,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xbU][7U]),32);
        bufp->chgIData(oldp+40,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xbU][8U]),32);
        bufp->chgIData(oldp+41,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xbU][9U]),32);
        bufp->chgIData(oldp+42,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xcU][0U]),32);
        bufp->chgIData(oldp+43,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xcU][0xaU]),32);
        bufp->chgIData(oldp+44,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xcU][0xbU]),32);
        bufp->chgIData(oldp+45,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xcU][0xcU]),32);
        bufp->chgIData(oldp+46,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xcU][0xdU]),32);
        bufp->chgIData(oldp+47,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xcU][1U]),32);
        bufp->chgIData(oldp+48,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xcU][2U]),32);
        bufp->chgIData(oldp+49,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xcU][3U]),32);
        bufp->chgIData(oldp+50,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xcU][4U]),32);
        bufp->chgIData(oldp+51,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xcU][5U]),32);
        bufp->chgIData(oldp+52,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xcU][6U]),32);
        bufp->chgIData(oldp+53,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xcU][7U]),32);
        bufp->chgIData(oldp+54,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xcU][8U]),32);
        bufp->chgIData(oldp+55,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xcU][9U]),32);
        bufp->chgIData(oldp+56,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xdU][0U]),32);
        bufp->chgIData(oldp+57,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xdU][0xaU]),32);
        bufp->chgIData(oldp+58,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xdU][0xbU]),32);
        bufp->chgIData(oldp+59,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xdU][0xcU]),32);
        bufp->chgIData(oldp+60,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xdU][0xdU]),32);
        bufp->chgIData(oldp+61,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xdU][1U]),32);
        bufp->chgIData(oldp+62,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xdU][2U]),32);
        bufp->chgIData(oldp+63,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xdU][3U]),32);
        bufp->chgIData(oldp+64,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xdU][4U]),32);
        bufp->chgIData(oldp+65,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xdU][5U]),32);
        bufp->chgIData(oldp+66,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xdU][6U]),32);
        bufp->chgIData(oldp+67,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xdU][7U]),32);
        bufp->chgIData(oldp+68,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xdU][8U]),32);
        bufp->chgIData(oldp+69,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [0xdU][9U]),32);
        bufp->chgIData(oldp+70,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [1U][0U]),32);
        bufp->chgIData(oldp+71,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [1U][0xaU]),32);
        bufp->chgIData(oldp+72,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [1U][0xbU]),32);
        bufp->chgIData(oldp+73,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [1U][0xcU]),32);
        bufp->chgIData(oldp+74,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [1U][0xdU]),32);
        bufp->chgIData(oldp+75,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [1U][1U]),32);
        bufp->chgIData(oldp+76,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [1U][2U]),32);
        bufp->chgIData(oldp+77,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [1U][3U]),32);
        bufp->chgIData(oldp+78,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [1U][4U]),32);
        bufp->chgIData(oldp+79,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [1U][5U]),32);
        bufp->chgIData(oldp+80,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [1U][6U]),32);
        bufp->chgIData(oldp+81,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [1U][7U]),32);
        bufp->chgIData(oldp+82,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [1U][8U]),32);
        bufp->chgIData(oldp+83,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [1U][9U]),32);
        bufp->chgIData(oldp+84,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [2U][0U]),32);
        bufp->chgIData(oldp+85,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [2U][0xaU]),32);
        bufp->chgIData(oldp+86,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [2U][0xbU]),32);
        bufp->chgIData(oldp+87,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [2U][0xcU]),32);
        bufp->chgIData(oldp+88,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [2U][0xdU]),32);
        bufp->chgIData(oldp+89,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [2U][1U]),32);
        bufp->chgIData(oldp+90,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [2U][2U]),32);
        bufp->chgIData(oldp+91,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [2U][3U]),32);
        bufp->chgIData(oldp+92,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [2U][4U]),32);
        bufp->chgIData(oldp+93,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [2U][5U]),32);
        bufp->chgIData(oldp+94,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [2U][6U]),32);
        bufp->chgIData(oldp+95,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [2U][7U]),32);
        bufp->chgIData(oldp+96,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [2U][8U]),32);
        bufp->chgIData(oldp+97,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [2U][9U]),32);
        bufp->chgIData(oldp+98,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [3U][0U]),32);
        bufp->chgIData(oldp+99,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                [3U][0xaU]),32);
        bufp->chgIData(oldp+100,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [3U][0xbU]),32);
        bufp->chgIData(oldp+101,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [3U][0xcU]),32);
        bufp->chgIData(oldp+102,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [3U][0xdU]),32);
        bufp->chgIData(oldp+103,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [3U][1U]),32);
        bufp->chgIData(oldp+104,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [3U][2U]),32);
        bufp->chgIData(oldp+105,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [3U][3U]),32);
        bufp->chgIData(oldp+106,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [3U][4U]),32);
        bufp->chgIData(oldp+107,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [3U][5U]),32);
        bufp->chgIData(oldp+108,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [3U][6U]),32);
        bufp->chgIData(oldp+109,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [3U][7U]),32);
        bufp->chgIData(oldp+110,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [3U][8U]),32);
        bufp->chgIData(oldp+111,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [3U][9U]),32);
        bufp->chgIData(oldp+112,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [4U][0U]),32);
        bufp->chgIData(oldp+113,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [4U][0xaU]),32);
        bufp->chgIData(oldp+114,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [4U][0xbU]),32);
        bufp->chgIData(oldp+115,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [4U][0xcU]),32);
        bufp->chgIData(oldp+116,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [4U][0xdU]),32);
        bufp->chgIData(oldp+117,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [4U][1U]),32);
        bufp->chgIData(oldp+118,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [4U][2U]),32);
        bufp->chgIData(oldp+119,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [4U][3U]),32);
        bufp->chgIData(oldp+120,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [4U][4U]),32);
        bufp->chgIData(oldp+121,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [4U][5U]),32);
        bufp->chgIData(oldp+122,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [4U][6U]),32);
        bufp->chgIData(oldp+123,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [4U][7U]),32);
        bufp->chgIData(oldp+124,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [4U][8U]),32);
        bufp->chgIData(oldp+125,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [4U][9U]),32);
        bufp->chgIData(oldp+126,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [5U][0U]),32);
        bufp->chgIData(oldp+127,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [5U][0xaU]),32);
        bufp->chgIData(oldp+128,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [5U][0xbU]),32);
        bufp->chgIData(oldp+129,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [5U][0xcU]),32);
        bufp->chgIData(oldp+130,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [5U][0xdU]),32);
        bufp->chgIData(oldp+131,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [5U][1U]),32);
        bufp->chgIData(oldp+132,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [5U][2U]),32);
        bufp->chgIData(oldp+133,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [5U][3U]),32);
        bufp->chgIData(oldp+134,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [5U][4U]),32);
        bufp->chgIData(oldp+135,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [5U][5U]),32);
        bufp->chgIData(oldp+136,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [5U][6U]),32);
        bufp->chgIData(oldp+137,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [5U][7U]),32);
        bufp->chgIData(oldp+138,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [5U][8U]),32);
        bufp->chgIData(oldp+139,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [5U][9U]),32);
        bufp->chgIData(oldp+140,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [6U][0U]),32);
        bufp->chgIData(oldp+141,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [6U][0xaU]),32);
        bufp->chgIData(oldp+142,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [6U][0xbU]),32);
        bufp->chgIData(oldp+143,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [6U][0xcU]),32);
        bufp->chgIData(oldp+144,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [6U][0xdU]),32);
        bufp->chgIData(oldp+145,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [6U][1U]),32);
        bufp->chgIData(oldp+146,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [6U][2U]),32);
        bufp->chgIData(oldp+147,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [6U][3U]),32);
        bufp->chgIData(oldp+148,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [6U][4U]),32);
        bufp->chgIData(oldp+149,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [6U][5U]),32);
        bufp->chgIData(oldp+150,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [6U][6U]),32);
        bufp->chgIData(oldp+151,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [6U][7U]),32);
        bufp->chgIData(oldp+152,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [6U][8U]),32);
        bufp->chgIData(oldp+153,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [6U][9U]),32);
        bufp->chgIData(oldp+154,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [7U][0U]),32);
        bufp->chgIData(oldp+155,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [7U][0xaU]),32);
        bufp->chgIData(oldp+156,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [7U][0xbU]),32);
        bufp->chgIData(oldp+157,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [7U][0xcU]),32);
        bufp->chgIData(oldp+158,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [7U][0xdU]),32);
        bufp->chgIData(oldp+159,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [7U][1U]),32);
        bufp->chgIData(oldp+160,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [7U][2U]),32);
        bufp->chgIData(oldp+161,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [7U][3U]),32);
        bufp->chgIData(oldp+162,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [7U][4U]),32);
        bufp->chgIData(oldp+163,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [7U][5U]),32);
        bufp->chgIData(oldp+164,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [7U][6U]),32);
        bufp->chgIData(oldp+165,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [7U][7U]),32);
        bufp->chgIData(oldp+166,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [7U][8U]),32);
        bufp->chgIData(oldp+167,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [7U][9U]),32);
        bufp->chgIData(oldp+168,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [8U][0U]),32);
        bufp->chgIData(oldp+169,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [8U][0xaU]),32);
        bufp->chgIData(oldp+170,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [8U][0xbU]),32);
        bufp->chgIData(oldp+171,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [8U][0xcU]),32);
        bufp->chgIData(oldp+172,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [8U][0xdU]),32);
        bufp->chgIData(oldp+173,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [8U][1U]),32);
        bufp->chgIData(oldp+174,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [8U][2U]),32);
        bufp->chgIData(oldp+175,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [8U][3U]),32);
        bufp->chgIData(oldp+176,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [8U][4U]),32);
        bufp->chgIData(oldp+177,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [8U][5U]),32);
        bufp->chgIData(oldp+178,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [8U][6U]),32);
        bufp->chgIData(oldp+179,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [8U][7U]),32);
        bufp->chgIData(oldp+180,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [8U][8U]),32);
        bufp->chgIData(oldp+181,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [8U][9U]),32);
        bufp->chgIData(oldp+182,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [9U][0U]),32);
        bufp->chgIData(oldp+183,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [9U][0xaU]),32);
        bufp->chgIData(oldp+184,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [9U][0xbU]),32);
        bufp->chgIData(oldp+185,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [9U][0xcU]),32);
        bufp->chgIData(oldp+186,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [9U][0xdU]),32);
        bufp->chgIData(oldp+187,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [9U][1U]),32);
        bufp->chgIData(oldp+188,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [9U][2U]),32);
        bufp->chgIData(oldp+189,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [9U][3U]),32);
        bufp->chgIData(oldp+190,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [9U][4U]),32);
        bufp->chgIData(oldp+191,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [9U][5U]),32);
        bufp->chgIData(oldp+192,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [9U][6U]),32);
        bufp->chgIData(oldp+193,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [9U][7U]),32);
        bufp->chgIData(oldp+194,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [9U][8U]),32);
        bufp->chgIData(oldp+195,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                                 [9U][9U]),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+196,(vlSelf->top_ws_tb__DOT__load_weight));
        bufp->chgWData(oldp+197,(vlSelf->top_ws_tb__DOT__weights_in),1568);
        bufp->chgIData(oldp+246,(vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r),32);
        bufp->chgCData(oldp+247,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0U])),8);
        bufp->chgCData(oldp+248,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+249,((vlSelf->top_ws_tb__DOT__weights_in[2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+250,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[3U])),8);
        bufp->chgCData(oldp+251,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+252,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+253,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+254,((vlSelf->top_ws_tb__DOT__weights_in[0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+255,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[1U])),8);
        bufp->chgCData(oldp+256,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+257,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+258,((vlSelf->top_ws_tb__DOT__weights_in[1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+259,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[2U])),8);
        bufp->chgCData(oldp+260,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+261,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x23U])),8);
        bufp->chgCData(oldp+262,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x25U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+263,((vlSelf->top_ws_tb__DOT__weights_in[0x25U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+264,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x26U])),8);
        bufp->chgCData(oldp+265,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x26U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+266,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x23U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+267,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x23U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+268,((vlSelf->top_ws_tb__DOT__weights_in[0x23U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+269,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x24U])),8);
        bufp->chgCData(oldp+270,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x24U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+271,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x24U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+272,((vlSelf->top_ws_tb__DOT__weights_in[0x24U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+273,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x25U])),8);
        bufp->chgCData(oldp+274,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x25U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+275,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x26U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+276,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x29U])),8);
        bufp->chgCData(oldp+277,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x29U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+278,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x29U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+279,((vlSelf->top_ws_tb__DOT__weights_in[0x29U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+280,((vlSelf->top_ws_tb__DOT__weights_in[0x26U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+281,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x27U])),8);
        bufp->chgCData(oldp+282,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x27U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+283,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x27U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+284,((vlSelf->top_ws_tb__DOT__weights_in[0x27U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+285,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x28U])),8);
        bufp->chgCData(oldp+286,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x28U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+287,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x28U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+288,((vlSelf->top_ws_tb__DOT__weights_in[0x28U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+289,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x2aU])),8);
        bufp->chgCData(oldp+290,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2cU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+291,((vlSelf->top_ws_tb__DOT__weights_in[0x2cU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+292,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x2dU])),8);
        bufp->chgCData(oldp+293,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2dU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+294,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2aU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+295,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2aU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+296,((vlSelf->top_ws_tb__DOT__weights_in[0x2aU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+297,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x2bU])),8);
        bufp->chgCData(oldp+298,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2bU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+299,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2bU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+300,((vlSelf->top_ws_tb__DOT__weights_in[0x2bU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+301,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x2cU])),8);
        bufp->chgCData(oldp+302,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2cU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+303,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2dU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+304,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x30U])),8);
        bufp->chgCData(oldp+305,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x30U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+306,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x30U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+307,((vlSelf->top_ws_tb__DOT__weights_in[0x30U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+308,((vlSelf->top_ws_tb__DOT__weights_in[0x2dU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+309,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x2eU])),8);
        bufp->chgCData(oldp+310,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2eU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+311,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2eU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+312,((vlSelf->top_ws_tb__DOT__weights_in[0x2eU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+313,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x2fU])),8);
        bufp->chgCData(oldp+314,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2fU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+315,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2fU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+316,((vlSelf->top_ws_tb__DOT__weights_in[0x2fU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+317,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+318,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[6U])),8);
        bufp->chgCData(oldp+319,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[6U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+320,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[6U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+321,((vlSelf->top_ws_tb__DOT__weights_in[6U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+322,((vlSelf->top_ws_tb__DOT__weights_in[3U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+323,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[4U])),8);
        bufp->chgCData(oldp+324,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[4U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+325,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[4U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+326,((vlSelf->top_ws_tb__DOT__weights_in[4U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+327,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[5U])),8);
        bufp->chgCData(oldp+328,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[5U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+329,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[5U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+330,((vlSelf->top_ws_tb__DOT__weights_in[5U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+331,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[7U])),8);
        bufp->chgCData(oldp+332,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[9U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+333,((vlSelf->top_ws_tb__DOT__weights_in[9U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+334,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xaU])),8);
        bufp->chgCData(oldp+335,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xaU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+336,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[7U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+337,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[7U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+338,((vlSelf->top_ws_tb__DOT__weights_in[7U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+339,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[8U])),8);
        bufp->chgCData(oldp+340,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[8U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+341,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[8U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+342,((vlSelf->top_ws_tb__DOT__weights_in[8U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+343,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[9U])),8);
        bufp->chgCData(oldp+344,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[9U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+345,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xaU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+346,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xdU])),8);
        bufp->chgCData(oldp+347,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xdU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+348,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xdU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+349,((vlSelf->top_ws_tb__DOT__weights_in[0xdU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+350,((vlSelf->top_ws_tb__DOT__weights_in[0xaU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+351,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xbU])),8);
        bufp->chgCData(oldp+352,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xbU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+353,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xbU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+354,((vlSelf->top_ws_tb__DOT__weights_in[0xbU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+355,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xcU])),8);
        bufp->chgCData(oldp+356,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xcU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+357,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xcU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+358,((vlSelf->top_ws_tb__DOT__weights_in[0xcU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+359,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xeU])),8);
        bufp->chgCData(oldp+360,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x10U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+361,((vlSelf->top_ws_tb__DOT__weights_in[0x10U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+362,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x11U])),8);
        bufp->chgCData(oldp+363,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x11U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+364,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xeU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+365,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xeU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+366,((vlSelf->top_ws_tb__DOT__weights_in[0xeU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+367,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xfU])),8);
        bufp->chgCData(oldp+368,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xfU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+369,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xfU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+370,((vlSelf->top_ws_tb__DOT__weights_in[0xfU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+371,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x10U])),8);
        bufp->chgCData(oldp+372,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x10U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+373,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x11U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+374,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x14U])),8);
        bufp->chgCData(oldp+375,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x14U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+376,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x14U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+377,((vlSelf->top_ws_tb__DOT__weights_in[0x14U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+378,((vlSelf->top_ws_tb__DOT__weights_in[0x11U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+379,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x12U])),8);
        bufp->chgCData(oldp+380,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x12U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+381,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x12U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+382,((vlSelf->top_ws_tb__DOT__weights_in[0x12U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+383,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x13U])),8);
        bufp->chgCData(oldp+384,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x13U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+385,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x13U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+386,((vlSelf->top_ws_tb__DOT__weights_in[0x13U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+387,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x15U])),8);
        bufp->chgCData(oldp+388,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x17U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+389,((vlSelf->top_ws_tb__DOT__weights_in[0x17U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+390,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x18U])),8);
        bufp->chgCData(oldp+391,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x18U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+392,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x15U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+393,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x15U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+394,((vlSelf->top_ws_tb__DOT__weights_in[0x15U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+395,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x16U])),8);
        bufp->chgCData(oldp+396,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x16U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+397,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x16U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+398,((vlSelf->top_ws_tb__DOT__weights_in[0x16U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+399,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x17U])),8);
        bufp->chgCData(oldp+400,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x17U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+401,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x18U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+402,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x1bU])),8);
        bufp->chgCData(oldp+403,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1bU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+404,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1bU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+405,((vlSelf->top_ws_tb__DOT__weights_in[0x1bU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+406,((vlSelf->top_ws_tb__DOT__weights_in[0x18U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+407,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x19U])),8);
        bufp->chgCData(oldp+408,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x19U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+409,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x19U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+410,((vlSelf->top_ws_tb__DOT__weights_in[0x19U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+411,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x1aU])),8);
        bufp->chgCData(oldp+412,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1aU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+413,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1aU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+414,((vlSelf->top_ws_tb__DOT__weights_in[0x1aU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+415,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x1cU])),8);
        bufp->chgCData(oldp+416,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1eU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+417,((vlSelf->top_ws_tb__DOT__weights_in[0x1eU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+418,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x1fU])),8);
        bufp->chgCData(oldp+419,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1fU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+420,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1cU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+421,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1cU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+422,((vlSelf->top_ws_tb__DOT__weights_in[0x1cU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+423,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x1dU])),8);
        bufp->chgCData(oldp+424,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1dU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+425,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1dU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+426,((vlSelf->top_ws_tb__DOT__weights_in[0x1dU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+427,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x1eU])),8);
        bufp->chgCData(oldp+428,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1eU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+429,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1fU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+430,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x22U])),8);
        bufp->chgCData(oldp+431,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x22U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+432,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x22U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+433,((vlSelf->top_ws_tb__DOT__weights_in[0x22U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+434,((vlSelf->top_ws_tb__DOT__weights_in[0x1fU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+435,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x20U])),8);
        bufp->chgCData(oldp+436,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x20U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+437,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x20U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+438,((vlSelf->top_ws_tb__DOT__weights_in[0x20U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+439,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x21U])),8);
        bufp->chgCData(oldp+440,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x21U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+441,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x21U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+442,((vlSelf->top_ws_tb__DOT__weights_in[0x21U] 
                                  >> 0x18U)),8);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[5U] 
                      | vlSelf->__Vm_traceActivity[6U]) 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgWData(oldp+443,(vlSelf->top_ws_tb__DOT__dut__DOT__skewed_a),112);
        bufp->chgCData(oldp+447,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0U][0U]),8);
        bufp->chgCData(oldp+448,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0U][0xaU]),8);
        bufp->chgCData(oldp+449,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0U][0xbU]),8);
        bufp->chgCData(oldp+450,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0U][0xcU]),8);
        bufp->chgCData(oldp+451,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0U][0xdU]),8);
        bufp->chgCData(oldp+452,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0U][1U]),8);
        bufp->chgCData(oldp+453,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0U][2U]),8);
        bufp->chgCData(oldp+454,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0U][3U]),8);
        bufp->chgCData(oldp+455,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0U][4U]),8);
        bufp->chgCData(oldp+456,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0U][5U]),8);
        bufp->chgCData(oldp+457,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0U][6U]),8);
        bufp->chgCData(oldp+458,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0U][7U]),8);
        bufp->chgCData(oldp+459,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0U][8U]),8);
        bufp->chgCData(oldp+460,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0U][9U]),8);
        bufp->chgCData(oldp+461,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xaU][0U]),8);
        bufp->chgCData(oldp+462,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xaU][0xaU]),8);
        bufp->chgCData(oldp+463,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xaU][0xbU]),8);
        bufp->chgCData(oldp+464,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xaU][0xcU]),8);
        bufp->chgCData(oldp+465,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xaU][0xdU]),8);
        bufp->chgCData(oldp+466,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xaU][1U]),8);
        bufp->chgCData(oldp+467,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xaU][2U]),8);
        bufp->chgCData(oldp+468,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xaU][3U]),8);
        bufp->chgCData(oldp+469,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xaU][4U]),8);
        bufp->chgCData(oldp+470,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xaU][5U]),8);
        bufp->chgCData(oldp+471,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xaU][6U]),8);
        bufp->chgCData(oldp+472,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xaU][7U]),8);
        bufp->chgCData(oldp+473,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xaU][8U]),8);
        bufp->chgCData(oldp+474,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xaU][9U]),8);
        bufp->chgCData(oldp+475,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xbU][0U]),8);
        bufp->chgCData(oldp+476,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xbU][0xaU]),8);
        bufp->chgCData(oldp+477,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xbU][0xbU]),8);
        bufp->chgCData(oldp+478,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xbU][0xcU]),8);
        bufp->chgCData(oldp+479,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xbU][0xdU]),8);
        bufp->chgCData(oldp+480,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xbU][1U]),8);
        bufp->chgCData(oldp+481,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xbU][2U]),8);
        bufp->chgCData(oldp+482,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xbU][3U]),8);
        bufp->chgCData(oldp+483,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xbU][4U]),8);
        bufp->chgCData(oldp+484,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xbU][5U]),8);
        bufp->chgCData(oldp+485,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xbU][6U]),8);
        bufp->chgCData(oldp+486,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xbU][7U]),8);
        bufp->chgCData(oldp+487,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xbU][8U]),8);
        bufp->chgCData(oldp+488,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xbU][9U]),8);
        bufp->chgCData(oldp+489,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xcU][0U]),8);
        bufp->chgCData(oldp+490,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xcU][0xaU]),8);
        bufp->chgCData(oldp+491,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xcU][0xbU]),8);
        bufp->chgCData(oldp+492,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xcU][0xcU]),8);
        bufp->chgCData(oldp+493,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xcU][0xdU]),8);
        bufp->chgCData(oldp+494,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xcU][1U]),8);
        bufp->chgCData(oldp+495,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xcU][2U]),8);
        bufp->chgCData(oldp+496,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xcU][3U]),8);
        bufp->chgCData(oldp+497,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xcU][4U]),8);
        bufp->chgCData(oldp+498,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xcU][5U]),8);
        bufp->chgCData(oldp+499,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xcU][6U]),8);
        bufp->chgCData(oldp+500,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xcU][7U]),8);
        bufp->chgCData(oldp+501,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xcU][8U]),8);
        bufp->chgCData(oldp+502,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xcU][9U]),8);
        bufp->chgCData(oldp+503,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xdU][0U]),8);
        bufp->chgCData(oldp+504,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xdU][0xaU]),8);
        bufp->chgCData(oldp+505,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xdU][0xbU]),8);
        bufp->chgCData(oldp+506,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xdU][0xcU]),8);
        bufp->chgCData(oldp+507,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xdU][0xdU]),8);
        bufp->chgCData(oldp+508,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xdU][1U]),8);
        bufp->chgCData(oldp+509,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xdU][2U]),8);
        bufp->chgCData(oldp+510,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xdU][3U]),8);
        bufp->chgCData(oldp+511,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xdU][4U]),8);
        bufp->chgCData(oldp+512,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xdU][5U]),8);
        bufp->chgCData(oldp+513,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xdU][6U]),8);
        bufp->chgCData(oldp+514,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xdU][7U]),8);
        bufp->chgCData(oldp+515,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xdU][8U]),8);
        bufp->chgCData(oldp+516,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [0xdU][9U]),8);
        bufp->chgCData(oldp+517,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [1U][0U]),8);
        bufp->chgCData(oldp+518,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [1U][0xaU]),8);
        bufp->chgCData(oldp+519,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [1U][0xbU]),8);
        bufp->chgCData(oldp+520,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [1U][0xcU]),8);
        bufp->chgCData(oldp+521,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [1U][0xdU]),8);
        bufp->chgCData(oldp+522,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [1U][1U]),8);
        bufp->chgCData(oldp+523,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [1U][2U]),8);
        bufp->chgCData(oldp+524,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [1U][3U]),8);
        bufp->chgCData(oldp+525,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [1U][4U]),8);
        bufp->chgCData(oldp+526,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [1U][5U]),8);
        bufp->chgCData(oldp+527,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [1U][6U]),8);
        bufp->chgCData(oldp+528,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [1U][7U]),8);
        bufp->chgCData(oldp+529,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [1U][8U]),8);
        bufp->chgCData(oldp+530,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [1U][9U]),8);
        bufp->chgCData(oldp+531,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [2U][0U]),8);
        bufp->chgCData(oldp+532,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [2U][0xaU]),8);
        bufp->chgCData(oldp+533,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [2U][0xbU]),8);
        bufp->chgCData(oldp+534,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [2U][0xcU]),8);
        bufp->chgCData(oldp+535,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [2U][0xdU]),8);
        bufp->chgCData(oldp+536,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [2U][1U]),8);
        bufp->chgCData(oldp+537,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [2U][2U]),8);
        bufp->chgCData(oldp+538,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [2U][3U]),8);
        bufp->chgCData(oldp+539,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [2U][4U]),8);
        bufp->chgCData(oldp+540,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [2U][5U]),8);
        bufp->chgCData(oldp+541,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [2U][6U]),8);
        bufp->chgCData(oldp+542,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [2U][7U]),8);
        bufp->chgCData(oldp+543,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [2U][8U]),8);
        bufp->chgCData(oldp+544,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [2U][9U]),8);
        bufp->chgCData(oldp+545,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [3U][0U]),8);
        bufp->chgCData(oldp+546,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [3U][0xaU]),8);
        bufp->chgCData(oldp+547,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [3U][0xbU]),8);
        bufp->chgCData(oldp+548,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [3U][0xcU]),8);
        bufp->chgCData(oldp+549,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [3U][0xdU]),8);
        bufp->chgCData(oldp+550,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [3U][1U]),8);
        bufp->chgCData(oldp+551,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [3U][2U]),8);
        bufp->chgCData(oldp+552,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [3U][3U]),8);
        bufp->chgCData(oldp+553,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [3U][4U]),8);
        bufp->chgCData(oldp+554,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [3U][5U]),8);
        bufp->chgCData(oldp+555,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [3U][6U]),8);
        bufp->chgCData(oldp+556,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [3U][7U]),8);
        bufp->chgCData(oldp+557,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [3U][8U]),8);
        bufp->chgCData(oldp+558,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [3U][9U]),8);
        bufp->chgCData(oldp+559,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [4U][0U]),8);
        bufp->chgCData(oldp+560,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [4U][0xaU]),8);
        bufp->chgCData(oldp+561,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [4U][0xbU]),8);
        bufp->chgCData(oldp+562,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [4U][0xcU]),8);
        bufp->chgCData(oldp+563,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [4U][0xdU]),8);
        bufp->chgCData(oldp+564,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [4U][1U]),8);
        bufp->chgCData(oldp+565,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [4U][2U]),8);
        bufp->chgCData(oldp+566,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [4U][3U]),8);
        bufp->chgCData(oldp+567,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [4U][4U]),8);
        bufp->chgCData(oldp+568,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [4U][5U]),8);
        bufp->chgCData(oldp+569,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [4U][6U]),8);
        bufp->chgCData(oldp+570,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [4U][7U]),8);
        bufp->chgCData(oldp+571,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [4U][8U]),8);
        bufp->chgCData(oldp+572,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [4U][9U]),8);
        bufp->chgCData(oldp+573,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [5U][0U]),8);
        bufp->chgCData(oldp+574,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [5U][0xaU]),8);
        bufp->chgCData(oldp+575,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [5U][0xbU]),8);
        bufp->chgCData(oldp+576,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [5U][0xcU]),8);
        bufp->chgCData(oldp+577,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [5U][0xdU]),8);
        bufp->chgCData(oldp+578,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [5U][1U]),8);
        bufp->chgCData(oldp+579,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [5U][2U]),8);
        bufp->chgCData(oldp+580,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [5U][3U]),8);
        bufp->chgCData(oldp+581,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [5U][4U]),8);
        bufp->chgCData(oldp+582,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [5U][5U]),8);
        bufp->chgCData(oldp+583,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [5U][6U]),8);
        bufp->chgCData(oldp+584,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [5U][7U]),8);
        bufp->chgCData(oldp+585,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [5U][8U]),8);
        bufp->chgCData(oldp+586,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [5U][9U]),8);
        bufp->chgCData(oldp+587,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [6U][0U]),8);
        bufp->chgCData(oldp+588,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [6U][0xaU]),8);
        bufp->chgCData(oldp+589,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [6U][0xbU]),8);
        bufp->chgCData(oldp+590,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [6U][0xcU]),8);
        bufp->chgCData(oldp+591,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [6U][0xdU]),8);
        bufp->chgCData(oldp+592,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [6U][1U]),8);
        bufp->chgCData(oldp+593,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [6U][2U]),8);
        bufp->chgCData(oldp+594,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [6U][3U]),8);
        bufp->chgCData(oldp+595,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [6U][4U]),8);
        bufp->chgCData(oldp+596,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [6U][5U]),8);
        bufp->chgCData(oldp+597,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [6U][6U]),8);
        bufp->chgCData(oldp+598,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [6U][7U]),8);
        bufp->chgCData(oldp+599,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [6U][8U]),8);
        bufp->chgCData(oldp+600,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [6U][9U]),8);
        bufp->chgCData(oldp+601,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [7U][0U]),8);
        bufp->chgCData(oldp+602,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [7U][0xaU]),8);
        bufp->chgCData(oldp+603,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [7U][0xbU]),8);
        bufp->chgCData(oldp+604,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [7U][0xcU]),8);
        bufp->chgCData(oldp+605,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [7U][0xdU]),8);
        bufp->chgCData(oldp+606,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [7U][1U]),8);
        bufp->chgCData(oldp+607,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [7U][2U]),8);
        bufp->chgCData(oldp+608,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [7U][3U]),8);
        bufp->chgCData(oldp+609,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [7U][4U]),8);
        bufp->chgCData(oldp+610,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [7U][5U]),8);
        bufp->chgCData(oldp+611,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [7U][6U]),8);
        bufp->chgCData(oldp+612,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [7U][7U]),8);
        bufp->chgCData(oldp+613,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [7U][8U]),8);
        bufp->chgCData(oldp+614,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [7U][9U]),8);
        bufp->chgCData(oldp+615,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [8U][0U]),8);
        bufp->chgCData(oldp+616,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [8U][0xaU]),8);
        bufp->chgCData(oldp+617,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [8U][0xbU]),8);
        bufp->chgCData(oldp+618,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [8U][0xcU]),8);
        bufp->chgCData(oldp+619,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [8U][0xdU]),8);
        bufp->chgCData(oldp+620,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [8U][1U]),8);
        bufp->chgCData(oldp+621,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [8U][2U]),8);
        bufp->chgCData(oldp+622,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [8U][3U]),8);
        bufp->chgCData(oldp+623,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [8U][4U]),8);
        bufp->chgCData(oldp+624,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [8U][5U]),8);
        bufp->chgCData(oldp+625,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [8U][6U]),8);
        bufp->chgCData(oldp+626,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [8U][7U]),8);
        bufp->chgCData(oldp+627,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [8U][8U]),8);
        bufp->chgCData(oldp+628,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [8U][9U]),8);
        bufp->chgCData(oldp+629,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [9U][0U]),8);
        bufp->chgCData(oldp+630,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [9U][0xaU]),8);
        bufp->chgCData(oldp+631,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [9U][0xbU]),8);
        bufp->chgCData(oldp+632,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [9U][0xcU]),8);
        bufp->chgCData(oldp+633,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [9U][0xdU]),8);
        bufp->chgCData(oldp+634,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [9U][1U]),8);
        bufp->chgCData(oldp+635,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [9U][2U]),8);
        bufp->chgCData(oldp+636,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [9U][3U]),8);
        bufp->chgCData(oldp+637,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [9U][4U]),8);
        bufp->chgCData(oldp+638,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [9U][5U]),8);
        bufp->chgCData(oldp+639,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [9U][6U]),8);
        bufp->chgCData(oldp+640,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [9U][7U]),8);
        bufp->chgCData(oldp+641,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [9U][8U]),8);
        bufp->chgCData(oldp+642,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                                 [9U][9U]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgWData(oldp+643,(vlSelf->top_ws_tb__DOT__out_c),448);
        bufp->chgBit(oldp+657,(((0x1bU <= (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__ctr)) 
                                & (0x29U > (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__ctr)))));
        bufp->chgWData(oldp+658,(vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum),448);
        bufp->chgCData(oldp+672,(vlSelf->top_ws_tb__DOT__dut__DOT__ctr),6);
        bufp->chgBit(oldp+673,(vlSelf->top_ws_tb__DOT__dut__DOT__counting));
        bufp->chgCData(oldp+674,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+675,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+676,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+677,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+678,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+679,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+680,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+681,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+682,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+683,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+684,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+685,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+686,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+687,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+688,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+689,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+690,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+691,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+692,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+693,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+694,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+695,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+696,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+697,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+698,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+699,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+700,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+701,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+702,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+703,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+704,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+705,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+706,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+707,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+708,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+709,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+710,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+711,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+712,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+713,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+714,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+715,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+716,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+717,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+718,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+719,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+720,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+721,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+722,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+723,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+724,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+725,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+726,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+727,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+728,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+729,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+730,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+731,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+732,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+733,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+734,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+735,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+736,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+737,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+738,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+739,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+740,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+741,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+742,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+743,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+744,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+745,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+746,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+747,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+748,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+749,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+750,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+751,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+752,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+753,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+754,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+755,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+756,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+757,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+758,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+759,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+760,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+761,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+762,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+763,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+764,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+765,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+766,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+767,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+768,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+769,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+770,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+771,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+772,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+773,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+774,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+775,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+776,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+777,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+778,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+779,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+780,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+781,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+782,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+783,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+784,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+785,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+786,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+787,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+788,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+789,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+790,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+791,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+792,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+793,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+794,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+795,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+796,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+797,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+798,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+799,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+800,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+801,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+802,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+803,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+804,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+805,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+806,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+807,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+808,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+809,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+810,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+811,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+812,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+813,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+814,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+815,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+816,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+817,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+818,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+819,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+820,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+821,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+822,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+823,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+824,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+825,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+826,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+827,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+828,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+829,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+830,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+831,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+832,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+833,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+834,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+835,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+836,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+837,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+838,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+839,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+840,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+841,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+842,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+843,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+844,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+845,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+846,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+847,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+848,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+849,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+850,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+851,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+852,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+853,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+854,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+855,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+856,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+857,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+858,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+859,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+860,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+861,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+862,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+863,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+864,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+865,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+866,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+867,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+868,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+869,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+870,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+871,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+872,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+873,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+874,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+875,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+876,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+877,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+878,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+879,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+880,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+881,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+882,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+883,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+884,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+885,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+886,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+887,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+888,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+889,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+890,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+891,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+892,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+893,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+894,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+895,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+896,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+897,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+898,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+899,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+900,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+901,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+902,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+903,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+904,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+905,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+906,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+907,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+908,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+909,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+910,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+911,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+912,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+913,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+914,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+915,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+916,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+917,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+918,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+919,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+920,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+921,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+922,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+923,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+924,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+925,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+926,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+927,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+928,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+929,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+930,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+931,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+932,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+933,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+934,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+935,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+936,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+937,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+938,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+939,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+940,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+941,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+942,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+943,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+944,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+945,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+946,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+947,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+948,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+949,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+950,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+951,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+952,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+953,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+954,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+955,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+956,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+957,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+958,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+959,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+960,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+961,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+962,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+963,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+964,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+965,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+966,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+967,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+968,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+969,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+970,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+971,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+972,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+973,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+974,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+975,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+976,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+977,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+978,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+979,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+980,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+981,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+982,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+983,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+984,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+985,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+986,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+987,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+988,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+989,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+990,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+991,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+992,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+993,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+994,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+995,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+996,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+997,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+998,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+999,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1000,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1001,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1002,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1003,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1004,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1005,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1006,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1007,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1008,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1009,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1010,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1011,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1012,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1013,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1014,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1015,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1016,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1017,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1018,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1019,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1020,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1021,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1022,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1023,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1024,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1025,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1026,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1027,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1028,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1029,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1030,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1031,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1032,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1033,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1034,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1035,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1036,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1037,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1038,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1039,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1040,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1041,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1042,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1043,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1044,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1045,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1046,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1047,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1048,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1049,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1050,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1051,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1052,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1053,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1054,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1055,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1056,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1057,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1058,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1059,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1060,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1061,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1062,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1063,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1064,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1065,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1066,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1067,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1068,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1069,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1070,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1071,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1072,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1073,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1074,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1075,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1076,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1077,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1078,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1079,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1080,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1081,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1082,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1083,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1084,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1085,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1086,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1087,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1088,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1089,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1090,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1091,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1092,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1093,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1094,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1095,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1096,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1097,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1098,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1099,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1100,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1101,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1102,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1103,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1104,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1105,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1106,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1107,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1108,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1109,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1110,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1111,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1112,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1113,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1114,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1115,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1116,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1117,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1118,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1119,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1120,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1121,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1122,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1123,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1124,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1125,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1126,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1127,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1128,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1129,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1130,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1131,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1132,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1133,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1134,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1135,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1136,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1137,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1138,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1139,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1140,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1141,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1142,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1143,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1144,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1145,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1146,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1147,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1148,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1149,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1150,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1151,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1152,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1153,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1154,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1155,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1156,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1157,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1158,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1159,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1160,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1161,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1162,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1163,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1164,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1165,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1166,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1167,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1168,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1169,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1170,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1171,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1172,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1173,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1174,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1175,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1176,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1177,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1178,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1179,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1180,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1181,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1182,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1183,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1184,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1185,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1186,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1187,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1188,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1189,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1190,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1191,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1192,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1193,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1194,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1195,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1196,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1197,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1198,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1199,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1200,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1201,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1202,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1203,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1204,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1205,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1206,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1207,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1208,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1209,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1210,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1211,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1212,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1213,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1214,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1215,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1216,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1217,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1218,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1219,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1220,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1221,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1222,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1223,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1224,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1225,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1226,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1227,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1228,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1229,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1230,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1231,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1232,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1233,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1234,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1235,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1236,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1237,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1238,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1239,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1240,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1241,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1242,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1243,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1244,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1245,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1246,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1247,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1248,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1249,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1250,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1251,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1252,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1253,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1254,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1255,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1256,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1257,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1258,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+1259,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
        bufp->chgIData(oldp+1260,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
        bufp->chgCData(oldp+1261,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
    }
    bufp->chgBit(oldp+1262,(vlSelf->top_ws_tb__DOT__clk));
    bufp->chgBit(oldp+1263,(vlSelf->top_ws_tb__DOT__rst_n));
    bufp->chgBit(oldp+1264,(vlSelf->top_ws_tb__DOT__start));
    bufp->chgWData(oldp+1265,(vlSelf->top_ws_tb__DOT__in_a),112);
    bufp->chgIData(oldp+1269,(vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r),32);
    bufp->chgIData(oldp+1270,(vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c),32);
    bufp->chgIData(oldp+1271,(vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__k),32);
    bufp->chgIData(oldp+1272,(vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r),32);
    bufp->chgIData(oldp+1273,(vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row),32);
    bufp->chgIData(oldp+1274,(vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c),32);
    bufp->chgIData(oldp+1275,(vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c),32);
    bufp->chgIData(oldp+1276,(vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k),32);
    bufp->chgIData(oldp+1277,(vlSelf->top_ws_tb__DOT__check_results__Vstatic__r),32);
    bufp->chgIData(oldp+1278,(vlSelf->top_ws_tb__DOT__check_results__Vstatic__c),32);
    bufp->chgIData(oldp+1279,(vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors),32);
    bufp->chgIData(oldp+1280,(vlSelf->top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
    bufp->chgIData(oldp+1281,(vlSelf->top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
}

void Vtop_ws_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root__trace_cleanup\n"); );
    // Init
    Vtop_ws_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_ws_tb___024root*>(voidSelf);
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}
