// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmac_array_tb.h for the primary calling header

#include "Vmac_array_tb__pch.h"
#include "Vmac_array_tb__Syms.h"
#include "Vmac_array_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmac_array_tb___024root___eval_initial__TOP__Vtiming__0(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__2__a0;
    __Vtask_mac_array_tb__DOT__set_inputs__2__a0 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__2__a1;
    __Vtask_mac_array_tb__DOT__set_inputs__2__a1 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__2__a2;
    __Vtask_mac_array_tb__DOT__set_inputs__2__a2 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__2__a3;
    __Vtask_mac_array_tb__DOT__set_inputs__2__a3 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__2__c0;
    __Vtask_mac_array_tb__DOT__set_inputs__2__c0 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__2__c1;
    __Vtask_mac_array_tb__DOT__set_inputs__2__c1 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__2__c2;
    __Vtask_mac_array_tb__DOT__set_inputs__2__c2 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__2__c3;
    __Vtask_mac_array_tb__DOT__set_inputs__2__c3 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__4__a0;
    __Vtask_mac_array_tb__DOT__set_inputs__4__a0 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__4__a1;
    __Vtask_mac_array_tb__DOT__set_inputs__4__a1 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__4__a2;
    __Vtask_mac_array_tb__DOT__set_inputs__4__a2 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__4__a3;
    __Vtask_mac_array_tb__DOT__set_inputs__4__a3 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__4__c0;
    __Vtask_mac_array_tb__DOT__set_inputs__4__c0 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__4__c1;
    __Vtask_mac_array_tb__DOT__set_inputs__4__c1 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__4__c2;
    __Vtask_mac_array_tb__DOT__set_inputs__4__c2 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__4__c3;
    __Vtask_mac_array_tb__DOT__set_inputs__4__c3 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__6__a0;
    __Vtask_mac_array_tb__DOT__set_inputs__6__a0 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__6__a1;
    __Vtask_mac_array_tb__DOT__set_inputs__6__a1 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__6__a2;
    __Vtask_mac_array_tb__DOT__set_inputs__6__a2 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__6__a3;
    __Vtask_mac_array_tb__DOT__set_inputs__6__a3 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__6__c0;
    __Vtask_mac_array_tb__DOT__set_inputs__6__c0 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__6__c1;
    __Vtask_mac_array_tb__DOT__set_inputs__6__c1 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__6__c2;
    __Vtask_mac_array_tb__DOT__set_inputs__6__c2 = 0;
    CData/*7:0*/ __Vtask_mac_array_tb__DOT__set_inputs__6__c3;
    __Vtask_mac_array_tb__DOT__set_inputs__6__c3 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x77617665U;
    __Vtemp_1[2U] = 0x7574732fU;
    __Vtemp_1[3U] = 0x6f757470U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->mac_array_tb__DOT__weights[0U][0U] = 1U;
    vlSelf->mac_array_tb__DOT__weights[0U][1U] = 2U;
    vlSelf->mac_array_tb__DOT__weights[0U][2U] = 3U;
    vlSelf->mac_array_tb__DOT__weights[0U][3U] = 4U;
    vlSelf->mac_array_tb__DOT__weights[1U][0U] = 5U;
    vlSelf->mac_array_tb__DOT__weights[1U][1U] = 6U;
    vlSelf->mac_array_tb__DOT__weights[1U][2U] = 7U;
    vlSelf->mac_array_tb__DOT__weights[1U][3U] = 8U;
    vlSelf->mac_array_tb__DOT__weights[2U][0U] = 9U;
    vlSelf->mac_array_tb__DOT__weights[2U][1U] = 0xaU;
    vlSelf->mac_array_tb__DOT__weights[2U][2U] = 0xbU;
    vlSelf->mac_array_tb__DOT__weights[2U][3U] = 0xcU;
    vlSelf->mac_array_tb__DOT__weights[3U][0U] = 0xdU;
    vlSelf->mac_array_tb__DOT__weights[3U][1U] = 0xeU;
    vlSelf->mac_array_tb__DOT__weights[3U][2U] = 0xfU;
    vlSelf->mac_array_tb__DOT__weights[3U][3U] = 0x10U;
    vlSelf->mac_array_tb__DOT__nrst = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/mac_array_tb.sv", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h8888e10d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_array_tb.clk)", 
                                                       "source/mac_array_tb.sv", 
                                                       36);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mac_array_tb__DOT__nrst = 1U;
    __Vtask_mac_array_tb__DOT__set_inputs__2__c3 = 5U;
    __Vtask_mac_array_tb__DOT__set_inputs__2__c2 = 6U;
    __Vtask_mac_array_tb__DOT__set_inputs__2__c1 = 7U;
    __Vtask_mac_array_tb__DOT__set_inputs__2__c0 = 8U;
    __Vtask_mac_array_tb__DOT__set_inputs__2__a3 = 3U;
    __Vtask_mac_array_tb__DOT__set_inputs__2__a2 = 2U;
    __Vtask_mac_array_tb__DOT__set_inputs__2__a1 = 1U;
    __Vtask_mac_array_tb__DOT__set_inputs__2__a0 = 0U;
    vlSelf->mac_array_tb__DOT__ain[0U] = __Vtask_mac_array_tb__DOT__set_inputs__2__a0;
    vlSelf->mac_array_tb__DOT__ain[1U] = __Vtask_mac_array_tb__DOT__set_inputs__2__a1;
    vlSelf->mac_array_tb__DOT__ain[2U] = __Vtask_mac_array_tb__DOT__set_inputs__2__a2;
    vlSelf->mac_array_tb__DOT__ain[3U] = __Vtask_mac_array_tb__DOT__set_inputs__2__a3;
    vlSelf->mac_array_tb__DOT__cin[0U] = __Vtask_mac_array_tb__DOT__set_inputs__2__c0;
    vlSelf->mac_array_tb__DOT__cin[1U] = __Vtask_mac_array_tb__DOT__set_inputs__2__c1;
    vlSelf->mac_array_tb__DOT__cin[2U] = __Vtask_mac_array_tb__DOT__set_inputs__2__c2;
    vlSelf->mac_array_tb__DOT__cin[3U] = __Vtask_mac_array_tb__DOT__set_inputs__2__c3;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/mac_array_tb.sv", 
                                       96);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("---- OUTPUTS ----\nRow 0: aout=%0# cout=%0#\nRow 1: aout=%0# cout=%0#\nRow 2: aout=%0# cout=%0#\nRow 3: aout=%0# cout=%0#\n-----------------\n",0,
                 8,vlSelf->mac_array_tb__DOT__aout[0U],
                 8,vlSelf->mac_array_tb__DOT__cout[0U],
                 8,vlSelf->mac_array_tb__DOT__aout[1U],
                 8,vlSelf->mac_array_tb__DOT__cout[1U],
                 8,vlSelf->mac_array_tb__DOT__aout[2U],
                 8,vlSelf->mac_array_tb__DOT__cout[2U],
                 8,vlSelf->mac_array_tb__DOT__aout[3U],
                 8,vlSelf->mac_array_tb__DOT__cout[3U]);
    __Vtask_mac_array_tb__DOT__set_inputs__4__c3 = 2U;
    __Vtask_mac_array_tb__DOT__set_inputs__4__c2 = 3U;
    __Vtask_mac_array_tb__DOT__set_inputs__4__c1 = 4U;
    __Vtask_mac_array_tb__DOT__set_inputs__4__c0 = 5U;
    __Vtask_mac_array_tb__DOT__set_inputs__4__a3 = 7U;
    __Vtask_mac_array_tb__DOT__set_inputs__4__a2 = 6U;
    __Vtask_mac_array_tb__DOT__set_inputs__4__a1 = 5U;
    __Vtask_mac_array_tb__DOT__set_inputs__4__a0 = 4U;
    vlSelf->mac_array_tb__DOT__ain[0U] = __Vtask_mac_array_tb__DOT__set_inputs__4__a0;
    vlSelf->mac_array_tb__DOT__ain[1U] = __Vtask_mac_array_tb__DOT__set_inputs__4__a1;
    vlSelf->mac_array_tb__DOT__ain[2U] = __Vtask_mac_array_tb__DOT__set_inputs__4__a2;
    vlSelf->mac_array_tb__DOT__ain[3U] = __Vtask_mac_array_tb__DOT__set_inputs__4__a3;
    vlSelf->mac_array_tb__DOT__cin[0U] = __Vtask_mac_array_tb__DOT__set_inputs__4__c0;
    vlSelf->mac_array_tb__DOT__cin[1U] = __Vtask_mac_array_tb__DOT__set_inputs__4__c1;
    vlSelf->mac_array_tb__DOT__cin[2U] = __Vtask_mac_array_tb__DOT__set_inputs__4__c2;
    vlSelf->mac_array_tb__DOT__cin[3U] = __Vtask_mac_array_tb__DOT__set_inputs__4__c3;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/mac_array_tb.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("---- OUTPUTS ----\nRow 0: aout=%0# cout=%0#\nRow 1: aout=%0# cout=%0#\nRow 2: aout=%0# cout=%0#\nRow 3: aout=%0# cout=%0#\n-----------------\n",0,
                 8,vlSelf->mac_array_tb__DOT__aout[0U],
                 8,vlSelf->mac_array_tb__DOT__cout[0U],
                 8,vlSelf->mac_array_tb__DOT__aout[1U],
                 8,vlSelf->mac_array_tb__DOT__cout[1U],
                 8,vlSelf->mac_array_tb__DOT__aout[2U],
                 8,vlSelf->mac_array_tb__DOT__cout[2U],
                 8,vlSelf->mac_array_tb__DOT__aout[3U],
                 8,vlSelf->mac_array_tb__DOT__cout[3U]);
    __Vtask_mac_array_tb__DOT__set_inputs__6__c3 = 4U;
    __Vtask_mac_array_tb__DOT__set_inputs__6__c2 = 3U;
    __Vtask_mac_array_tb__DOT__set_inputs__6__c1 = 2U;
    __Vtask_mac_array_tb__DOT__set_inputs__6__c0 = 1U;
    __Vtask_mac_array_tb__DOT__set_inputs__6__a3 = 0xbU;
    __Vtask_mac_array_tb__DOT__set_inputs__6__a2 = 0xaU;
    __Vtask_mac_array_tb__DOT__set_inputs__6__a1 = 9U;
    __Vtask_mac_array_tb__DOT__set_inputs__6__a0 = 8U;
    vlSelf->mac_array_tb__DOT__ain[0U] = __Vtask_mac_array_tb__DOT__set_inputs__6__a0;
    vlSelf->mac_array_tb__DOT__ain[1U] = __Vtask_mac_array_tb__DOT__set_inputs__6__a1;
    vlSelf->mac_array_tb__DOT__ain[2U] = __Vtask_mac_array_tb__DOT__set_inputs__6__a2;
    vlSelf->mac_array_tb__DOT__ain[3U] = __Vtask_mac_array_tb__DOT__set_inputs__6__a3;
    vlSelf->mac_array_tb__DOT__cin[0U] = __Vtask_mac_array_tb__DOT__set_inputs__6__c0;
    vlSelf->mac_array_tb__DOT__cin[1U] = __Vtask_mac_array_tb__DOT__set_inputs__6__c1;
    vlSelf->mac_array_tb__DOT__cin[2U] = __Vtask_mac_array_tb__DOT__set_inputs__6__c2;
    vlSelf->mac_array_tb__DOT__cin[3U] = __Vtask_mac_array_tb__DOT__set_inputs__6__c3;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/mac_array_tb.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("---- OUTPUTS ----\nRow 0: aout=%0# cout=%0#\nRow 1: aout=%0# cout=%0#\nRow 2: aout=%0# cout=%0#\nRow 3: aout=%0# cout=%0#\n-----------------\n",0,
                 8,vlSelf->mac_array_tb__DOT__aout[0U],
                 8,vlSelf->mac_array_tb__DOT__cout[0U],
                 8,vlSelf->mac_array_tb__DOT__aout[1U],
                 8,vlSelf->mac_array_tb__DOT__cout[1U],
                 8,vlSelf->mac_array_tb__DOT__aout[2U],
                 8,vlSelf->mac_array_tb__DOT__cout[2U],
                 8,vlSelf->mac_array_tb__DOT__aout[3U],
                 8,vlSelf->mac_array_tb__DOT__cout[3U]);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/mac_array_tb.sv", 
                                       109);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("source/mac_array_tb.sv", 111, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_array_tb___024root___dump_triggers__act(Vmac_array_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmac_array_tb___024root___eval_triggers__act(Vmac_array_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->mac_array_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__mac_array_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->mac_array_tb__DOT__nrst)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__mac_array_tb__DOT__nrst__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->mac_array_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__mac_array_tb__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__mac_array_tb__DOT__clk__0 
        = vlSelf->mac_array_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__mac_array_tb__DOT__nrst__0 
        = vlSelf->mac_array_tb__DOT__nrst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmac_array_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
