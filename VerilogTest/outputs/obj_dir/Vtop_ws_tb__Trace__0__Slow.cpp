// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_ws_tb__Syms.h"


VL_ATTR_COLD void Vtop_ws_tb___024root__trace_init_sub__TOP__0(Vtop_ws_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("top_ws_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+450,0,"DIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("A", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+221,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+223,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+224,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+225,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+226,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+227,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+228,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+229,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+230,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+233,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+234,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+236,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("B", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+2,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+6,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+10,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+14,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("C", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+258,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+262,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+266,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+270,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+274,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"weight_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"out_skew_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+454,0,"run_multiply__Vstatic__k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+455,0,"run_multiply__Vstatic__r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+19,0,"compute_expected__Vstatic__r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+20,0,"compute_expected__Vstatic__c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+21,0,"compute_expected__Vstatic__k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+447,0,"check_results__Vstatic__r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+448,0,"check_results__Vstatic__c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+449,0,"check_results__Vstatic__errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("A1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+22,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+26,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+30,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+31,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+32,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+34,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+35,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("A2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+38,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+42,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+46,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+48,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+49,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+50,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("A3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+54,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+57,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+58,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+59,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+60,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+62,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+64,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+65,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+66,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+68,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+69,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("A4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+70,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+72,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+73,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+74,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+75,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+76,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+77,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+78,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+79,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+80,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+81,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+82,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+83,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("A5", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+86,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+87,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+88,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+89,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+90,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+91,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+92,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+94,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+95,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+96,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+98,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+99,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+100,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+101,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("C1_expected", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+102,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+106,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+110,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+114,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("C2_expected", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+118,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+122,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+126,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+130,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("C3_expected", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+134,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+138,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+142,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+146,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("C4_expected", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+150,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+154,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+158,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+162,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("C5_expected", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+166,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+170,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+174,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+178,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+182,0,"val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+450,0,"DIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"weight_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("B", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+2,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+6,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+10,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+14,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+237,0,"activation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("A", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+221,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+223,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+224,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+225,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+226,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+227,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+228,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+229,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+230,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+233,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+234,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+236,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("C", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+258,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+262,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+266,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+270,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+274,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"out_skew_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+238,0,"weights_flat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+276,0,"in_a_skew",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+277,0,"out_c_skew",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"skew_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"row_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"in_skew_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+456,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+457,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+457,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+286,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"stream_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"stream_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+289,0,"streaming",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+290,0,"row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("C_buf0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+291,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+295,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+299,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+303,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("C_buf1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+307,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+311,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+315,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+319,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+321,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+323,0,"buf_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("skewer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+450,0,"DIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+238,0,"weights_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+282,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+276,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+277,0,"out_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+283,0,"row_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"in_skew_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("sr_a", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+324,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+325,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+326,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+327,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+328,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+329,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+330,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+331,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+332,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+333,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+334,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+335,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+336,0,"skewed_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+337,0,"raw_psum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("sr_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+341,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+342,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+344,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+346,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+347,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+348,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+349,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+350,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+351,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+352,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+453,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+450,0,"CTR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+458,0,"CTR_VALID_LO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+459,0,"CTR_VALID_HI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+353,0,"ctr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+354,0,"valid_ctr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+355,0,"valid_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+356,0,"out_valid_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"counting",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+460,0,"ROW_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+461,0,"ROW_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+450,0,"DIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+238,0,"weights_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+336,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+337,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("a_wire", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+358,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+359,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+360,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+361,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+362,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+363,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+364,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+365,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+366,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+367,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+368,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+369,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+370,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+371,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+372,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+373,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+374,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+375,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+376,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+377,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("psum_wire", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+185,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+189,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+193,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+197,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+201,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+242,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+378,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+379,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+205,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+380,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+381,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+243,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+382,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+383,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+206,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+385,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+386,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+387,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+207,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+388,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+389,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+245,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+390,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+391,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+208,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+392,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+393,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+246,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+394,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+395,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+209,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+396,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+397,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+247,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+398,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+399,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+210,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+400,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+401,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+248,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+402,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+403,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+211,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+404,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+405,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+249,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+406,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+407,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+212,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+408,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+409,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+410,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+411,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+213,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+412,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+414,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+415,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+214,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+416,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+417,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+418,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+419,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+420,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+422,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+423,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+216,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+424,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+425,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+426,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+427,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+217,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+430,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+431,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+218,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+432,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+433,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+256,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+434,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+435,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+219,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+436,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+438,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+439,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+220,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+440,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+441,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+443,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+444,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+445,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+457,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+457,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+183,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+184,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_ws_tb___024root__trace_init_top(Vtop_ws_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root__trace_init_top\n"); );
    // Body
    Vtop_ws_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_ws_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop_ws_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_ws_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_ws_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_ws_tb___024root__trace_register(Vtop_ws_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop_ws_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop_ws_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop_ws_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop_ws_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_ws_tb___024root__trace_const_0_sub_0(Vtop_ws_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_ws_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root__trace_const_0\n"); );
    // Init
    Vtop_ws_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_ws_tb___024root*>(voidSelf);
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_ws_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_ws_tb___024root__trace_const_0_sub_0(Vtop_ws_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+450,(4U),32);
    bufp->fullIData(oldp+451,(8U),32);
    bufp->fullIData(oldp+452,(0x20U),32);
    bufp->fullIData(oldp+453,(0xaU),32);
    bufp->fullIData(oldp+454,(vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__k),32);
    bufp->fullIData(oldp+455,(vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r),32);
    bufp->fullIData(oldp+456,(vlSelf->top_ws_tb__DOT__dut__DOT__c),32);
    bufp->fullIData(oldp+457,(4U),32);
    bufp->fullCData(oldp+458,(9U),4);
    bufp->fullCData(oldp+459,(0xcU),4);
    bufp->fullIData(oldp+460,(7U),32);
    bufp->fullCData(oldp+461,(0xbU),4);
}

VL_ATTR_COLD void Vtop_ws_tb___024root__trace_full_0_sub_0(Vtop_ws_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_ws_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root__trace_full_0\n"); );
    // Init
    Vtop_ws_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_ws_tb___024root*>(voidSelf);
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_ws_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_ws_tb___024root__trace_full_0_sub_0(Vtop_ws_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ws_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top_ws_tb__DOT__rst_n));
    bufp->fullCData(oldp+2,(vlSelf->top_ws_tb__DOT__B
                            [0U][0U]),8);
    bufp->fullCData(oldp+3,(vlSelf->top_ws_tb__DOT__B
                            [0U][1U]),8);
    bufp->fullCData(oldp+4,(vlSelf->top_ws_tb__DOT__B
                            [0U][2U]),8);
    bufp->fullCData(oldp+5,(vlSelf->top_ws_tb__DOT__B
                            [0U][3U]),8);
    bufp->fullCData(oldp+6,(vlSelf->top_ws_tb__DOT__B
                            [1U][0U]),8);
    bufp->fullCData(oldp+7,(vlSelf->top_ws_tb__DOT__B
                            [1U][1U]),8);
    bufp->fullCData(oldp+8,(vlSelf->top_ws_tb__DOT__B
                            [1U][2U]),8);
    bufp->fullCData(oldp+9,(vlSelf->top_ws_tb__DOT__B
                            [1U][3U]),8);
    bufp->fullCData(oldp+10,(vlSelf->top_ws_tb__DOT__B
                             [2U][0U]),8);
    bufp->fullCData(oldp+11,(vlSelf->top_ws_tb__DOT__B
                             [2U][1U]),8);
    bufp->fullCData(oldp+12,(vlSelf->top_ws_tb__DOT__B
                             [2U][2U]),8);
    bufp->fullCData(oldp+13,(vlSelf->top_ws_tb__DOT__B
                             [2U][3U]),8);
    bufp->fullCData(oldp+14,(vlSelf->top_ws_tb__DOT__B
                             [3U][0U]),8);
    bufp->fullCData(oldp+15,(vlSelf->top_ws_tb__DOT__B
                             [3U][1U]),8);
    bufp->fullCData(oldp+16,(vlSelf->top_ws_tb__DOT__B
                             [3U][2U]),8);
    bufp->fullCData(oldp+17,(vlSelf->top_ws_tb__DOT__B
                             [3U][3U]),8);
    bufp->fullBit(oldp+18,(vlSelf->top_ws_tb__DOT__weight_load));
    bufp->fullIData(oldp+19,(vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r),32);
    bufp->fullIData(oldp+20,(vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c),32);
    bufp->fullIData(oldp+21,(vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k),32);
    bufp->fullCData(oldp+22,(vlSelf->top_ws_tb__DOT__A1
                             [0U][0U]),8);
    bufp->fullCData(oldp+23,(vlSelf->top_ws_tb__DOT__A1
                             [0U][1U]),8);
    bufp->fullCData(oldp+24,(vlSelf->top_ws_tb__DOT__A1
                             [0U][2U]),8);
    bufp->fullCData(oldp+25,(vlSelf->top_ws_tb__DOT__A1
                             [0U][3U]),8);
    bufp->fullCData(oldp+26,(vlSelf->top_ws_tb__DOT__A1
                             [1U][0U]),8);
    bufp->fullCData(oldp+27,(vlSelf->top_ws_tb__DOT__A1
                             [1U][1U]),8);
    bufp->fullCData(oldp+28,(vlSelf->top_ws_tb__DOT__A1
                             [1U][2U]),8);
    bufp->fullCData(oldp+29,(vlSelf->top_ws_tb__DOT__A1
                             [1U][3U]),8);
    bufp->fullCData(oldp+30,(vlSelf->top_ws_tb__DOT__A1
                             [2U][0U]),8);
    bufp->fullCData(oldp+31,(vlSelf->top_ws_tb__DOT__A1
                             [2U][1U]),8);
    bufp->fullCData(oldp+32,(vlSelf->top_ws_tb__DOT__A1
                             [2U][2U]),8);
    bufp->fullCData(oldp+33,(vlSelf->top_ws_tb__DOT__A1
                             [2U][3U]),8);
    bufp->fullCData(oldp+34,(vlSelf->top_ws_tb__DOT__A1
                             [3U][0U]),8);
    bufp->fullCData(oldp+35,(vlSelf->top_ws_tb__DOT__A1
                             [3U][1U]),8);
    bufp->fullCData(oldp+36,(vlSelf->top_ws_tb__DOT__A1
                             [3U][2U]),8);
    bufp->fullCData(oldp+37,(vlSelf->top_ws_tb__DOT__A1
                             [3U][3U]),8);
    bufp->fullCData(oldp+38,(vlSelf->top_ws_tb__DOT__A2
                             [0U][0U]),8);
    bufp->fullCData(oldp+39,(vlSelf->top_ws_tb__DOT__A2
                             [0U][1U]),8);
    bufp->fullCData(oldp+40,(vlSelf->top_ws_tb__DOT__A2
                             [0U][2U]),8);
    bufp->fullCData(oldp+41,(vlSelf->top_ws_tb__DOT__A2
                             [0U][3U]),8);
    bufp->fullCData(oldp+42,(vlSelf->top_ws_tb__DOT__A2
                             [1U][0U]),8);
    bufp->fullCData(oldp+43,(vlSelf->top_ws_tb__DOT__A2
                             [1U][1U]),8);
    bufp->fullCData(oldp+44,(vlSelf->top_ws_tb__DOT__A2
                             [1U][2U]),8);
    bufp->fullCData(oldp+45,(vlSelf->top_ws_tb__DOT__A2
                             [1U][3U]),8);
    bufp->fullCData(oldp+46,(vlSelf->top_ws_tb__DOT__A2
                             [2U][0U]),8);
    bufp->fullCData(oldp+47,(vlSelf->top_ws_tb__DOT__A2
                             [2U][1U]),8);
    bufp->fullCData(oldp+48,(vlSelf->top_ws_tb__DOT__A2
                             [2U][2U]),8);
    bufp->fullCData(oldp+49,(vlSelf->top_ws_tb__DOT__A2
                             [2U][3U]),8);
    bufp->fullCData(oldp+50,(vlSelf->top_ws_tb__DOT__A2
                             [3U][0U]),8);
    bufp->fullCData(oldp+51,(vlSelf->top_ws_tb__DOT__A2
                             [3U][1U]),8);
    bufp->fullCData(oldp+52,(vlSelf->top_ws_tb__DOT__A2
                             [3U][2U]),8);
    bufp->fullCData(oldp+53,(vlSelf->top_ws_tb__DOT__A2
                             [3U][3U]),8);
    bufp->fullCData(oldp+54,(vlSelf->top_ws_tb__DOT__A3
                             [0U][0U]),8);
    bufp->fullCData(oldp+55,(vlSelf->top_ws_tb__DOT__A3
                             [0U][1U]),8);
    bufp->fullCData(oldp+56,(vlSelf->top_ws_tb__DOT__A3
                             [0U][2U]),8);
    bufp->fullCData(oldp+57,(vlSelf->top_ws_tb__DOT__A3
                             [0U][3U]),8);
    bufp->fullCData(oldp+58,(vlSelf->top_ws_tb__DOT__A3
                             [1U][0U]),8);
    bufp->fullCData(oldp+59,(vlSelf->top_ws_tb__DOT__A3
                             [1U][1U]),8);
    bufp->fullCData(oldp+60,(vlSelf->top_ws_tb__DOT__A3
                             [1U][2U]),8);
    bufp->fullCData(oldp+61,(vlSelf->top_ws_tb__DOT__A3
                             [1U][3U]),8);
    bufp->fullCData(oldp+62,(vlSelf->top_ws_tb__DOT__A3
                             [2U][0U]),8);
    bufp->fullCData(oldp+63,(vlSelf->top_ws_tb__DOT__A3
                             [2U][1U]),8);
    bufp->fullCData(oldp+64,(vlSelf->top_ws_tb__DOT__A3
                             [2U][2U]),8);
    bufp->fullCData(oldp+65,(vlSelf->top_ws_tb__DOT__A3
                             [2U][3U]),8);
    bufp->fullCData(oldp+66,(vlSelf->top_ws_tb__DOT__A3
                             [3U][0U]),8);
    bufp->fullCData(oldp+67,(vlSelf->top_ws_tb__DOT__A3
                             [3U][1U]),8);
    bufp->fullCData(oldp+68,(vlSelf->top_ws_tb__DOT__A3
                             [3U][2U]),8);
    bufp->fullCData(oldp+69,(vlSelf->top_ws_tb__DOT__A3
                             [3U][3U]),8);
    bufp->fullCData(oldp+70,(vlSelf->top_ws_tb__DOT__A4
                             [0U][0U]),8);
    bufp->fullCData(oldp+71,(vlSelf->top_ws_tb__DOT__A4
                             [0U][1U]),8);
    bufp->fullCData(oldp+72,(vlSelf->top_ws_tb__DOT__A4
                             [0U][2U]),8);
    bufp->fullCData(oldp+73,(vlSelf->top_ws_tb__DOT__A4
                             [0U][3U]),8);
    bufp->fullCData(oldp+74,(vlSelf->top_ws_tb__DOT__A4
                             [1U][0U]),8);
    bufp->fullCData(oldp+75,(vlSelf->top_ws_tb__DOT__A4
                             [1U][1U]),8);
    bufp->fullCData(oldp+76,(vlSelf->top_ws_tb__DOT__A4
                             [1U][2U]),8);
    bufp->fullCData(oldp+77,(vlSelf->top_ws_tb__DOT__A4
                             [1U][3U]),8);
    bufp->fullCData(oldp+78,(vlSelf->top_ws_tb__DOT__A4
                             [2U][0U]),8);
    bufp->fullCData(oldp+79,(vlSelf->top_ws_tb__DOT__A4
                             [2U][1U]),8);
    bufp->fullCData(oldp+80,(vlSelf->top_ws_tb__DOT__A4
                             [2U][2U]),8);
    bufp->fullCData(oldp+81,(vlSelf->top_ws_tb__DOT__A4
                             [2U][3U]),8);
    bufp->fullCData(oldp+82,(vlSelf->top_ws_tb__DOT__A4
                             [3U][0U]),8);
    bufp->fullCData(oldp+83,(vlSelf->top_ws_tb__DOT__A4
                             [3U][1U]),8);
    bufp->fullCData(oldp+84,(vlSelf->top_ws_tb__DOT__A4
                             [3U][2U]),8);
    bufp->fullCData(oldp+85,(vlSelf->top_ws_tb__DOT__A4
                             [3U][3U]),8);
    bufp->fullCData(oldp+86,(vlSelf->top_ws_tb__DOT__A5
                             [0U][0U]),8);
    bufp->fullCData(oldp+87,(vlSelf->top_ws_tb__DOT__A5
                             [0U][1U]),8);
    bufp->fullCData(oldp+88,(vlSelf->top_ws_tb__DOT__A5
                             [0U][2U]),8);
    bufp->fullCData(oldp+89,(vlSelf->top_ws_tb__DOT__A5
                             [0U][3U]),8);
    bufp->fullCData(oldp+90,(vlSelf->top_ws_tb__DOT__A5
                             [1U][0U]),8);
    bufp->fullCData(oldp+91,(vlSelf->top_ws_tb__DOT__A5
                             [1U][1U]),8);
    bufp->fullCData(oldp+92,(vlSelf->top_ws_tb__DOT__A5
                             [1U][2U]),8);
    bufp->fullCData(oldp+93,(vlSelf->top_ws_tb__DOT__A5
                             [1U][3U]),8);
    bufp->fullCData(oldp+94,(vlSelf->top_ws_tb__DOT__A5
                             [2U][0U]),8);
    bufp->fullCData(oldp+95,(vlSelf->top_ws_tb__DOT__A5
                             [2U][1U]),8);
    bufp->fullCData(oldp+96,(vlSelf->top_ws_tb__DOT__A5
                             [2U][2U]),8);
    bufp->fullCData(oldp+97,(vlSelf->top_ws_tb__DOT__A5
                             [2U][3U]),8);
    bufp->fullCData(oldp+98,(vlSelf->top_ws_tb__DOT__A5
                             [3U][0U]),8);
    bufp->fullCData(oldp+99,(vlSelf->top_ws_tb__DOT__A5
                             [3U][1U]),8);
    bufp->fullCData(oldp+100,(vlSelf->top_ws_tb__DOT__A5
                              [3U][2U]),8);
    bufp->fullCData(oldp+101,(vlSelf->top_ws_tb__DOT__A5
                              [3U][3U]),8);
    bufp->fullIData(oldp+102,(vlSelf->top_ws_tb__DOT__C1_expected
                              [0U][0U]),32);
    bufp->fullIData(oldp+103,(vlSelf->top_ws_tb__DOT__C1_expected
                              [0U][1U]),32);
    bufp->fullIData(oldp+104,(vlSelf->top_ws_tb__DOT__C1_expected
                              [0U][2U]),32);
    bufp->fullIData(oldp+105,(vlSelf->top_ws_tb__DOT__C1_expected
                              [0U][3U]),32);
    bufp->fullIData(oldp+106,(vlSelf->top_ws_tb__DOT__C1_expected
                              [1U][0U]),32);
    bufp->fullIData(oldp+107,(vlSelf->top_ws_tb__DOT__C1_expected
                              [1U][1U]),32);
    bufp->fullIData(oldp+108,(vlSelf->top_ws_tb__DOT__C1_expected
                              [1U][2U]),32);
    bufp->fullIData(oldp+109,(vlSelf->top_ws_tb__DOT__C1_expected
                              [1U][3U]),32);
    bufp->fullIData(oldp+110,(vlSelf->top_ws_tb__DOT__C1_expected
                              [2U][0U]),32);
    bufp->fullIData(oldp+111,(vlSelf->top_ws_tb__DOT__C1_expected
                              [2U][1U]),32);
    bufp->fullIData(oldp+112,(vlSelf->top_ws_tb__DOT__C1_expected
                              [2U][2U]),32);
    bufp->fullIData(oldp+113,(vlSelf->top_ws_tb__DOT__C1_expected
                              [2U][3U]),32);
    bufp->fullIData(oldp+114,(vlSelf->top_ws_tb__DOT__C1_expected
                              [3U][0U]),32);
    bufp->fullIData(oldp+115,(vlSelf->top_ws_tb__DOT__C1_expected
                              [3U][1U]),32);
    bufp->fullIData(oldp+116,(vlSelf->top_ws_tb__DOT__C1_expected
                              [3U][2U]),32);
    bufp->fullIData(oldp+117,(vlSelf->top_ws_tb__DOT__C1_expected
                              [3U][3U]),32);
    bufp->fullIData(oldp+118,(vlSelf->top_ws_tb__DOT__C2_expected
                              [0U][0U]),32);
    bufp->fullIData(oldp+119,(vlSelf->top_ws_tb__DOT__C2_expected
                              [0U][1U]),32);
    bufp->fullIData(oldp+120,(vlSelf->top_ws_tb__DOT__C2_expected
                              [0U][2U]),32);
    bufp->fullIData(oldp+121,(vlSelf->top_ws_tb__DOT__C2_expected
                              [0U][3U]),32);
    bufp->fullIData(oldp+122,(vlSelf->top_ws_tb__DOT__C2_expected
                              [1U][0U]),32);
    bufp->fullIData(oldp+123,(vlSelf->top_ws_tb__DOT__C2_expected
                              [1U][1U]),32);
    bufp->fullIData(oldp+124,(vlSelf->top_ws_tb__DOT__C2_expected
                              [1U][2U]),32);
    bufp->fullIData(oldp+125,(vlSelf->top_ws_tb__DOT__C2_expected
                              [1U][3U]),32);
    bufp->fullIData(oldp+126,(vlSelf->top_ws_tb__DOT__C2_expected
                              [2U][0U]),32);
    bufp->fullIData(oldp+127,(vlSelf->top_ws_tb__DOT__C2_expected
                              [2U][1U]),32);
    bufp->fullIData(oldp+128,(vlSelf->top_ws_tb__DOT__C2_expected
                              [2U][2U]),32);
    bufp->fullIData(oldp+129,(vlSelf->top_ws_tb__DOT__C2_expected
                              [2U][3U]),32);
    bufp->fullIData(oldp+130,(vlSelf->top_ws_tb__DOT__C2_expected
                              [3U][0U]),32);
    bufp->fullIData(oldp+131,(vlSelf->top_ws_tb__DOT__C2_expected
                              [3U][1U]),32);
    bufp->fullIData(oldp+132,(vlSelf->top_ws_tb__DOT__C2_expected
                              [3U][2U]),32);
    bufp->fullIData(oldp+133,(vlSelf->top_ws_tb__DOT__C2_expected
                              [3U][3U]),32);
    bufp->fullIData(oldp+134,(vlSelf->top_ws_tb__DOT__C3_expected
                              [0U][0U]),32);
    bufp->fullIData(oldp+135,(vlSelf->top_ws_tb__DOT__C3_expected
                              [0U][1U]),32);
    bufp->fullIData(oldp+136,(vlSelf->top_ws_tb__DOT__C3_expected
                              [0U][2U]),32);
    bufp->fullIData(oldp+137,(vlSelf->top_ws_tb__DOT__C3_expected
                              [0U][3U]),32);
    bufp->fullIData(oldp+138,(vlSelf->top_ws_tb__DOT__C3_expected
                              [1U][0U]),32);
    bufp->fullIData(oldp+139,(vlSelf->top_ws_tb__DOT__C3_expected
                              [1U][1U]),32);
    bufp->fullIData(oldp+140,(vlSelf->top_ws_tb__DOT__C3_expected
                              [1U][2U]),32);
    bufp->fullIData(oldp+141,(vlSelf->top_ws_tb__DOT__C3_expected
                              [1U][3U]),32);
    bufp->fullIData(oldp+142,(vlSelf->top_ws_tb__DOT__C3_expected
                              [2U][0U]),32);
    bufp->fullIData(oldp+143,(vlSelf->top_ws_tb__DOT__C3_expected
                              [2U][1U]),32);
    bufp->fullIData(oldp+144,(vlSelf->top_ws_tb__DOT__C3_expected
                              [2U][2U]),32);
    bufp->fullIData(oldp+145,(vlSelf->top_ws_tb__DOT__C3_expected
                              [2U][3U]),32);
    bufp->fullIData(oldp+146,(vlSelf->top_ws_tb__DOT__C3_expected
                              [3U][0U]),32);
    bufp->fullIData(oldp+147,(vlSelf->top_ws_tb__DOT__C3_expected
                              [3U][1U]),32);
    bufp->fullIData(oldp+148,(vlSelf->top_ws_tb__DOT__C3_expected
                              [3U][2U]),32);
    bufp->fullIData(oldp+149,(vlSelf->top_ws_tb__DOT__C3_expected
                              [3U][3U]),32);
    bufp->fullIData(oldp+150,(vlSelf->top_ws_tb__DOT__C4_expected
                              [0U][0U]),32);
    bufp->fullIData(oldp+151,(vlSelf->top_ws_tb__DOT__C4_expected
                              [0U][1U]),32);
    bufp->fullIData(oldp+152,(vlSelf->top_ws_tb__DOT__C4_expected
                              [0U][2U]),32);
    bufp->fullIData(oldp+153,(vlSelf->top_ws_tb__DOT__C4_expected
                              [0U][3U]),32);
    bufp->fullIData(oldp+154,(vlSelf->top_ws_tb__DOT__C4_expected
                              [1U][0U]),32);
    bufp->fullIData(oldp+155,(vlSelf->top_ws_tb__DOT__C4_expected
                              [1U][1U]),32);
    bufp->fullIData(oldp+156,(vlSelf->top_ws_tb__DOT__C4_expected
                              [1U][2U]),32);
    bufp->fullIData(oldp+157,(vlSelf->top_ws_tb__DOT__C4_expected
                              [1U][3U]),32);
    bufp->fullIData(oldp+158,(vlSelf->top_ws_tb__DOT__C4_expected
                              [2U][0U]),32);
    bufp->fullIData(oldp+159,(vlSelf->top_ws_tb__DOT__C4_expected
                              [2U][1U]),32);
    bufp->fullIData(oldp+160,(vlSelf->top_ws_tb__DOT__C4_expected
                              [2U][2U]),32);
    bufp->fullIData(oldp+161,(vlSelf->top_ws_tb__DOT__C4_expected
                              [2U][3U]),32);
    bufp->fullIData(oldp+162,(vlSelf->top_ws_tb__DOT__C4_expected
                              [3U][0U]),32);
    bufp->fullIData(oldp+163,(vlSelf->top_ws_tb__DOT__C4_expected
                              [3U][1U]),32);
    bufp->fullIData(oldp+164,(vlSelf->top_ws_tb__DOT__C4_expected
                              [3U][2U]),32);
    bufp->fullIData(oldp+165,(vlSelf->top_ws_tb__DOT__C4_expected
                              [3U][3U]),32);
    bufp->fullIData(oldp+166,(vlSelf->top_ws_tb__DOT__C5_expected
                              [0U][0U]),32);
    bufp->fullIData(oldp+167,(vlSelf->top_ws_tb__DOT__C5_expected
                              [0U][1U]),32);
    bufp->fullIData(oldp+168,(vlSelf->top_ws_tb__DOT__C5_expected
                              [0U][2U]),32);
    bufp->fullIData(oldp+169,(vlSelf->top_ws_tb__DOT__C5_expected
                              [0U][3U]),32);
    bufp->fullIData(oldp+170,(vlSelf->top_ws_tb__DOT__C5_expected
                              [1U][0U]),32);
    bufp->fullIData(oldp+171,(vlSelf->top_ws_tb__DOT__C5_expected
                              [1U][1U]),32);
    bufp->fullIData(oldp+172,(vlSelf->top_ws_tb__DOT__C5_expected
                              [1U][2U]),32);
    bufp->fullIData(oldp+173,(vlSelf->top_ws_tb__DOT__C5_expected
                              [1U][3U]),32);
    bufp->fullIData(oldp+174,(vlSelf->top_ws_tb__DOT__C5_expected
                              [2U][0U]),32);
    bufp->fullIData(oldp+175,(vlSelf->top_ws_tb__DOT__C5_expected
                              [2U][1U]),32);
    bufp->fullIData(oldp+176,(vlSelf->top_ws_tb__DOT__C5_expected
                              [2U][2U]),32);
    bufp->fullIData(oldp+177,(vlSelf->top_ws_tb__DOT__C5_expected
                              [2U][3U]),32);
    bufp->fullIData(oldp+178,(vlSelf->top_ws_tb__DOT__C5_expected
                              [3U][0U]),32);
    bufp->fullIData(oldp+179,(vlSelf->top_ws_tb__DOT__C5_expected
                              [3U][1U]),32);
    bufp->fullIData(oldp+180,(vlSelf->top_ws_tb__DOT__C5_expected
                              [3U][2U]),32);
    bufp->fullIData(oldp+181,(vlSelf->top_ws_tb__DOT__C5_expected
                              [3U][3U]),32);
    bufp->fullCData(oldp+182,(vlSelf->top_ws_tb__DOT__val),8);
    bufp->fullIData(oldp+183,(vlSelf->top_ws_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+184,(vlSelf->top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+185,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [0U][0U]),32);
    bufp->fullIData(oldp+186,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [0U][1U]),32);
    bufp->fullIData(oldp+187,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [0U][2U]),32);
    bufp->fullIData(oldp+188,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [0U][3U]),32);
    bufp->fullIData(oldp+189,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [1U][0U]),32);
    bufp->fullIData(oldp+190,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [1U][1U]),32);
    bufp->fullIData(oldp+191,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [1U][2U]),32);
    bufp->fullIData(oldp+192,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [1U][3U]),32);
    bufp->fullIData(oldp+193,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [2U][0U]),32);
    bufp->fullIData(oldp+194,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [2U][1U]),32);
    bufp->fullIData(oldp+195,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [2U][2U]),32);
    bufp->fullIData(oldp+196,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [2U][3U]),32);
    bufp->fullIData(oldp+197,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [3U][0U]),32);
    bufp->fullIData(oldp+198,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [3U][1U]),32);
    bufp->fullIData(oldp+199,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [3U][2U]),32);
    bufp->fullIData(oldp+200,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [3U][3U]),32);
    bufp->fullIData(oldp+201,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [4U][0U]),32);
    bufp->fullIData(oldp+202,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [4U][1U]),32);
    bufp->fullIData(oldp+203,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [4U][2U]),32);
    bufp->fullIData(oldp+204,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [4U][3U]),32);
    bufp->fullIData(oldp+205,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [0U][0U]),32);
    bufp->fullIData(oldp+206,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [0U][1U]),32);
    bufp->fullIData(oldp+207,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [0U][2U]),32);
    bufp->fullIData(oldp+208,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [0U][3U]),32);
    bufp->fullIData(oldp+209,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [1U][0U]),32);
    bufp->fullIData(oldp+210,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [1U][1U]),32);
    bufp->fullIData(oldp+211,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [1U][2U]),32);
    bufp->fullIData(oldp+212,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [1U][3U]),32);
    bufp->fullIData(oldp+213,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [2U][0U]),32);
    bufp->fullIData(oldp+214,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [2U][1U]),32);
    bufp->fullIData(oldp+215,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [2U][2U]),32);
    bufp->fullIData(oldp+216,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [2U][3U]),32);
    bufp->fullIData(oldp+217,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [3U][0U]),32);
    bufp->fullIData(oldp+218,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [3U][1U]),32);
    bufp->fullIData(oldp+219,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [3U][2U]),32);
    bufp->fullIData(oldp+220,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__psum_wire
                              [3U][3U]),32);
    bufp->fullCData(oldp+221,(vlSelf->top_ws_tb__DOT__A
                              [0U][0U]),8);
    bufp->fullCData(oldp+222,(vlSelf->top_ws_tb__DOT__A
                              [0U][1U]),8);
    bufp->fullCData(oldp+223,(vlSelf->top_ws_tb__DOT__A
                              [0U][2U]),8);
    bufp->fullCData(oldp+224,(vlSelf->top_ws_tb__DOT__A
                              [0U][3U]),8);
    bufp->fullCData(oldp+225,(vlSelf->top_ws_tb__DOT__A
                              [1U][0U]),8);
    bufp->fullCData(oldp+226,(vlSelf->top_ws_tb__DOT__A
                              [1U][1U]),8);
    bufp->fullCData(oldp+227,(vlSelf->top_ws_tb__DOT__A
                              [1U][2U]),8);
    bufp->fullCData(oldp+228,(vlSelf->top_ws_tb__DOT__A
                              [1U][3U]),8);
    bufp->fullCData(oldp+229,(vlSelf->top_ws_tb__DOT__A
                              [2U][0U]),8);
    bufp->fullCData(oldp+230,(vlSelf->top_ws_tb__DOT__A
                              [2U][1U]),8);
    bufp->fullCData(oldp+231,(vlSelf->top_ws_tb__DOT__A
                              [2U][2U]),8);
    bufp->fullCData(oldp+232,(vlSelf->top_ws_tb__DOT__A
                              [2U][3U]),8);
    bufp->fullCData(oldp+233,(vlSelf->top_ws_tb__DOT__A
                              [3U][0U]),8);
    bufp->fullCData(oldp+234,(vlSelf->top_ws_tb__DOT__A
                              [3U][1U]),8);
    bufp->fullCData(oldp+235,(vlSelf->top_ws_tb__DOT__A
                              [3U][2U]),8);
    bufp->fullCData(oldp+236,(vlSelf->top_ws_tb__DOT__A
                              [3U][3U]),8);
    bufp->fullBit(oldp+237,(vlSelf->top_ws_tb__DOT__activation));
    bufp->fullWData(oldp+238,(vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat),128);
    bufp->fullCData(oldp+242,((0xffU & vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[0U])),8);
    bufp->fullCData(oldp+243,((0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[0U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+244,((0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[0U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+245,((vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[0U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+246,((0xffU & vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[1U])),8);
    bufp->fullCData(oldp+247,((0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[1U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+248,((0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[1U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+249,((vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[1U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+250,((0xffU & vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[2U])),8);
    bufp->fullCData(oldp+251,((0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[2U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+252,((0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[2U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+253,((vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[2U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+254,((0xffU & vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[3U])),8);
    bufp->fullCData(oldp+255,((0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[3U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+256,((0xffU & (vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[3U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+257,((vlSelf->top_ws_tb__DOT__dut__DOT__weights_flat[3U] 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+258,(vlSelf->top_ws_tb__DOT__C
                              [0U][0U]),32);
    bufp->fullIData(oldp+259,(vlSelf->top_ws_tb__DOT__C
                              [0U][1U]),32);
    bufp->fullIData(oldp+260,(vlSelf->top_ws_tb__DOT__C
                              [0U][2U]),32);
    bufp->fullIData(oldp+261,(vlSelf->top_ws_tb__DOT__C
                              [0U][3U]),32);
    bufp->fullIData(oldp+262,(vlSelf->top_ws_tb__DOT__C
                              [1U][0U]),32);
    bufp->fullIData(oldp+263,(vlSelf->top_ws_tb__DOT__C
                              [1U][1U]),32);
    bufp->fullIData(oldp+264,(vlSelf->top_ws_tb__DOT__C
                              [1U][2U]),32);
    bufp->fullIData(oldp+265,(vlSelf->top_ws_tb__DOT__C
                              [1U][3U]),32);
    bufp->fullIData(oldp+266,(vlSelf->top_ws_tb__DOT__C
                              [2U][0U]),32);
    bufp->fullIData(oldp+267,(vlSelf->top_ws_tb__DOT__C
                              [2U][1U]),32);
    bufp->fullIData(oldp+268,(vlSelf->top_ws_tb__DOT__C
                              [2U][2U]),32);
    bufp->fullIData(oldp+269,(vlSelf->top_ws_tb__DOT__C
                              [2U][3U]),32);
    bufp->fullIData(oldp+270,(vlSelf->top_ws_tb__DOT__C
                              [3U][0U]),32);
    bufp->fullIData(oldp+271,(vlSelf->top_ws_tb__DOT__C
                              [3U][1U]),32);
    bufp->fullIData(oldp+272,(vlSelf->top_ws_tb__DOT__C
                              [3U][2U]),32);
    bufp->fullIData(oldp+273,(vlSelf->top_ws_tb__DOT__C
                              [3U][3U]),32);
    bufp->fullBit(oldp+274,(vlSelf->top_ws_tb__DOT__done));
    bufp->fullBit(oldp+275,(vlSelf->top_ws_tb__DOT__out_skew_done));
    bufp->fullIData(oldp+276,(vlSelf->top_ws_tb__DOT__dut__DOT__in_a_skew),32);
    bufp->fullWData(oldp+277,(vlSelf->top_ws_tb__DOT__dut__DOT__out_c_skew),128);
    bufp->fullBit(oldp+281,(vlSelf->top_ws_tb__DOT__dut__DOT__load_weight));
    bufp->fullBit(oldp+282,(vlSelf->top_ws_tb__DOT__dut__DOT__skew_start));
    bufp->fullBit(oldp+283,(vlSelf->top_ws_tb__DOT__dut__DOT__row_valid));
    bufp->fullBit(oldp+284,((4U == vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__ctr)));
    bufp->fullIData(oldp+285,(vlSelf->top_ws_tb__DOT__dut__DOT__r),32);
    bufp->fullIData(oldp+286,(vlSelf->top_ws_tb__DOT__dut__DOT__k),32);
    bufp->fullIData(oldp+287,(vlSelf->top_ws_tb__DOT__dut__DOT__stream_cnt),32);
    bufp->fullIData(oldp+288,(vlSelf->top_ws_tb__DOT__dut__DOT__stream_len),32);
    bufp->fullBit(oldp+289,(vlSelf->top_ws_tb__DOT__dut__DOT__streaming));
    bufp->fullIData(oldp+290,(vlSelf->top_ws_tb__DOT__dut__DOT__row),32);
    bufp->fullIData(oldp+291,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
                              [0U][0U]),32);
    bufp->fullIData(oldp+292,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
                              [0U][1U]),32);
    bufp->fullIData(oldp+293,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
                              [0U][2U]),32);
    bufp->fullIData(oldp+294,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
                              [0U][3U]),32);
    bufp->fullIData(oldp+295,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
                              [1U][0U]),32);
    bufp->fullIData(oldp+296,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
                              [1U][1U]),32);
    bufp->fullIData(oldp+297,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
                              [1U][2U]),32);
    bufp->fullIData(oldp+298,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
                              [1U][3U]),32);
    bufp->fullIData(oldp+299,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
                              [2U][0U]),32);
    bufp->fullIData(oldp+300,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
                              [2U][1U]),32);
    bufp->fullIData(oldp+301,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
                              [2U][2U]),32);
    bufp->fullIData(oldp+302,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
                              [2U][3U]),32);
    bufp->fullIData(oldp+303,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
                              [3U][0U]),32);
    bufp->fullIData(oldp+304,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
                              [3U][1U]),32);
    bufp->fullIData(oldp+305,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
                              [3U][2U]),32);
    bufp->fullIData(oldp+306,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf0
                              [3U][3U]),32);
    bufp->fullIData(oldp+307,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
                              [0U][0U]),32);
    bufp->fullIData(oldp+308,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
                              [0U][1U]),32);
    bufp->fullIData(oldp+309,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
                              [0U][2U]),32);
    bufp->fullIData(oldp+310,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
                              [0U][3U]),32);
    bufp->fullIData(oldp+311,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
                              [1U][0U]),32);
    bufp->fullIData(oldp+312,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
                              [1U][1U]),32);
    bufp->fullIData(oldp+313,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
                              [1U][2U]),32);
    bufp->fullIData(oldp+314,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
                              [1U][3U]),32);
    bufp->fullIData(oldp+315,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
                              [2U][0U]),32);
    bufp->fullIData(oldp+316,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
                              [2U][1U]),32);
    bufp->fullIData(oldp+317,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
                              [2U][2U]),32);
    bufp->fullIData(oldp+318,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
                              [2U][3U]),32);
    bufp->fullIData(oldp+319,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
                              [3U][0U]),32);
    bufp->fullIData(oldp+320,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
                              [3U][1U]),32);
    bufp->fullIData(oldp+321,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
                              [3U][2U]),32);
    bufp->fullIData(oldp+322,(vlSelf->top_ws_tb__DOT__dut__DOT__C_buf1
                              [3U][3U]),32);
    bufp->fullBit(oldp+323,(vlSelf->top_ws_tb__DOT__dut__DOT__buf_select));
    bufp->fullCData(oldp+324,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
                              [0U][0U]),8);
    bufp->fullCData(oldp+325,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
                              [0U][1U]),8);
    bufp->fullCData(oldp+326,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
                              [0U][2U]),8);
    bufp->fullCData(oldp+327,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
                              [1U][0U]),8);
    bufp->fullCData(oldp+328,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
                              [1U][1U]),8);
    bufp->fullCData(oldp+329,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
                              [1U][2U]),8);
    bufp->fullCData(oldp+330,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
                              [2U][0U]),8);
    bufp->fullCData(oldp+331,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
                              [2U][1U]),8);
    bufp->fullCData(oldp+332,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
                              [2U][2U]),8);
    bufp->fullCData(oldp+333,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
                              [3U][0U]),8);
    bufp->fullCData(oldp+334,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
                              [3U][1U]),8);
    bufp->fullCData(oldp+335,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_a
                              [3U][2U]),8);
    bufp->fullIData(oldp+336,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__skewed_a),32);
    bufp->fullWData(oldp+337,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__raw_psum),128);
    bufp->fullIData(oldp+341,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
                              [0U][0U]),32);
    bufp->fullIData(oldp+342,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
                              [0U][1U]),32);
    bufp->fullIData(oldp+343,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
                              [0U][2U]),32);
    bufp->fullIData(oldp+344,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
                              [1U][0U]),32);
    bufp->fullIData(oldp+345,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
                              [1U][1U]),32);
    bufp->fullIData(oldp+346,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
                              [1U][2U]),32);
    bufp->fullIData(oldp+347,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
                              [2U][0U]),32);
    bufp->fullIData(oldp+348,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
                              [2U][1U]),32);
    bufp->fullIData(oldp+349,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
                              [2U][2U]),32);
    bufp->fullIData(oldp+350,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
                              [3U][0U]),32);
    bufp->fullIData(oldp+351,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
                              [3U][1U]),32);
    bufp->fullIData(oldp+352,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__sr_out
                              [3U][2U]),32);
    bufp->fullIData(oldp+353,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__ctr),32);
    bufp->fullSData(oldp+354,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_ctr),16);
    bufp->fullSData(oldp+355,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__valid_len),16);
    bufp->fullBit(oldp+356,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__out_valid_flag));
    bufp->fullBit(oldp+357,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__counting));
    bufp->fullCData(oldp+358,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [0U][0U]),8);
    bufp->fullCData(oldp+359,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [0U][1U]),8);
    bufp->fullCData(oldp+360,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [0U][2U]),8);
    bufp->fullCData(oldp+361,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [0U][3U]),8);
    bufp->fullCData(oldp+362,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [0U][4U]),8);
    bufp->fullCData(oldp+363,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [1U][0U]),8);
    bufp->fullCData(oldp+364,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [1U][1U]),8);
    bufp->fullCData(oldp+365,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [1U][2U]),8);
    bufp->fullCData(oldp+366,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [1U][3U]),8);
    bufp->fullCData(oldp+367,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [1U][4U]),8);
    bufp->fullCData(oldp+368,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [2U][0U]),8);
    bufp->fullCData(oldp+369,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [2U][1U]),8);
    bufp->fullCData(oldp+370,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [2U][2U]),8);
    bufp->fullCData(oldp+371,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [2U][3U]),8);
    bufp->fullCData(oldp+372,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [2U][4U]),8);
    bufp->fullCData(oldp+373,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [3U][0U]),8);
    bufp->fullCData(oldp+374,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [3U][1U]),8);
    bufp->fullCData(oldp+375,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [3U][2U]),8);
    bufp->fullCData(oldp+376,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [3U][3U]),8);
    bufp->fullCData(oldp+377,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [3U][4U]),8);
    bufp->fullCData(oldp+378,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [0U][0U]),8);
    bufp->fullCData(oldp+379,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+380,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+381,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+382,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [0U][1U]),8);
    bufp->fullCData(oldp+383,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+384,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+385,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+386,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [0U][2U]),8);
    bufp->fullCData(oldp+387,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+388,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+389,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+390,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [0U][3U]),8);
    bufp->fullCData(oldp+391,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+392,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+393,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+394,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [1U][0U]),8);
    bufp->fullCData(oldp+395,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+396,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+397,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+398,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [1U][1U]),8);
    bufp->fullCData(oldp+399,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+400,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+401,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+402,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [1U][2U]),8);
    bufp->fullCData(oldp+403,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+404,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+405,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+406,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [1U][3U]),8);
    bufp->fullCData(oldp+407,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+408,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+409,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+410,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [2U][0U]),8);
    bufp->fullCData(oldp+411,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+412,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+413,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+414,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [2U][1U]),8);
    bufp->fullCData(oldp+415,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+416,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+417,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+418,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [2U][2U]),8);
    bufp->fullCData(oldp+419,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+420,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+421,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+422,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [2U][3U]),8);
    bufp->fullCData(oldp+423,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+424,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+425,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+426,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [3U][0U]),8);
    bufp->fullCData(oldp+427,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+428,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+429,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+430,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [3U][1U]),8);
    bufp->fullCData(oldp+431,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+432,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+433,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+434,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [3U][2U]),8);
    bufp->fullCData(oldp+435,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+436,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+437,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+438,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__a_wire
                              [3U][3U]),8);
    bufp->fullCData(oldp+439,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+440,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+441,(vlSelf->top_ws_tb__DOT__dut__DOT__skewer__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullIData(oldp+442,(vlSelf->top_ws_tb__DOT__dut__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+443,(vlSelf->top_ws_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+444,(vlSelf->top_ws_tb__DOT__dut__DOT__unnamedblk3__DOT__c),32);
    bufp->fullIData(oldp+445,(vlSelf->top_ws_tb__DOT__dut__DOT__unnamedblk4__DOT__c),32);
    bufp->fullBit(oldp+446,(vlSelf->top_ws_tb__DOT__clk));
    bufp->fullIData(oldp+447,(vlSelf->top_ws_tb__DOT__check_results__Vstatic__r),32);
    bufp->fullIData(oldp+448,(vlSelf->top_ws_tb__DOT__check_results__Vstatic__c),32);
    bufp->fullIData(oldp+449,(vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors),32);
}
