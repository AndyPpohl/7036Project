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
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x77617665U;
    __Vtemp_1[2U] = 0x7574732fU;
    __Vtemp_1[3U] = 0x6f757470U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->mac_tb__DOT__reset = 1U;
    vlSelf->mac_tb__DOT__a = 0U;
    vlSelf->mac_tb__DOT__b = 0U;
    vlSelf->mac_tb__DOT__cin = 0U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "source/mac_tb.sv", 
                                       24);
    vlSelf->mac_tb__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "source/mac_tb.sv", 
                                       26);
    vlSelf->mac_tb__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "source/mac_tb.sv", 
                                       28);
    vlSelf->mac_tb__DOT__a = 1U;
    vlSelf->mac_tb__DOT__b = 2U;
    vlSelf->mac_tb__DOT__cin = 3U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "source/mac_tb.sv", 
                                       32);
    vlSelf->mac_tb__DOT__a = 1U;
    vlSelf->mac_tb__DOT__b = 5U;
    vlSelf->mac_tb__DOT__cin = 6U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "source/mac_tb.sv", 
                                       36);
    VL_FINISH_MT("source/mac_tb.sv", 40, "");
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
                                     | ((~ (IData)(vlSelf->mac_tb__DOT__reset)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__mac_tb__DOT__reset__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__mac_tb__DOT__clk__0 
        = vlSelf->mac_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__mac_tb__DOT__reset__0 
        = vlSelf->mac_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmac_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
