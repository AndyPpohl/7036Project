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
        bufp->chgCData(oldp+1,(vlSelf->mac_array_tb__DOT__ain[0]),8);
        bufp->chgCData(oldp+2,(vlSelf->mac_array_tb__DOT__ain[1]),8);
        bufp->chgCData(oldp+3,(vlSelf->mac_array_tb__DOT__ain[2]),8);
        bufp->chgCData(oldp+4,(vlSelf->mac_array_tb__DOT__ain[3]),8);
        bufp->chgCData(oldp+5,(vlSelf->mac_array_tb__DOT__weights
                               [0U][0U]),8);
        bufp->chgCData(oldp+6,(vlSelf->mac_array_tb__DOT__weights
                               [0U][1U]),8);
        bufp->chgCData(oldp+7,(vlSelf->mac_array_tb__DOT__weights
                               [0U][2U]),8);
        bufp->chgCData(oldp+8,(vlSelf->mac_array_tb__DOT__weights
                               [0U][3U]),8);
        bufp->chgCData(oldp+9,(vlSelf->mac_array_tb__DOT__weights
                               [1U][0U]),8);
        bufp->chgCData(oldp+10,(vlSelf->mac_array_tb__DOT__weights
                                [1U][1U]),8);
        bufp->chgCData(oldp+11,(vlSelf->mac_array_tb__DOT__weights
                                [1U][2U]),8);
        bufp->chgCData(oldp+12,(vlSelf->mac_array_tb__DOT__weights
                                [1U][3U]),8);
        bufp->chgCData(oldp+13,(vlSelf->mac_array_tb__DOT__weights
                                [2U][0U]),8);
        bufp->chgCData(oldp+14,(vlSelf->mac_array_tb__DOT__weights
                                [2U][1U]),8);
        bufp->chgCData(oldp+15,(vlSelf->mac_array_tb__DOT__weights
                                [2U][2U]),8);
        bufp->chgCData(oldp+16,(vlSelf->mac_array_tb__DOT__weights
                                [2U][3U]),8);
        bufp->chgCData(oldp+17,(vlSelf->mac_array_tb__DOT__weights
                                [3U][0U]),8);
        bufp->chgCData(oldp+18,(vlSelf->mac_array_tb__DOT__weights
                                [3U][1U]),8);
        bufp->chgCData(oldp+19,(vlSelf->mac_array_tb__DOT__weights
                                [3U][2U]),8);
        bufp->chgCData(oldp+20,(vlSelf->mac_array_tb__DOT__weights
                                [3U][3U]),8);
        bufp->chgCData(oldp+21,(vlSelf->mac_array_tb__DOT__cin[0]),8);
        bufp->chgCData(oldp+22,(vlSelf->mac_array_tb__DOT__cin[1]),8);
        bufp->chgCData(oldp+23,(vlSelf->mac_array_tb__DOT__cin[2]),8);
        bufp->chgCData(oldp+24,(vlSelf->mac_array_tb__DOT__cin[3]),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+25,(vlSelf->mac_array_tb__DOT__aout[0]),8);
        bufp->chgCData(oldp+26,(vlSelf->mac_array_tb__DOT__aout[1]),8);
        bufp->chgCData(oldp+27,(vlSelf->mac_array_tb__DOT__aout[2]),8);
        bufp->chgCData(oldp+28,(vlSelf->mac_array_tb__DOT__aout[3]),8);
        bufp->chgCData(oldp+29,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[0]),8);
        bufp->chgCData(oldp+30,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[1]),8);
        bufp->chgCData(oldp+31,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[2]),8);
        bufp->chgCData(oldp+32,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[3]),8);
        bufp->chgCData(oldp+33,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[4]),8);
        bufp->chgCData(oldp+34,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[5]),8);
        bufp->chgCData(oldp+35,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[6]),8);
        bufp->chgCData(oldp+36,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[7]),8);
        bufp->chgCData(oldp+37,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[8]),8);
        bufp->chgCData(oldp+38,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[9]),8);
        bufp->chgCData(oldp+39,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[10]),8);
        bufp->chgCData(oldp+40,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[11]),8);
        bufp->chgCData(oldp+41,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[12]),8);
        bufp->chgCData(oldp+42,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[13]),8);
        bufp->chgCData(oldp+43,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[14]),8);
        bufp->chgCData(oldp+44,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[15]),8);
        bufp->chgCData(oldp+45,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[0]),8);
        bufp->chgCData(oldp+46,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[1]),8);
        bufp->chgCData(oldp+47,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[2]),8);
        bufp->chgCData(oldp+48,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[3]),8);
        bufp->chgCData(oldp+49,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[4]),8);
        bufp->chgCData(oldp+50,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[5]),8);
        bufp->chgCData(oldp+51,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[6]),8);
        bufp->chgCData(oldp+52,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[7]),8);
        bufp->chgCData(oldp+53,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[8]),8);
        bufp->chgCData(oldp+54,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[9]),8);
        bufp->chgCData(oldp+55,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[10]),8);
        bufp->chgCData(oldp+56,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[11]),8);
        bufp->chgCData(oldp+57,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[12]),8);
        bufp->chgCData(oldp+58,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[13]),8);
        bufp->chgCData(oldp+59,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[14]),8);
        bufp->chgCData(oldp+60,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[15]),8);
        bufp->chgCData(oldp+61,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                [0U]),8);
        bufp->chgCData(oldp+62,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                [0U]),8);
        bufp->chgCData(oldp+63,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                [1U]),8);
        bufp->chgCData(oldp+64,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                [1U]),8);
        bufp->chgCData(oldp+65,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                [2U]),8);
        bufp->chgCData(oldp+66,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                [2U]),8);
        bufp->chgCData(oldp+67,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                [3U]),8);
        bufp->chgCData(oldp+68,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                [3U]),8);
        bufp->chgCData(oldp+69,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                [4U]),8);
        bufp->chgCData(oldp+70,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                [4U]),8);
        bufp->chgCData(oldp+71,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                [5U]),8);
        bufp->chgCData(oldp+72,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                [5U]),8);
        bufp->chgCData(oldp+73,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                [6U]),8);
        bufp->chgCData(oldp+74,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                [6U]),8);
        bufp->chgCData(oldp+75,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                [7U]),8);
        bufp->chgCData(oldp+76,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                [7U]),8);
        bufp->chgCData(oldp+77,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                [8U]),8);
        bufp->chgCData(oldp+78,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                [8U]),8);
        bufp->chgCData(oldp+79,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                [9U]),8);
        bufp->chgCData(oldp+80,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                [9U]),8);
        bufp->chgCData(oldp+81,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                [0xaU]),8);
        bufp->chgCData(oldp+82,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                [0xaU]),8);
        bufp->chgCData(oldp+83,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                [0xbU]),8);
        bufp->chgCData(oldp+84,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                [0xbU]),8);
        bufp->chgCData(oldp+85,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                [0xcU]),8);
        bufp->chgCData(oldp+86,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                [0xcU]),8);
        bufp->chgCData(oldp+87,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                [0xdU]),8);
        bufp->chgCData(oldp+88,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                [0xdU]),8);
        bufp->chgCData(oldp+89,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                [0xeU]),8);
        bufp->chgCData(oldp+90,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                [0xeU]),8);
        bufp->chgCData(oldp+91,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                                [0xfU]),8);
        bufp->chgCData(oldp+92,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                                [0xfU]),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgCData(oldp+93,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[0]),8);
        bufp->chgCData(oldp+94,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[1]),8);
        bufp->chgCData(oldp+95,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[2]),8);
        bufp->chgCData(oldp+96,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[3]),8);
        bufp->chgCData(oldp+97,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[4]),8);
        bufp->chgCData(oldp+98,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[5]),8);
        bufp->chgCData(oldp+99,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[6]),8);
        bufp->chgCData(oldp+100,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[7]),8);
        bufp->chgCData(oldp+101,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[8]),8);
        bufp->chgCData(oldp+102,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[9]),8);
        bufp->chgCData(oldp+103,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[10]),8);
        bufp->chgCData(oldp+104,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[11]),8);
        bufp->chgCData(oldp+105,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[12]),8);
        bufp->chgCData(oldp+106,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[13]),8);
        bufp->chgCData(oldp+107,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[14]),8);
        bufp->chgCData(oldp+108,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[15]),8);
        bufp->chgCData(oldp+109,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                                 [0U]),8);
        bufp->chgCData(oldp+110,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                                 [1U]),8);
        bufp->chgCData(oldp+111,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                                 [2U]),8);
        bufp->chgCData(oldp+112,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                                 [3U]),8);
        bufp->chgCData(oldp+113,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                                 [4U]),8);
        bufp->chgCData(oldp+114,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                                 [5U]),8);
        bufp->chgCData(oldp+115,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                                 [6U]),8);
        bufp->chgCData(oldp+116,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                                 [7U]),8);
        bufp->chgCData(oldp+117,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                                 [8U]),8);
        bufp->chgCData(oldp+118,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                                 [9U]),8);
        bufp->chgCData(oldp+119,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                                 [0xaU]),8);
        bufp->chgCData(oldp+120,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                                 [0xbU]),8);
        bufp->chgCData(oldp+121,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                                 [0xcU]),8);
        bufp->chgCData(oldp+122,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                                 [0xdU]),8);
        bufp->chgCData(oldp+123,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                                 [0xeU]),8);
        bufp->chgCData(oldp+124,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                                 [0xfU]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+125,(vlSelf->mac_array_tb__DOT__cout[0]),8);
        bufp->chgCData(oldp+126,(vlSelf->mac_array_tb__DOT__cout[1]),8);
        bufp->chgCData(oldp+127,(vlSelf->mac_array_tb__DOT__cout[2]),8);
        bufp->chgCData(oldp+128,(vlSelf->mac_array_tb__DOT__cout[3]),8);
        bufp->chgCData(oldp+129,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[0]),8);
        bufp->chgCData(oldp+130,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[1]),8);
        bufp->chgCData(oldp+131,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[2]),8);
        bufp->chgCData(oldp+132,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[3]),8);
        bufp->chgCData(oldp+133,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[4]),8);
        bufp->chgCData(oldp+134,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[5]),8);
        bufp->chgCData(oldp+135,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[6]),8);
        bufp->chgCData(oldp+136,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[7]),8);
        bufp->chgCData(oldp+137,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[8]),8);
        bufp->chgCData(oldp+138,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[9]),8);
        bufp->chgCData(oldp+139,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[10]),8);
        bufp->chgCData(oldp+140,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[11]),8);
        bufp->chgCData(oldp+141,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[12]),8);
        bufp->chgCData(oldp+142,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[13]),8);
        bufp->chgCData(oldp+143,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[14]),8);
        bufp->chgCData(oldp+144,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[15]),8);
        bufp->chgCData(oldp+145,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout),8);
        bufp->chgCData(oldp+146,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout),8);
        bufp->chgCData(oldp+147,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout),8);
        bufp->chgCData(oldp+148,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout),8);
        bufp->chgCData(oldp+149,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout),8);
        bufp->chgCData(oldp+150,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout),8);
        bufp->chgCData(oldp+151,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout),8);
        bufp->chgCData(oldp+152,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout),8);
        bufp->chgCData(oldp+153,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout),8);
        bufp->chgCData(oldp+154,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout),8);
        bufp->chgCData(oldp+155,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout),8);
        bufp->chgCData(oldp+156,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout),8);
        bufp->chgCData(oldp+157,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout),8);
        bufp->chgCData(oldp+158,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout),8);
        bufp->chgCData(oldp+159,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout),8);
        bufp->chgCData(oldp+160,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout),8);
    }
    bufp->chgBit(oldp+161,(vlSelf->mac_array_tb__DOT__clk));
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
