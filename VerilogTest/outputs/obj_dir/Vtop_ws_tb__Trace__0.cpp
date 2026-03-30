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
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->top_ws_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelf->top_ws_tb__DOT__load_weight));
        bufp->chgWData(oldp+2,(vlSelf->top_ws_tb__DOT__weights_in),128);
        bufp->chgCData(oldp+6,(vlSelf->top_ws_tb__DOT__A
                               [0U][0U]),8);
        bufp->chgCData(oldp+7,(vlSelf->top_ws_tb__DOT__A
                               [0U][1U]),8);
        bufp->chgCData(oldp+8,(vlSelf->top_ws_tb__DOT__A
                               [0U][2U]),8);
        bufp->chgCData(oldp+9,(vlSelf->top_ws_tb__DOT__A
                               [0U][3U]),8);
        bufp->chgCData(oldp+10,(vlSelf->top_ws_tb__DOT__A
                                [1U][0U]),8);
        bufp->chgCData(oldp+11,(vlSelf->top_ws_tb__DOT__A
                                [1U][1U]),8);
        bufp->chgCData(oldp+12,(vlSelf->top_ws_tb__DOT__A
                                [1U][2U]),8);
        bufp->chgCData(oldp+13,(vlSelf->top_ws_tb__DOT__A
                                [1U][3U]),8);
        bufp->chgCData(oldp+14,(vlSelf->top_ws_tb__DOT__A
                                [2U][0U]),8);
        bufp->chgCData(oldp+15,(vlSelf->top_ws_tb__DOT__A
                                [2U][1U]),8);
        bufp->chgCData(oldp+16,(vlSelf->top_ws_tb__DOT__A
                                [2U][2U]),8);
        bufp->chgCData(oldp+17,(vlSelf->top_ws_tb__DOT__A
                                [2U][3U]),8);
        bufp->chgCData(oldp+18,(vlSelf->top_ws_tb__DOT__A
                                [3U][0U]),8);
        bufp->chgCData(oldp+19,(vlSelf->top_ws_tb__DOT__A
                                [3U][1U]),8);
        bufp->chgCData(oldp+20,(vlSelf->top_ws_tb__DOT__A
                                [3U][2U]),8);
        bufp->chgCData(oldp+21,(vlSelf->top_ws_tb__DOT__A
                                [3U][3U]),8);
        bufp->chgCData(oldp+22,(vlSelf->top_ws_tb__DOT__B
                                [0U][0U]),8);
        bufp->chgCData(oldp+23,(vlSelf->top_ws_tb__DOT__B
                                [0U][1U]),8);
        bufp->chgCData(oldp+24,(vlSelf->top_ws_tb__DOT__B
                                [0U][2U]),8);
        bufp->chgCData(oldp+25,(vlSelf->top_ws_tb__DOT__B
                                [0U][3U]),8);
        bufp->chgCData(oldp+26,(vlSelf->top_ws_tb__DOT__B
                                [1U][0U]),8);
        bufp->chgCData(oldp+27,(vlSelf->top_ws_tb__DOT__B
                                [1U][1U]),8);
        bufp->chgCData(oldp+28,(vlSelf->top_ws_tb__DOT__B
                                [1U][2U]),8);
        bufp->chgCData(oldp+29,(vlSelf->top_ws_tb__DOT__B
                                [1U][3U]),8);
        bufp->chgCData(oldp+30,(vlSelf->top_ws_tb__DOT__B
                                [2U][0U]),8);
        bufp->chgCData(oldp+31,(vlSelf->top_ws_tb__DOT__B
                                [2U][1U]),8);
        bufp->chgCData(oldp+32,(vlSelf->top_ws_tb__DOT__B
                                [2U][2U]),8);
        bufp->chgCData(oldp+33,(vlSelf->top_ws_tb__DOT__B
                                [2U][3U]),8);
        bufp->chgCData(oldp+34,(vlSelf->top_ws_tb__DOT__B
                                [3U][0U]),8);
        bufp->chgCData(oldp+35,(vlSelf->top_ws_tb__DOT__B
                                [3U][1U]),8);
        bufp->chgCData(oldp+36,(vlSelf->top_ws_tb__DOT__B
                                [3U][2U]),8);
        bufp->chgCData(oldp+37,(vlSelf->top_ws_tb__DOT__B
                                [3U][3U]),8);
        bufp->chgIData(oldp+38,(vlSelf->top_ws_tb__DOT__C_expected
                                [0U][0U]),32);
        bufp->chgIData(oldp+39,(vlSelf->top_ws_tb__DOT__C_expected
                                [0U][1U]),32);
        bufp->chgIData(oldp+40,(vlSelf->top_ws_tb__DOT__C_expected
                                [0U][2U]),32);
        bufp->chgIData(oldp+41,(vlSelf->top_ws_tb__DOT__C_expected
                                [0U][3U]),32);
        bufp->chgIData(oldp+42,(vlSelf->top_ws_tb__DOT__C_expected
                                [1U][0U]),32);
        bufp->chgIData(oldp+43,(vlSelf->top_ws_tb__DOT__C_expected
                                [1U][1U]),32);
        bufp->chgIData(oldp+44,(vlSelf->top_ws_tb__DOT__C_expected
                                [1U][2U]),32);
        bufp->chgIData(oldp+45,(vlSelf->top_ws_tb__DOT__C_expected
                                [1U][3U]),32);
        bufp->chgIData(oldp+46,(vlSelf->top_ws_tb__DOT__C_expected
                                [2U][0U]),32);
        bufp->chgIData(oldp+47,(vlSelf->top_ws_tb__DOT__C_expected
                                [2U][1U]),32);
        bufp->chgIData(oldp+48,(vlSelf->top_ws_tb__DOT__C_expected
                                [2U][2U]),32);
        bufp->chgIData(oldp+49,(vlSelf->top_ws_tb__DOT__C_expected
                                [2U][3U]),32);
        bufp->chgIData(oldp+50,(vlSelf->top_ws_tb__DOT__C_expected
                                [3U][0U]),32);
        bufp->chgIData(oldp+51,(vlSelf->top_ws_tb__DOT__C_expected
                                [3U][1U]),32);
        bufp->chgIData(oldp+52,(vlSelf->top_ws_tb__DOT__C_expected
                                [3U][2U]),32);
        bufp->chgIData(oldp+53,(vlSelf->top_ws_tb__DOT__C_expected
                                [3U][3U]),32);
        bufp->chgIData(oldp+54,(vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r),32);
        bufp->chgIData(oldp+55,(vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c),32);
        bufp->chgIData(oldp+56,(vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r),32);
        bufp->chgIData(oldp+57,(vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c),32);
        bufp->chgIData(oldp+58,(vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k),32);
        bufp->chgIData(oldp+59,(vlSelf->top_ws_tb__DOT__check_results__Vstatic__r),32);
        bufp->chgIData(oldp+60,(vlSelf->top_ws_tb__DOT__check_results__Vstatic__c),32);
        bufp->chgIData(oldp+61,(vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors),32);
        bufp->chgCData(oldp+62,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0U])),8);
        bufp->chgCData(oldp+63,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+64,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+65,((vlSelf->top_ws_tb__DOT__weights_in[0U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+66,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[1U])),8);
        bufp->chgCData(oldp+67,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[1U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+68,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[1U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+69,((vlSelf->top_ws_tb__DOT__weights_in[1U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+70,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[2U])),8);
        bufp->chgCData(oldp+71,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[2U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+72,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[2U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+73,((vlSelf->top_ws_tb__DOT__weights_in[2U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+74,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[3U])),8);
        bufp->chgCData(oldp+75,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[3U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+76,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[3U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+77,((vlSelf->top_ws_tb__DOT__weights_in[3U] 
                                 >> 0x18U)),8);
        bufp->chgIData(oldp+78,(vlSelf->top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+79,(vlSelf->top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+80,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [0U][0U]),32);
        bufp->chgIData(oldp+81,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [0U][1U]),32);
        bufp->chgIData(oldp+82,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [0U][2U]),32);
        bufp->chgIData(oldp+83,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [0U][3U]),32);
        bufp->chgIData(oldp+84,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [1U][0U]),32);
        bufp->chgIData(oldp+85,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [1U][1U]),32);
        bufp->chgIData(oldp+86,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [1U][2U]),32);
        bufp->chgIData(oldp+87,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [1U][3U]),32);
        bufp->chgIData(oldp+88,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [2U][0U]),32);
        bufp->chgIData(oldp+89,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [2U][1U]),32);
        bufp->chgIData(oldp+90,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [2U][2U]),32);
        bufp->chgIData(oldp+91,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [2U][3U]),32);
        bufp->chgIData(oldp+92,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [3U][0U]),32);
        bufp->chgIData(oldp+93,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [3U][1U]),32);
        bufp->chgIData(oldp+94,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [3U][2U]),32);
        bufp->chgIData(oldp+95,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [3U][3U]),32);
        bufp->chgIData(oldp+96,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [4U][0U]),32);
        bufp->chgIData(oldp+97,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [4U][1U]),32);
        bufp->chgIData(oldp+98,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [4U][2U]),32);
        bufp->chgIData(oldp+99,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                [4U][3U]),32);
        bufp->chgIData(oldp+100,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                 [0U][0U]),32);
        bufp->chgIData(oldp+101,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                 [0U][1U]),32);
        bufp->chgIData(oldp+102,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                 [0U][2U]),32);
        bufp->chgIData(oldp+103,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                 [0U][3U]),32);
        bufp->chgIData(oldp+104,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                 [1U][0U]),32);
        bufp->chgIData(oldp+105,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                 [1U][1U]),32);
        bufp->chgIData(oldp+106,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                 [1U][2U]),32);
        bufp->chgIData(oldp+107,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                 [1U][3U]),32);
        bufp->chgIData(oldp+108,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                 [2U][0U]),32);
        bufp->chgIData(oldp+109,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                 [2U][1U]),32);
        bufp->chgIData(oldp+110,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                 [2U][2U]),32);
        bufp->chgIData(oldp+111,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                 [2U][3U]),32);
        bufp->chgIData(oldp+112,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                 [3U][0U]),32);
        bufp->chgIData(oldp+113,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                 [3U][1U]),32);
        bufp->chgIData(oldp+114,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                 [3U][2U]),32);
        bufp->chgIData(oldp+115,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__p_wire
                                 [3U][3U]),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[4U]) 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+116,(vlSelf->top_ws_tb__DOT__C_got
                                 [0U][0U]),32);
        bufp->chgIData(oldp+117,(vlSelf->top_ws_tb__DOT__C_got
                                 [0U][1U]),32);
        bufp->chgIData(oldp+118,(vlSelf->top_ws_tb__DOT__C_got
                                 [0U][2U]),32);
        bufp->chgIData(oldp+119,(vlSelf->top_ws_tb__DOT__C_got
                                 [0U][3U]),32);
        bufp->chgIData(oldp+120,(vlSelf->top_ws_tb__DOT__C_got
                                 [1U][0U]),32);
        bufp->chgIData(oldp+121,(vlSelf->top_ws_tb__DOT__C_got
                                 [1U][1U]),32);
        bufp->chgIData(oldp+122,(vlSelf->top_ws_tb__DOT__C_got
                                 [1U][2U]),32);
        bufp->chgIData(oldp+123,(vlSelf->top_ws_tb__DOT__C_got
                                 [1U][3U]),32);
        bufp->chgIData(oldp+124,(vlSelf->top_ws_tb__DOT__C_got
                                 [2U][0U]),32);
        bufp->chgIData(oldp+125,(vlSelf->top_ws_tb__DOT__C_got
                                 [2U][1U]),32);
        bufp->chgIData(oldp+126,(vlSelf->top_ws_tb__DOT__C_got
                                 [2U][2U]),32);
        bufp->chgIData(oldp+127,(vlSelf->top_ws_tb__DOT__C_got
                                 [2U][3U]),32);
        bufp->chgIData(oldp+128,(vlSelf->top_ws_tb__DOT__C_got
                                 [3U][0U]),32);
        bufp->chgIData(oldp+129,(vlSelf->top_ws_tb__DOT__C_got
                                 [3U][1U]),32);
        bufp->chgIData(oldp+130,(vlSelf->top_ws_tb__DOT__C_got
                                 [3U][2U]),32);
        bufp->chgIData(oldp+131,(vlSelf->top_ws_tb__DOT__C_got
                                 [3U][3U]),32);
        bufp->chgIData(oldp+132,(vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row),32);
        bufp->chgIData(oldp+133,(vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[6U] 
                      | vlSelf->__Vm_traceActivity[7U]) 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+134,(vlSelf->top_ws_tb__DOT__dut__DOT__skewed_a),32);
        bufp->chgCData(oldp+135,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [0U][0U]),8);
        bufp->chgCData(oldp+136,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [0U][1U]),8);
        bufp->chgCData(oldp+137,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [0U][2U]),8);
        bufp->chgCData(oldp+138,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [0U][3U]),8);
        bufp->chgCData(oldp+139,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [0U][4U]),8);
        bufp->chgCData(oldp+140,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [1U][0U]),8);
        bufp->chgCData(oldp+141,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [1U][1U]),8);
        bufp->chgCData(oldp+142,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [1U][2U]),8);
        bufp->chgCData(oldp+143,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [1U][3U]),8);
        bufp->chgCData(oldp+144,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [1U][4U]),8);
        bufp->chgCData(oldp+145,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [2U][0U]),8);
        bufp->chgCData(oldp+146,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [2U][1U]),8);
        bufp->chgCData(oldp+147,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [2U][2U]),8);
        bufp->chgCData(oldp+148,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [2U][3U]),8);
        bufp->chgCData(oldp+149,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [2U][4U]),8);
        bufp->chgCData(oldp+150,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [3U][0U]),8);
        bufp->chgCData(oldp+151,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [3U][1U]),8);
        bufp->chgCData(oldp+152,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [3U][2U]),8);
        bufp->chgCData(oldp+153,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [3U][3U]),8);
        bufp->chgCData(oldp+154,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [3U][4U]),8);
        bufp->chgCData(oldp+155,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [0U][0U]),8);
        bufp->chgCData(oldp+156,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [0U][1U]),8);
        bufp->chgCData(oldp+157,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [0U][2U]),8);
        bufp->chgCData(oldp+158,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [0U][3U]),8);
        bufp->chgCData(oldp+159,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [1U][0U]),8);
        bufp->chgCData(oldp+160,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [1U][1U]),8);
        bufp->chgCData(oldp+161,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [1U][2U]),8);
        bufp->chgCData(oldp+162,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [1U][3U]),8);
        bufp->chgCData(oldp+163,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [2U][0U]),8);
        bufp->chgCData(oldp+164,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [2U][1U]),8);
        bufp->chgCData(oldp+165,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [2U][2U]),8);
        bufp->chgCData(oldp+166,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [2U][3U]),8);
        bufp->chgCData(oldp+167,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [3U][0U]),8);
        bufp->chgCData(oldp+168,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [3U][1U]),8);
        bufp->chgCData(oldp+169,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [3U][2U]),8);
        bufp->chgCData(oldp+170,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__a_wire
                                 [3U][3U]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgWData(oldp+171,(vlSelf->top_ws_tb__DOT__out_c),128);
        bufp->chgBit(oldp+175,(((7U <= (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__ctr)) 
                                & (0xbU > (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__ctr)))));
        bufp->chgCData(oldp+176,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
                                 [0U][0U]),8);
        bufp->chgCData(oldp+177,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
                                 [0U][1U]),8);
        bufp->chgCData(oldp+178,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
                                 [0U][2U]),8);
        bufp->chgCData(oldp+179,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
                                 [1U][0U]),8);
        bufp->chgCData(oldp+180,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
                                 [1U][1U]),8);
        bufp->chgCData(oldp+181,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
                                 [1U][2U]),8);
        bufp->chgCData(oldp+182,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
                                 [2U][0U]),8);
        bufp->chgCData(oldp+183,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
                                 [2U][1U]),8);
        bufp->chgCData(oldp+184,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
                                 [2U][2U]),8);
        bufp->chgCData(oldp+185,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
                                 [3U][0U]),8);
        bufp->chgCData(oldp+186,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
                                 [3U][1U]),8);
        bufp->chgCData(oldp+187,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_a
                                 [3U][2U]),8);
        bufp->chgWData(oldp+188,(vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum),128);
        bufp->chgIData(oldp+192,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
                                 [0U][0U]),32);
        bufp->chgIData(oldp+193,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
                                 [0U][1U]),32);
        bufp->chgIData(oldp+194,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
                                 [0U][2U]),32);
        bufp->chgIData(oldp+195,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
                                 [1U][0U]),32);
        bufp->chgIData(oldp+196,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
                                 [1U][1U]),32);
        bufp->chgIData(oldp+197,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
                                 [1U][2U]),32);
        bufp->chgIData(oldp+198,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
                                 [2U][0U]),32);
        bufp->chgIData(oldp+199,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
                                 [2U][1U]),32);
        bufp->chgIData(oldp+200,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
                                 [2U][2U]),32);
        bufp->chgIData(oldp+201,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
                                 [3U][0U]),32);
        bufp->chgIData(oldp+202,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
                                 [3U][1U]),32);
        bufp->chgIData(oldp+203,(vlSelf->top_ws_tb__DOT__dut__DOT__sr_c
                                 [3U][2U]),32);
        bufp->chgCData(oldp+204,(vlSelf->top_ws_tb__DOT__dut__DOT__ctr),4);
        bufp->chgBit(oldp+205,(vlSelf->top_ws_tb__DOT__dut__DOT__counting));
        bufp->chgCData(oldp+206,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a),8);
        bufp->chgIData(oldp+207,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum),32);
        bufp->chgCData(oldp+208,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+209,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a),8);
        bufp->chgIData(oldp+210,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum),32);
        bufp->chgCData(oldp+211,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+212,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a),8);
        bufp->chgIData(oldp+213,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum),32);
        bufp->chgCData(oldp+214,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+215,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a),8);
        bufp->chgIData(oldp+216,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum),32);
        bufp->chgCData(oldp+217,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+218,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a),8);
        bufp->chgIData(oldp+219,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum),32);
        bufp->chgCData(oldp+220,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+221,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a),8);
        bufp->chgIData(oldp+222,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum),32);
        bufp->chgCData(oldp+223,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+224,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a),8);
        bufp->chgIData(oldp+225,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum),32);
        bufp->chgCData(oldp+226,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+227,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a),8);
        bufp->chgIData(oldp+228,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum),32);
        bufp->chgCData(oldp+229,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+230,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a),8);
        bufp->chgIData(oldp+231,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum),32);
        bufp->chgCData(oldp+232,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+233,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a),8);
        bufp->chgIData(oldp+234,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum),32);
        bufp->chgCData(oldp+235,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+236,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a),8);
        bufp->chgIData(oldp+237,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum),32);
        bufp->chgCData(oldp+238,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+239,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a),8);
        bufp->chgIData(oldp+240,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum),32);
        bufp->chgCData(oldp+241,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+242,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_a),8);
        bufp->chgIData(oldp+243,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__out_psum),32);
        bufp->chgCData(oldp+244,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+245,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_a),8);
        bufp->chgIData(oldp+246,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__out_psum),32);
        bufp->chgCData(oldp+247,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+248,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_a),8);
        bufp->chgIData(oldp+249,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__out_psum),32);
        bufp->chgCData(oldp+250,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_mac__DOT__weight_reg),8);
        bufp->chgCData(oldp+251,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_a),8);
        bufp->chgIData(oldp+252,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__out_psum),32);
        bufp->chgCData(oldp+253,(vlSelf->top_ws_tb__DOT__dut__DOT__u_array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_mac__DOT__weight_reg),8);
    }
    bufp->chgBit(oldp+254,(vlSelf->top_ws_tb__DOT__clk));
    bufp->chgBit(oldp+255,(vlSelf->top_ws_tb__DOT__start));
    bufp->chgIData(oldp+256,(vlSelf->top_ws_tb__DOT__in_a),32);
    bufp->chgIData(oldp+257,(vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__k),32);
    bufp->chgIData(oldp+258,(vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r),32);
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
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
