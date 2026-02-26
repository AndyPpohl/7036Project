// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmac_tb.h for the primary calling header

#include "Vmac_tb__pch.h"
#include "Vmac_tb__Syms.h"
#include "Vmac_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmac_tb___024root___eval_initial__TOP__Vtiming__0(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*7:0*/ __Vtask_mac_tb__DOT__macop__1__at;
    __Vtask_mac_tb__DOT__macop__1__at = 0;
    CData/*7:0*/ __Vtask_mac_tb__DOT__macop__1__bt;
    __Vtask_mac_tb__DOT__macop__1__bt = 0;
    CData/*7:0*/ __Vtask_mac_tb__DOT__macop__1__cint;
    __Vtask_mac_tb__DOT__macop__1__cint = 0;
    CData/*7:0*/ __Vtask_mac_tb__DOT__macop__2__at;
    __Vtask_mac_tb__DOT__macop__2__at = 0;
    CData/*7:0*/ __Vtask_mac_tb__DOT__macop__2__bt;
    __Vtask_mac_tb__DOT__macop__2__bt = 0;
    CData/*7:0*/ __Vtask_mac_tb__DOT__macop__2__cint;
    __Vtask_mac_tb__DOT__macop__2__cint = 0;
    CData/*7:0*/ __Vtask_mac_tb__DOT__macop__3__at;
    __Vtask_mac_tb__DOT__macop__3__at = 0;
    CData/*7:0*/ __Vtask_mac_tb__DOT__macop__3__bt;
    __Vtask_mac_tb__DOT__macop__3__bt = 0;
    CData/*7:0*/ __Vtask_mac_tb__DOT__macop__3__cint;
    __Vtask_mac_tb__DOT__macop__3__cint = 0;
    CData/*7:0*/ __Vtask_mac_tb__DOT__macop__4__at;
    __Vtask_mac_tb__DOT__macop__4__at = 0;
    CData/*7:0*/ __Vtask_mac_tb__DOT__macop__4__bt;
    __Vtask_mac_tb__DOT__macop__4__bt = 0;
    CData/*7:0*/ __Vtask_mac_tb__DOT__macop__4__cint;
    __Vtask_mac_tb__DOT__macop__4__cint = 0;
    CData/*7:0*/ __Vtask_mac_tb__DOT__macop__5__at;
    __Vtask_mac_tb__DOT__macop__5__at = 0;
    CData/*7:0*/ __Vtask_mac_tb__DOT__macop__5__bt;
    __Vtask_mac_tb__DOT__macop__5__bt = 0;
    CData/*7:0*/ __Vtask_mac_tb__DOT__macop__5__cint;
    __Vtask_mac_tb__DOT__macop__5__cint = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x77617665U;
    __Vtemp_1[2U] = 0x7574732fU;
    __Vtemp_1[3U] = 0x6f757470U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->mac_tb__DOT__nrst = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/mac_tb.sv", 
                                       21);
    co_await vlSelf->__VtrigSched_h41009cb5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge mac_tb.clk)", 
                                                       "source/mac_tb.sv", 
                                                       22);
    vlSelf->mac_tb__DOT__nrst = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/mac_tb.sv", 
                                       44);
    __Vtask_mac_tb__DOT__macop__1__cint = 3U;
    __Vtask_mac_tb__DOT__macop__1__bt = 2U;
    __Vtask_mac_tb__DOT__macop__1__at = 1U;
    vlSelf->mac_tb__DOT__a = __Vtask_mac_tb__DOT__macop__1__at;
    vlSelf->mac_tb__DOT__b = __Vtask_mac_tb__DOT__macop__1__bt;
    vlSelf->mac_tb__DOT__cin = __Vtask_mac_tb__DOT__macop__1__cint;
    VL_WRITEF_NX("Performing MAC: (%0#) * (%0# + %0#)\n\n",0,
                 8,__Vtask_mac_tb__DOT__macop__1__cint,
                 8,(IData)(__Vtask_mac_tb__DOT__macop__1__at),
                 8,__Vtask_mac_tb__DOT__macop__1__bt);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/mac_tb.sv", 
                                       33);
    VL_WRITEF_NX("Output of MAC: %0#\n\n",0,8,vlSelf->mac_tb__DOT__cout);
    __Vtask_mac_tb__DOT__macop__2__cint = 3U;
    __Vtask_mac_tb__DOT__macop__2__bt = 6U;
    __Vtask_mac_tb__DOT__macop__2__at = 5U;
    vlSelf->mac_tb__DOT__a = __Vtask_mac_tb__DOT__macop__2__at;
    vlSelf->mac_tb__DOT__b = __Vtask_mac_tb__DOT__macop__2__bt;
    vlSelf->mac_tb__DOT__cin = __Vtask_mac_tb__DOT__macop__2__cint;
    VL_WRITEF_NX("Performing MAC: (%0#) * (%0# + %0#)\n\n",0,
                 8,__Vtask_mac_tb__DOT__macop__2__cint,
                 8,(IData)(__Vtask_mac_tb__DOT__macop__2__at),
                 8,__Vtask_mac_tb__DOT__macop__2__bt);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/mac_tb.sv", 
                                       33);
    VL_WRITEF_NX("Output of MAC: %0#\n\n",0,8,vlSelf->mac_tb__DOT__cout);
    __Vtask_mac_tb__DOT__macop__3__cint = 7U;
    __Vtask_mac_tb__DOT__macop__3__bt = 4U;
    __Vtask_mac_tb__DOT__macop__3__at = 0xcU;
    vlSelf->mac_tb__DOT__a = __Vtask_mac_tb__DOT__macop__3__at;
    vlSelf->mac_tb__DOT__b = __Vtask_mac_tb__DOT__macop__3__bt;
    vlSelf->mac_tb__DOT__cin = __Vtask_mac_tb__DOT__macop__3__cint;
    VL_WRITEF_NX("Performing MAC: (%0#) * (%0# + %0#)\n\n",0,
                 8,__Vtask_mac_tb__DOT__macop__3__cint,
                 8,(IData)(__Vtask_mac_tb__DOT__macop__3__at),
                 8,__Vtask_mac_tb__DOT__macop__3__bt);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/mac_tb.sv", 
                                       33);
    VL_WRITEF_NX("Output of MAC: %0#\n\n",0,8,vlSelf->mac_tb__DOT__cout);
    __Vtask_mac_tb__DOT__macop__4__cint = 9U;
    __Vtask_mac_tb__DOT__macop__4__bt = 6U;
    __Vtask_mac_tb__DOT__macop__4__at = 0x14U;
    vlSelf->mac_tb__DOT__a = __Vtask_mac_tb__DOT__macop__4__at;
    vlSelf->mac_tb__DOT__b = __Vtask_mac_tb__DOT__macop__4__bt;
    vlSelf->mac_tb__DOT__cin = __Vtask_mac_tb__DOT__macop__4__cint;
    VL_WRITEF_NX("Performing MAC: (%0#) * (%0# + %0#)\n\n",0,
                 8,__Vtask_mac_tb__DOT__macop__4__cint,
                 8,(IData)(__Vtask_mac_tb__DOT__macop__4__at),
                 8,__Vtask_mac_tb__DOT__macop__4__bt);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/mac_tb.sv", 
                                       33);
    VL_WRITEF_NX("Output of MAC: %0#\n\n",0,8,vlSelf->mac_tb__DOT__cout);
    __Vtask_mac_tb__DOT__macop__5__cint = 0xbU;
    __Vtask_mac_tb__DOT__macop__5__bt = 9U;
    __Vtask_mac_tb__DOT__macop__5__at = 0x15U;
    vlSelf->mac_tb__DOT__a = __Vtask_mac_tb__DOT__macop__5__at;
    vlSelf->mac_tb__DOT__b = __Vtask_mac_tb__DOT__macop__5__bt;
    vlSelf->mac_tb__DOT__cin = __Vtask_mac_tb__DOT__macop__5__cint;
    VL_WRITEF_NX("Performing MAC: (%0#) * (%0# + %0#)\n\n",0,
                 8,__Vtask_mac_tb__DOT__macop__5__cint,
                 8,(IData)(__Vtask_mac_tb__DOT__macop__5__at),
                 8,__Vtask_mac_tb__DOT__macop__5__bt);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/mac_tb.sv", 
                                       33);
    VL_WRITEF_NX("Output of MAC: %0#\n\n",0,8,vlSelf->mac_tb__DOT__cout);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "source/mac_tb.sv", 
                                       50);
    VL_FINISH_MT("source/mac_tb.sv", 53, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_tb___024root___dump_triggers__act(Vmac_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmac_tb___024root___eval_triggers__act(Vmac_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->mac_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__mac_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->mac_tb__DOT__nrst)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__mac_tb__DOT__nrst__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->mac_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__mac_tb__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__mac_tb__DOT__clk__0 
        = vlSelf->mac_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__mac_tb__DOT__nrst__0 
        = vlSelf->mac_tb__DOT__nrst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmac_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
