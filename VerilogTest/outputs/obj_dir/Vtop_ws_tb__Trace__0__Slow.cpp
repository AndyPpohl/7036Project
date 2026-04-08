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
    tracep->declBus(c+1283,0,"DIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1286,0,"PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1287,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+198,0,"weights_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1567,0);
    tracep->declBit(c+1265,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1266,0,"in_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declArray(c+644,0,"out_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+658,0,"row_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1270,0,"load_weights__Vstatic__r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1271,0,"load_weights__Vstatic__c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1272,0,"run_multiply__Vstatic__k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1273,0,"run_multiply__Vstatic__r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1274,0,"capture_outputs__Vstatic__row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1275,0,"capture_outputs__Vstatic__c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+247,0,"compute_expected__Vstatic__r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1276,0,"compute_expected__Vstatic__c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1277,0,"compute_expected__Vstatic__k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1278,0,"check_results__Vstatic__r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1279,0,"check_results__Vstatic__c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1280,0,"check_results__Vstatic__errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1283,0,"DIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+198,0,"weights_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1567,0);
    tracep->declBit(c+1265,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1266,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declArray(c+644,0,"out_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+658,0,"row_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+444,0,"skewed_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declArray(c+659,0,"raw_psum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBus(c+1287,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1288,0,"CTR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1289,0,"CTR_VALID_LO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1290,0,"CTR_VALID_HI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+673,0,"ctr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+674,0,"counting",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1291,0,"ROW_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1292,0,"ROW_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1283,0,"DIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+198,0,"weights_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1567,0);
    tracep->declArray(c+444,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declArray(c+659,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->pushPrefix("gen_row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+248,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+448,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+675,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+676,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+677,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+249,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+449,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+678,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+679,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+680,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+450,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+681,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+682,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+683,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+451,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+684,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+685,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+686,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+452,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+687,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+688,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+689,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+453,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+690,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+691,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+692,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+454,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+693,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+694,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+695,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+455,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+696,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+697,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+698,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+256,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+456,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+699,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+700,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+701,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+457,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+702,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+703,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+704,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+458,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+705,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+706,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+707,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+459,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+708,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+709,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+710,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+460,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+711,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+712,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+713,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+461,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+714,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+715,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+716,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+462,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+717,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+718,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+719,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+263,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+463,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+720,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+721,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+722,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+464,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+723,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+724,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+725,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+465,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+726,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+727,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+728,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+466,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+729,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+730,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+731,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+267,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+467,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+732,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+733,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+734,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+268,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+468,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+735,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+736,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+737,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+269,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+469,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+738,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+739,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+740,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+470,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+741,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+742,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+743,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+271,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+471,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+744,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+745,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+746,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+272,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+472,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+747,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+748,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+749,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+473,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+750,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+751,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+752,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+474,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+753,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+755,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+475,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+756,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+757,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+758,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+276,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+476,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+759,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+760,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+477,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+762,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+763,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+764,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+278,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+478,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+765,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+31,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+766,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+767,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+279,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+479,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+768,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+32,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+769,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+770,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+480,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+771,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+772,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+773,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+481,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+774,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+775,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+776,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+482,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+777,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+35,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+778,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+779,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+483,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+780,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+781,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+782,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+284,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+484,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+783,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+784,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+785,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+485,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+786,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+38,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+787,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+788,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+286,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+486,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+789,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+790,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+791,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+287,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+487,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+792,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+793,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+794,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+488,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+795,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+796,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+797,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+289,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+489,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+798,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+799,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+800,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+290,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+490,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+801,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+802,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+803,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+491,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+804,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+805,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+806,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+292,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+492,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+807,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+808,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+809,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+293,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+493,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+810,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+811,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+812,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+494,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+813,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+814,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+815,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+295,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+495,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+816,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+48,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+817,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+818,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+496,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+819,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+49,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+820,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+821,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+297,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+497,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+822,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+50,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+823,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+824,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+298,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+498,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+825,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+826,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+827,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+499,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+828,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+829,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+830,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+300,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+500,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+831,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+832,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+833,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+301,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+501,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+834,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+835,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+836,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+502,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+837,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+838,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+839,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+303,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+503,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+840,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+841,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+842,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+304,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+504,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+843,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+57,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+844,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+845,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+305,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+505,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+846,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+58,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+847,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+848,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+306,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+506,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+849,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+59,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+850,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+851,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+307,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+507,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+852,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+60,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+853,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+854,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+508,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+855,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+856,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+857,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+309,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+509,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+858,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+859,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+860,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+310,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+510,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+861,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+862,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+863,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+311,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+511,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+864,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+64,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+865,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+866,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+312,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+512,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+867,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+65,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+868,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+869,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+513,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+870,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+66,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+871,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+872,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+314,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+514,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+873,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+874,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+315,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+515,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+876,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+68,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+878,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+516,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+879,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+69,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+880,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+881,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+317,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+517,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+882,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+70,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+883,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+884,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+318,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+518,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+885,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+886,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+887,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+519,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+888,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+72,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+889,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+890,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+320,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+520,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+891,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+73,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+892,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+893,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+321,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+521,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+894,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+74,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+895,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+896,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+322,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+522,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+897,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+75,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+898,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+899,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+323,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+523,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+900,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+76,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+901,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+902,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+324,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+524,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+903,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+77,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+904,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+905,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+325,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+525,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+906,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+78,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+907,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+908,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+326,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+526,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+909,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+79,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+910,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+911,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+327,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+527,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+912,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+80,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+913,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+914,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+328,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+528,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+915,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+81,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+916,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+917,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+329,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+529,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+918,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+82,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+919,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+920,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+330,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+530,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+921,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+83,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+922,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+923,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+331,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+531,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+924,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+925,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+926,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+332,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+532,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+927,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+928,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+929,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+333,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+533,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+930,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+86,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+931,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+932,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+334,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+534,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+933,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+87,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+934,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+935,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+335,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+535,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+936,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+88,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+937,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+938,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+336,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+536,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+939,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+89,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+940,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+941,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+337,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+537,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+942,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+943,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+944,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+338,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+538,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+945,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+91,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+946,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+947,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+339,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+539,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+948,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+92,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+949,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+950,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+540,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+951,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+952,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+953,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+341,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+541,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+954,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+94,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+955,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+956,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+342,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+542,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+957,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+95,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+958,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+959,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+543,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+960,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+96,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+961,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+962,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+344,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+544,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+963,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+964,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+965,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+345,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+545,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+966,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+98,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+967,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+968,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+346,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+546,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+969,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+99,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+970,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+971,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+347,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+547,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+972,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+100,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+973,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+974,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+348,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+548,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+975,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+101,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+976,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+977,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+349,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+549,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+978,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+102,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+979,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+980,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+350,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+550,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+981,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+103,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+983,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+351,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+551,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+984,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+985,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+352,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+552,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+987,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+105,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+988,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+989,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+553,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+990,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+106,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+991,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+992,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+354,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+554,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+993,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+107,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+994,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+995,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+355,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+555,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+996,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+108,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+997,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+998,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+356,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+556,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+999,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+109,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1000,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1001,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+357,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+557,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1002,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+110,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1003,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+358,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+558,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1005,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+111,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1006,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1007,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+359,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+559,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1008,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+112,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1009,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1010,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+560,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1011,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+113,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1013,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+361,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+561,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1014,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+114,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1015,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1016,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+362,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+562,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1017,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+115,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1018,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1019,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+363,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+563,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1020,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+116,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1021,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1022,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+364,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+564,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1023,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+117,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1024,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1025,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+365,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+565,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1026,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+118,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1027,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1028,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+366,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+566,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1029,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+119,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1030,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1031,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+367,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+567,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1032,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+120,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1033,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1034,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+368,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+568,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1035,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+121,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1036,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1037,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+369,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+569,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1038,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+122,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1039,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1040,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+370,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+570,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1041,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+123,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1042,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1043,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+371,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+571,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1044,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+124,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1045,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1046,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+372,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+572,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1047,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+125,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1048,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1049,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+573,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1050,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+126,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1051,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1052,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+574,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1053,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+127,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1054,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1055,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+375,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+575,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1056,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+128,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1057,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1058,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+376,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+576,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1059,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+129,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1060,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1061,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+377,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+577,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1062,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+130,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1063,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1064,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+578,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1065,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1067,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+379,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+579,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1068,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1070,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+380,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+580,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1071,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1072,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1073,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+381,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+581,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1074,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+134,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1075,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1076,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+382,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+582,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1077,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+135,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1078,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1079,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+383,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+583,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1080,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+136,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1081,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1082,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+384,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+584,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1083,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+137,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1084,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+385,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+585,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1086,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+138,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1088,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+386,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+586,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1089,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+139,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1090,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1091,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+387,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+587,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1092,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1093,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1094,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+388,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+588,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1095,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1096,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1097,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+389,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+589,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1098,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1099,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1100,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+390,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+590,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1101,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+143,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1103,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+391,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+591,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1104,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+144,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+592,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1107,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+145,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1109,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+393,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+593,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1110,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1111,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1112,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+394,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+594,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1113,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+147,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1114,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1115,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+395,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+595,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1116,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+148,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1117,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1118,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+396,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+596,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1119,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+149,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1120,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1121,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+397,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+597,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1122,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+150,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1123,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1124,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+398,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+598,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1125,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+151,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1126,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1127,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+399,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+599,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1128,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+152,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1129,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1130,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+400,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+600,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1131,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+153,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1132,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1133,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+401,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+601,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1134,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1135,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1136,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+402,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+602,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1137,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+155,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1138,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1139,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+403,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+603,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1140,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+156,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1141,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1142,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+404,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+604,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1143,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+157,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1144,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1145,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+405,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+605,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1146,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+158,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1147,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1148,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+406,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+606,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1149,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+159,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1150,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1151,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+407,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+607,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1152,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+160,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1153,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1154,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+408,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+608,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1155,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+161,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1156,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1157,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+409,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+609,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1158,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+162,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1159,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1160,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+410,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+610,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1161,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+163,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1162,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1163,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+411,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+611,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1164,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1165,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1166,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+412,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+612,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1167,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+165,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1168,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1169,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+413,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+613,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1170,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+166,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1171,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1172,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+614,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1173,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+167,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+415,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+615,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1176,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+168,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1177,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1178,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+416,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+616,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1179,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+169,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1180,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1181,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+417,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+617,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1182,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+170,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1183,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1184,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+618,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1185,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1187,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+619,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1188,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+172,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1189,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1190,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+420,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+620,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1191,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+173,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1192,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1193,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+421,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+621,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1194,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+174,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1195,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1196,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+422,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+622,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1197,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+175,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1198,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1199,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+423,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+623,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1200,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+176,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1201,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1202,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+424,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+624,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1203,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+177,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1204,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1205,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+425,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+625,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1206,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+178,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1207,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1208,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+426,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+626,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1209,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+179,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1211,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+427,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+627,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1212,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+180,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1213,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+428,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+628,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1215,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1216,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1217,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+429,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+629,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1218,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+182,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1219,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1220,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_row[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+430,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+630,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1221,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+183,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1222,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1223,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+431,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+631,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1224,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+184,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1225,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1226,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+432,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+632,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1227,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+185,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1228,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1229,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+433,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+633,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1230,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+186,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1231,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1232,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+434,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+634,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1233,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+187,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1234,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1235,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+435,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+635,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1236,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+188,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1237,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1238,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+436,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+636,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1239,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+189,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1240,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1241,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+637,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1242,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+190,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1243,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1244,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+638,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1245,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+191,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1246,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1247,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+439,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+639,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1248,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+192,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1249,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1250,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+440,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+640,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1251,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+193,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1252,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1253,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+441,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+641,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1254,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+194,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1255,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1256,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+442,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+642,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1257,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+195,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1258,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1259,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_col[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1284,0,"DATAW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"PSUMW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1263,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+443,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+643,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1260,0,"out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+196,0,"in_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1261,0,"out_psum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1262,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1281,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1282,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
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
    bufp->fullIData(oldp+1283,(0xeU),32);
    bufp->fullIData(oldp+1284,(8U),32);
    bufp->fullIData(oldp+1285,(0x20U),32);
    bufp->fullIData(oldp+1286,(0xaU),32);
    bufp->fullIData(oldp+1287,(0x28U),32);
    bufp->fullIData(oldp+1288,(6U),32);
    bufp->fullCData(oldp+1289,(0x27U),6);
    bufp->fullCData(oldp+1290,(0x34U),6);
    bufp->fullCData(oldp+1291,(0x1bU),6);
    bufp->fullCData(oldp+1292,(0x29U),6);
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
    bufp->fullIData(oldp+1,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                            [0U][0U]),32);
    bufp->fullIData(oldp+2,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                            [0U][0xaU]),32);
    bufp->fullIData(oldp+3,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                            [0U][0xbU]),32);
    bufp->fullIData(oldp+4,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                            [0U][0xcU]),32);
    bufp->fullIData(oldp+5,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                            [0U][0xdU]),32);
    bufp->fullIData(oldp+6,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                            [0U][1U]),32);
    bufp->fullIData(oldp+7,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                            [0U][2U]),32);
    bufp->fullIData(oldp+8,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                            [0U][3U]),32);
    bufp->fullIData(oldp+9,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                            [0U][4U]),32);
    bufp->fullIData(oldp+10,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0U][5U]),32);
    bufp->fullIData(oldp+11,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0U][6U]),32);
    bufp->fullIData(oldp+12,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0U][7U]),32);
    bufp->fullIData(oldp+13,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0U][8U]),32);
    bufp->fullIData(oldp+14,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0U][9U]),32);
    bufp->fullIData(oldp+15,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xaU][0U]),32);
    bufp->fullIData(oldp+16,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xaU][0xaU]),32);
    bufp->fullIData(oldp+17,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xaU][0xbU]),32);
    bufp->fullIData(oldp+18,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xaU][0xcU]),32);
    bufp->fullIData(oldp+19,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xaU][0xdU]),32);
    bufp->fullIData(oldp+20,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xaU][1U]),32);
    bufp->fullIData(oldp+21,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xaU][2U]),32);
    bufp->fullIData(oldp+22,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xaU][3U]),32);
    bufp->fullIData(oldp+23,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xaU][4U]),32);
    bufp->fullIData(oldp+24,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xaU][5U]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xaU][6U]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xaU][7U]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xaU][8U]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xaU][9U]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xbU][0U]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xbU][0xaU]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xbU][0xbU]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xbU][0xcU]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xbU][0xdU]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xbU][1U]),32);
    bufp->fullIData(oldp+35,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xbU][2U]),32);
    bufp->fullIData(oldp+36,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xbU][3U]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xbU][4U]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xbU][5U]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xbU][6U]),32);
    bufp->fullIData(oldp+40,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xbU][7U]),32);
    bufp->fullIData(oldp+41,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xbU][8U]),32);
    bufp->fullIData(oldp+42,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xbU][9U]),32);
    bufp->fullIData(oldp+43,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xcU][0U]),32);
    bufp->fullIData(oldp+44,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xcU][0xaU]),32);
    bufp->fullIData(oldp+45,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xcU][0xbU]),32);
    bufp->fullIData(oldp+46,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xcU][0xcU]),32);
    bufp->fullIData(oldp+47,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xcU][0xdU]),32);
    bufp->fullIData(oldp+48,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xcU][1U]),32);
    bufp->fullIData(oldp+49,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xcU][2U]),32);
    bufp->fullIData(oldp+50,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xcU][3U]),32);
    bufp->fullIData(oldp+51,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xcU][4U]),32);
    bufp->fullIData(oldp+52,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xcU][5U]),32);
    bufp->fullIData(oldp+53,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xcU][6U]),32);
    bufp->fullIData(oldp+54,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xcU][7U]),32);
    bufp->fullIData(oldp+55,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xcU][8U]),32);
    bufp->fullIData(oldp+56,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xcU][9U]),32);
    bufp->fullIData(oldp+57,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xdU][0U]),32);
    bufp->fullIData(oldp+58,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xdU][0xaU]),32);
    bufp->fullIData(oldp+59,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xdU][0xbU]),32);
    bufp->fullIData(oldp+60,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xdU][0xcU]),32);
    bufp->fullIData(oldp+61,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xdU][0xdU]),32);
    bufp->fullIData(oldp+62,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xdU][1U]),32);
    bufp->fullIData(oldp+63,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xdU][2U]),32);
    bufp->fullIData(oldp+64,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xdU][3U]),32);
    bufp->fullIData(oldp+65,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xdU][4U]),32);
    bufp->fullIData(oldp+66,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xdU][5U]),32);
    bufp->fullIData(oldp+67,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xdU][6U]),32);
    bufp->fullIData(oldp+68,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xdU][7U]),32);
    bufp->fullIData(oldp+69,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xdU][8U]),32);
    bufp->fullIData(oldp+70,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [0xdU][9U]),32);
    bufp->fullIData(oldp+71,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [1U][0U]),32);
    bufp->fullIData(oldp+72,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [1U][0xaU]),32);
    bufp->fullIData(oldp+73,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [1U][0xbU]),32);
    bufp->fullIData(oldp+74,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [1U][0xcU]),32);
    bufp->fullIData(oldp+75,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [1U][0xdU]),32);
    bufp->fullIData(oldp+76,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [1U][1U]),32);
    bufp->fullIData(oldp+77,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [1U][2U]),32);
    bufp->fullIData(oldp+78,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [1U][3U]),32);
    bufp->fullIData(oldp+79,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [1U][4U]),32);
    bufp->fullIData(oldp+80,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [1U][5U]),32);
    bufp->fullIData(oldp+81,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [1U][6U]),32);
    bufp->fullIData(oldp+82,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [1U][7U]),32);
    bufp->fullIData(oldp+83,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [1U][8U]),32);
    bufp->fullIData(oldp+84,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [1U][9U]),32);
    bufp->fullIData(oldp+85,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [2U][0U]),32);
    bufp->fullIData(oldp+86,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [2U][0xaU]),32);
    bufp->fullIData(oldp+87,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [2U][0xbU]),32);
    bufp->fullIData(oldp+88,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [2U][0xcU]),32);
    bufp->fullIData(oldp+89,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [2U][0xdU]),32);
    bufp->fullIData(oldp+90,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [2U][1U]),32);
    bufp->fullIData(oldp+91,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [2U][2U]),32);
    bufp->fullIData(oldp+92,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [2U][3U]),32);
    bufp->fullIData(oldp+93,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [2U][4U]),32);
    bufp->fullIData(oldp+94,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [2U][5U]),32);
    bufp->fullIData(oldp+95,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [2U][6U]),32);
    bufp->fullIData(oldp+96,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [2U][7U]),32);
    bufp->fullIData(oldp+97,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [2U][8U]),32);
    bufp->fullIData(oldp+98,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [2U][9U]),32);
    bufp->fullIData(oldp+99,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                             [3U][0U]),32);
    bufp->fullIData(oldp+100,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [3U][0xaU]),32);
    bufp->fullIData(oldp+101,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [3U][0xbU]),32);
    bufp->fullIData(oldp+102,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [3U][0xcU]),32);
    bufp->fullIData(oldp+103,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [3U][0xdU]),32);
    bufp->fullIData(oldp+104,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [3U][1U]),32);
    bufp->fullIData(oldp+105,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [3U][2U]),32);
    bufp->fullIData(oldp+106,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [3U][3U]),32);
    bufp->fullIData(oldp+107,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [3U][4U]),32);
    bufp->fullIData(oldp+108,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [3U][5U]),32);
    bufp->fullIData(oldp+109,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [3U][6U]),32);
    bufp->fullIData(oldp+110,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [3U][7U]),32);
    bufp->fullIData(oldp+111,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [3U][8U]),32);
    bufp->fullIData(oldp+112,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [3U][9U]),32);
    bufp->fullIData(oldp+113,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [4U][0U]),32);
    bufp->fullIData(oldp+114,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [4U][0xaU]),32);
    bufp->fullIData(oldp+115,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [4U][0xbU]),32);
    bufp->fullIData(oldp+116,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [4U][0xcU]),32);
    bufp->fullIData(oldp+117,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [4U][0xdU]),32);
    bufp->fullIData(oldp+118,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [4U][1U]),32);
    bufp->fullIData(oldp+119,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [4U][2U]),32);
    bufp->fullIData(oldp+120,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [4U][3U]),32);
    bufp->fullIData(oldp+121,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [4U][4U]),32);
    bufp->fullIData(oldp+122,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [4U][5U]),32);
    bufp->fullIData(oldp+123,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [4U][6U]),32);
    bufp->fullIData(oldp+124,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [4U][7U]),32);
    bufp->fullIData(oldp+125,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [4U][8U]),32);
    bufp->fullIData(oldp+126,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [4U][9U]),32);
    bufp->fullIData(oldp+127,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [5U][0U]),32);
    bufp->fullIData(oldp+128,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [5U][0xaU]),32);
    bufp->fullIData(oldp+129,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [5U][0xbU]),32);
    bufp->fullIData(oldp+130,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [5U][0xcU]),32);
    bufp->fullIData(oldp+131,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [5U][0xdU]),32);
    bufp->fullIData(oldp+132,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [5U][1U]),32);
    bufp->fullIData(oldp+133,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [5U][2U]),32);
    bufp->fullIData(oldp+134,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [5U][3U]),32);
    bufp->fullIData(oldp+135,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [5U][4U]),32);
    bufp->fullIData(oldp+136,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [5U][5U]),32);
    bufp->fullIData(oldp+137,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [5U][6U]),32);
    bufp->fullIData(oldp+138,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [5U][7U]),32);
    bufp->fullIData(oldp+139,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [5U][8U]),32);
    bufp->fullIData(oldp+140,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [5U][9U]),32);
    bufp->fullIData(oldp+141,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [6U][0U]),32);
    bufp->fullIData(oldp+142,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [6U][0xaU]),32);
    bufp->fullIData(oldp+143,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [6U][0xbU]),32);
    bufp->fullIData(oldp+144,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [6U][0xcU]),32);
    bufp->fullIData(oldp+145,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [6U][0xdU]),32);
    bufp->fullIData(oldp+146,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [6U][1U]),32);
    bufp->fullIData(oldp+147,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [6U][2U]),32);
    bufp->fullIData(oldp+148,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [6U][3U]),32);
    bufp->fullIData(oldp+149,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [6U][4U]),32);
    bufp->fullIData(oldp+150,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [6U][5U]),32);
    bufp->fullIData(oldp+151,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [6U][6U]),32);
    bufp->fullIData(oldp+152,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [6U][7U]),32);
    bufp->fullIData(oldp+153,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [6U][8U]),32);
    bufp->fullIData(oldp+154,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [6U][9U]),32);
    bufp->fullIData(oldp+155,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [7U][0U]),32);
    bufp->fullIData(oldp+156,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [7U][0xaU]),32);
    bufp->fullIData(oldp+157,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [7U][0xbU]),32);
    bufp->fullIData(oldp+158,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [7U][0xcU]),32);
    bufp->fullIData(oldp+159,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [7U][0xdU]),32);
    bufp->fullIData(oldp+160,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [7U][1U]),32);
    bufp->fullIData(oldp+161,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [7U][2U]),32);
    bufp->fullIData(oldp+162,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [7U][3U]),32);
    bufp->fullIData(oldp+163,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [7U][4U]),32);
    bufp->fullIData(oldp+164,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [7U][5U]),32);
    bufp->fullIData(oldp+165,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [7U][6U]),32);
    bufp->fullIData(oldp+166,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [7U][7U]),32);
    bufp->fullIData(oldp+167,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [7U][8U]),32);
    bufp->fullIData(oldp+168,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [7U][9U]),32);
    bufp->fullIData(oldp+169,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [8U][0U]),32);
    bufp->fullIData(oldp+170,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [8U][0xaU]),32);
    bufp->fullIData(oldp+171,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [8U][0xbU]),32);
    bufp->fullIData(oldp+172,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [8U][0xcU]),32);
    bufp->fullIData(oldp+173,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [8U][0xdU]),32);
    bufp->fullIData(oldp+174,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [8U][1U]),32);
    bufp->fullIData(oldp+175,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [8U][2U]),32);
    bufp->fullIData(oldp+176,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [8U][3U]),32);
    bufp->fullIData(oldp+177,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [8U][4U]),32);
    bufp->fullIData(oldp+178,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [8U][5U]),32);
    bufp->fullIData(oldp+179,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [8U][6U]),32);
    bufp->fullIData(oldp+180,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [8U][7U]),32);
    bufp->fullIData(oldp+181,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [8U][8U]),32);
    bufp->fullIData(oldp+182,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [8U][9U]),32);
    bufp->fullIData(oldp+183,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [9U][0U]),32);
    bufp->fullIData(oldp+184,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [9U][0xaU]),32);
    bufp->fullIData(oldp+185,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [9U][0xbU]),32);
    bufp->fullIData(oldp+186,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [9U][0xcU]),32);
    bufp->fullIData(oldp+187,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [9U][0xdU]),32);
    bufp->fullIData(oldp+188,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [9U][1U]),32);
    bufp->fullIData(oldp+189,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [9U][2U]),32);
    bufp->fullIData(oldp+190,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [9U][3U]),32);
    bufp->fullIData(oldp+191,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [9U][4U]),32);
    bufp->fullIData(oldp+192,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [9U][5U]),32);
    bufp->fullIData(oldp+193,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [9U][6U]),32);
    bufp->fullIData(oldp+194,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [9U][7U]),32);
    bufp->fullIData(oldp+195,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [9U][8U]),32);
    bufp->fullIData(oldp+196,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__psum_wire
                              [9U][9U]),32);
    bufp->fullBit(oldp+197,(vlSelf->top_ws_tb__DOT__load_weight));
    bufp->fullWData(oldp+198,(vlSelf->top_ws_tb__DOT__weights_in),1568);
    bufp->fullIData(oldp+247,(vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__r),32);
    bufp->fullCData(oldp+248,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0U])),8);
    bufp->fullCData(oldp+249,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[2U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+250,((vlSelf->top_ws_tb__DOT__weights_in[2U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+251,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[3U])),8);
    bufp->fullCData(oldp+252,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[3U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+253,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+254,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+255,((vlSelf->top_ws_tb__DOT__weights_in[0U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+256,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[1U])),8);
    bufp->fullCData(oldp+257,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[1U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+258,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[1U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+259,((vlSelf->top_ws_tb__DOT__weights_in[1U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+260,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[2U])),8);
    bufp->fullCData(oldp+261,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[2U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+262,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x23U])),8);
    bufp->fullCData(oldp+263,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x25U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+264,((vlSelf->top_ws_tb__DOT__weights_in[0x25U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+265,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x26U])),8);
    bufp->fullCData(oldp+266,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x26U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+267,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x23U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+268,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x23U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+269,((vlSelf->top_ws_tb__DOT__weights_in[0x23U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+270,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x24U])),8);
    bufp->fullCData(oldp+271,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x24U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+272,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x24U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+273,((vlSelf->top_ws_tb__DOT__weights_in[0x24U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+274,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x25U])),8);
    bufp->fullCData(oldp+275,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x25U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+276,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x26U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+277,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x29U])),8);
    bufp->fullCData(oldp+278,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x29U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+279,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x29U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+280,((vlSelf->top_ws_tb__DOT__weights_in[0x29U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+281,((vlSelf->top_ws_tb__DOT__weights_in[0x26U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+282,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x27U])),8);
    bufp->fullCData(oldp+283,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x27U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+284,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x27U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+285,((vlSelf->top_ws_tb__DOT__weights_in[0x27U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+286,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x28U])),8);
    bufp->fullCData(oldp+287,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x28U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+288,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x28U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+289,((vlSelf->top_ws_tb__DOT__weights_in[0x28U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+290,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x2aU])),8);
    bufp->fullCData(oldp+291,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2cU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+292,((vlSelf->top_ws_tb__DOT__weights_in[0x2cU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+293,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x2dU])),8);
    bufp->fullCData(oldp+294,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2dU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+295,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2aU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+296,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2aU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+297,((vlSelf->top_ws_tb__DOT__weights_in[0x2aU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+298,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x2bU])),8);
    bufp->fullCData(oldp+299,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2bU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+300,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2bU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+301,((vlSelf->top_ws_tb__DOT__weights_in[0x2bU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+302,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x2cU])),8);
    bufp->fullCData(oldp+303,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2cU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+304,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2dU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+305,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x30U])),8);
    bufp->fullCData(oldp+306,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x30U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+307,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x30U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+308,((vlSelf->top_ws_tb__DOT__weights_in[0x30U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+309,((vlSelf->top_ws_tb__DOT__weights_in[0x2dU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+310,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x2eU])),8);
    bufp->fullCData(oldp+311,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2eU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+312,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2eU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+313,((vlSelf->top_ws_tb__DOT__weights_in[0x2eU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+314,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x2fU])),8);
    bufp->fullCData(oldp+315,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2fU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+316,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x2fU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+317,((vlSelf->top_ws_tb__DOT__weights_in[0x2fU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+318,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[3U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+319,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[6U])),8);
    bufp->fullCData(oldp+320,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[6U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+321,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[6U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+322,((vlSelf->top_ws_tb__DOT__weights_in[6U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+323,((vlSelf->top_ws_tb__DOT__weights_in[3U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+324,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[4U])),8);
    bufp->fullCData(oldp+325,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[4U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+326,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[4U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+327,((vlSelf->top_ws_tb__DOT__weights_in[4U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+328,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[5U])),8);
    bufp->fullCData(oldp+329,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[5U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+330,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[5U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+331,((vlSelf->top_ws_tb__DOT__weights_in[5U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+332,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[7U])),8);
    bufp->fullCData(oldp+333,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[9U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+334,((vlSelf->top_ws_tb__DOT__weights_in[9U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+335,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xaU])),8);
    bufp->fullCData(oldp+336,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xaU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+337,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[7U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+338,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[7U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+339,((vlSelf->top_ws_tb__DOT__weights_in[7U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+340,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[8U])),8);
    bufp->fullCData(oldp+341,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[8U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+342,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[8U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+343,((vlSelf->top_ws_tb__DOT__weights_in[8U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+344,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[9U])),8);
    bufp->fullCData(oldp+345,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[9U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+346,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xaU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+347,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xdU])),8);
    bufp->fullCData(oldp+348,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xdU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+349,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xdU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+350,((vlSelf->top_ws_tb__DOT__weights_in[0xdU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+351,((vlSelf->top_ws_tb__DOT__weights_in[0xaU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+352,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xbU])),8);
    bufp->fullCData(oldp+353,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xbU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+354,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xbU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+355,((vlSelf->top_ws_tb__DOT__weights_in[0xbU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+356,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xcU])),8);
    bufp->fullCData(oldp+357,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xcU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+358,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xcU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+359,((vlSelf->top_ws_tb__DOT__weights_in[0xcU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+360,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xeU])),8);
    bufp->fullCData(oldp+361,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x10U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+362,((vlSelf->top_ws_tb__DOT__weights_in[0x10U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+363,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x11U])),8);
    bufp->fullCData(oldp+364,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x11U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+365,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xeU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+366,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xeU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+367,((vlSelf->top_ws_tb__DOT__weights_in[0xeU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+368,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0xfU])),8);
    bufp->fullCData(oldp+369,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xfU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+370,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0xfU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+371,((vlSelf->top_ws_tb__DOT__weights_in[0xfU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+372,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x10U])),8);
    bufp->fullCData(oldp+373,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x10U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+374,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x11U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+375,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x14U])),8);
    bufp->fullCData(oldp+376,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x14U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+377,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x14U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+378,((vlSelf->top_ws_tb__DOT__weights_in[0x14U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+379,((vlSelf->top_ws_tb__DOT__weights_in[0x11U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+380,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x12U])),8);
    bufp->fullCData(oldp+381,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x12U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+382,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x12U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+383,((vlSelf->top_ws_tb__DOT__weights_in[0x12U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+384,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x13U])),8);
    bufp->fullCData(oldp+385,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x13U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+386,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x13U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+387,((vlSelf->top_ws_tb__DOT__weights_in[0x13U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+388,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x15U])),8);
    bufp->fullCData(oldp+389,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x17U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+390,((vlSelf->top_ws_tb__DOT__weights_in[0x17U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+391,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x18U])),8);
    bufp->fullCData(oldp+392,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x18U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+393,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x15U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+394,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x15U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+395,((vlSelf->top_ws_tb__DOT__weights_in[0x15U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+396,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x16U])),8);
    bufp->fullCData(oldp+397,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x16U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+398,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x16U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+399,((vlSelf->top_ws_tb__DOT__weights_in[0x16U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+400,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x17U])),8);
    bufp->fullCData(oldp+401,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x17U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+402,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x18U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+403,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x1bU])),8);
    bufp->fullCData(oldp+404,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1bU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+405,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1bU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+406,((vlSelf->top_ws_tb__DOT__weights_in[0x1bU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+407,((vlSelf->top_ws_tb__DOT__weights_in[0x18U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+408,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x19U])),8);
    bufp->fullCData(oldp+409,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x19U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+410,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x19U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+411,((vlSelf->top_ws_tb__DOT__weights_in[0x19U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+412,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x1aU])),8);
    bufp->fullCData(oldp+413,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1aU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+414,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1aU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+415,((vlSelf->top_ws_tb__DOT__weights_in[0x1aU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+416,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x1cU])),8);
    bufp->fullCData(oldp+417,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1eU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+418,((vlSelf->top_ws_tb__DOT__weights_in[0x1eU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+419,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x1fU])),8);
    bufp->fullCData(oldp+420,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1fU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+421,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1cU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+422,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1cU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+423,((vlSelf->top_ws_tb__DOT__weights_in[0x1cU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+424,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x1dU])),8);
    bufp->fullCData(oldp+425,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1dU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+426,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1dU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+427,((vlSelf->top_ws_tb__DOT__weights_in[0x1dU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+428,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x1eU])),8);
    bufp->fullCData(oldp+429,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1eU] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+430,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x1fU] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+431,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x22U])),8);
    bufp->fullCData(oldp+432,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x22U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+433,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x22U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+434,((vlSelf->top_ws_tb__DOT__weights_in[0x22U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+435,((vlSelf->top_ws_tb__DOT__weights_in[0x1fU] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+436,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x20U])),8);
    bufp->fullCData(oldp+437,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x20U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+438,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x20U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+439,((vlSelf->top_ws_tb__DOT__weights_in[0x20U] 
                               >> 0x18U)),8);
    bufp->fullCData(oldp+440,((0xffU & vlSelf->top_ws_tb__DOT__weights_in[0x21U])),8);
    bufp->fullCData(oldp+441,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x21U] 
                                        >> 8U))),8);
    bufp->fullCData(oldp+442,((0xffU & (vlSelf->top_ws_tb__DOT__weights_in[0x21U] 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+443,((vlSelf->top_ws_tb__DOT__weights_in[0x21U] 
                               >> 0x18U)),8);
    bufp->fullWData(oldp+444,(vlSelf->top_ws_tb__DOT__dut__DOT__skewed_a),112);
    bufp->fullCData(oldp+448,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0U][0U]),8);
    bufp->fullCData(oldp+449,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0U][0xaU]),8);
    bufp->fullCData(oldp+450,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0U][0xbU]),8);
    bufp->fullCData(oldp+451,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0U][0xcU]),8);
    bufp->fullCData(oldp+452,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0U][0xdU]),8);
    bufp->fullCData(oldp+453,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0U][1U]),8);
    bufp->fullCData(oldp+454,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0U][2U]),8);
    bufp->fullCData(oldp+455,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0U][3U]),8);
    bufp->fullCData(oldp+456,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0U][4U]),8);
    bufp->fullCData(oldp+457,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0U][5U]),8);
    bufp->fullCData(oldp+458,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0U][6U]),8);
    bufp->fullCData(oldp+459,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0U][7U]),8);
    bufp->fullCData(oldp+460,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0U][8U]),8);
    bufp->fullCData(oldp+461,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0U][9U]),8);
    bufp->fullCData(oldp+462,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xaU][0U]),8);
    bufp->fullCData(oldp+463,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xaU][0xaU]),8);
    bufp->fullCData(oldp+464,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xaU][0xbU]),8);
    bufp->fullCData(oldp+465,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xaU][0xcU]),8);
    bufp->fullCData(oldp+466,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xaU][0xdU]),8);
    bufp->fullCData(oldp+467,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xaU][1U]),8);
    bufp->fullCData(oldp+468,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xaU][2U]),8);
    bufp->fullCData(oldp+469,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xaU][3U]),8);
    bufp->fullCData(oldp+470,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xaU][4U]),8);
    bufp->fullCData(oldp+471,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xaU][5U]),8);
    bufp->fullCData(oldp+472,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xaU][6U]),8);
    bufp->fullCData(oldp+473,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xaU][7U]),8);
    bufp->fullCData(oldp+474,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xaU][8U]),8);
    bufp->fullCData(oldp+475,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xaU][9U]),8);
    bufp->fullCData(oldp+476,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xbU][0U]),8);
    bufp->fullCData(oldp+477,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xbU][0xaU]),8);
    bufp->fullCData(oldp+478,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xbU][0xbU]),8);
    bufp->fullCData(oldp+479,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xbU][0xcU]),8);
    bufp->fullCData(oldp+480,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xbU][0xdU]),8);
    bufp->fullCData(oldp+481,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xbU][1U]),8);
    bufp->fullCData(oldp+482,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xbU][2U]),8);
    bufp->fullCData(oldp+483,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xbU][3U]),8);
    bufp->fullCData(oldp+484,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xbU][4U]),8);
    bufp->fullCData(oldp+485,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xbU][5U]),8);
    bufp->fullCData(oldp+486,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xbU][6U]),8);
    bufp->fullCData(oldp+487,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xbU][7U]),8);
    bufp->fullCData(oldp+488,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xbU][8U]),8);
    bufp->fullCData(oldp+489,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xbU][9U]),8);
    bufp->fullCData(oldp+490,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xcU][0U]),8);
    bufp->fullCData(oldp+491,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xcU][0xaU]),8);
    bufp->fullCData(oldp+492,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xcU][0xbU]),8);
    bufp->fullCData(oldp+493,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xcU][0xcU]),8);
    bufp->fullCData(oldp+494,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xcU][0xdU]),8);
    bufp->fullCData(oldp+495,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xcU][1U]),8);
    bufp->fullCData(oldp+496,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xcU][2U]),8);
    bufp->fullCData(oldp+497,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xcU][3U]),8);
    bufp->fullCData(oldp+498,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xcU][4U]),8);
    bufp->fullCData(oldp+499,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xcU][5U]),8);
    bufp->fullCData(oldp+500,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xcU][6U]),8);
    bufp->fullCData(oldp+501,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xcU][7U]),8);
    bufp->fullCData(oldp+502,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xcU][8U]),8);
    bufp->fullCData(oldp+503,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xcU][9U]),8);
    bufp->fullCData(oldp+504,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xdU][0U]),8);
    bufp->fullCData(oldp+505,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xdU][0xaU]),8);
    bufp->fullCData(oldp+506,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xdU][0xbU]),8);
    bufp->fullCData(oldp+507,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xdU][0xcU]),8);
    bufp->fullCData(oldp+508,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xdU][0xdU]),8);
    bufp->fullCData(oldp+509,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xdU][1U]),8);
    bufp->fullCData(oldp+510,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xdU][2U]),8);
    bufp->fullCData(oldp+511,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xdU][3U]),8);
    bufp->fullCData(oldp+512,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xdU][4U]),8);
    bufp->fullCData(oldp+513,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xdU][5U]),8);
    bufp->fullCData(oldp+514,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xdU][6U]),8);
    bufp->fullCData(oldp+515,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xdU][7U]),8);
    bufp->fullCData(oldp+516,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xdU][8U]),8);
    bufp->fullCData(oldp+517,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [0xdU][9U]),8);
    bufp->fullCData(oldp+518,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [1U][0U]),8);
    bufp->fullCData(oldp+519,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [1U][0xaU]),8);
    bufp->fullCData(oldp+520,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [1U][0xbU]),8);
    bufp->fullCData(oldp+521,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [1U][0xcU]),8);
    bufp->fullCData(oldp+522,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [1U][0xdU]),8);
    bufp->fullCData(oldp+523,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [1U][1U]),8);
    bufp->fullCData(oldp+524,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [1U][2U]),8);
    bufp->fullCData(oldp+525,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [1U][3U]),8);
    bufp->fullCData(oldp+526,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [1U][4U]),8);
    bufp->fullCData(oldp+527,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [1U][5U]),8);
    bufp->fullCData(oldp+528,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [1U][6U]),8);
    bufp->fullCData(oldp+529,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [1U][7U]),8);
    bufp->fullCData(oldp+530,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [1U][8U]),8);
    bufp->fullCData(oldp+531,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [1U][9U]),8);
    bufp->fullCData(oldp+532,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [2U][0U]),8);
    bufp->fullCData(oldp+533,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [2U][0xaU]),8);
    bufp->fullCData(oldp+534,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [2U][0xbU]),8);
    bufp->fullCData(oldp+535,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [2U][0xcU]),8);
    bufp->fullCData(oldp+536,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [2U][0xdU]),8);
    bufp->fullCData(oldp+537,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [2U][1U]),8);
    bufp->fullCData(oldp+538,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [2U][2U]),8);
    bufp->fullCData(oldp+539,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [2U][3U]),8);
    bufp->fullCData(oldp+540,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [2U][4U]),8);
    bufp->fullCData(oldp+541,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [2U][5U]),8);
    bufp->fullCData(oldp+542,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [2U][6U]),8);
    bufp->fullCData(oldp+543,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [2U][7U]),8);
    bufp->fullCData(oldp+544,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [2U][8U]),8);
    bufp->fullCData(oldp+545,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [2U][9U]),8);
    bufp->fullCData(oldp+546,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [3U][0U]),8);
    bufp->fullCData(oldp+547,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [3U][0xaU]),8);
    bufp->fullCData(oldp+548,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [3U][0xbU]),8);
    bufp->fullCData(oldp+549,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [3U][0xcU]),8);
    bufp->fullCData(oldp+550,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [3U][0xdU]),8);
    bufp->fullCData(oldp+551,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [3U][1U]),8);
    bufp->fullCData(oldp+552,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [3U][2U]),8);
    bufp->fullCData(oldp+553,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [3U][3U]),8);
    bufp->fullCData(oldp+554,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [3U][4U]),8);
    bufp->fullCData(oldp+555,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [3U][5U]),8);
    bufp->fullCData(oldp+556,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [3U][6U]),8);
    bufp->fullCData(oldp+557,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [3U][7U]),8);
    bufp->fullCData(oldp+558,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [3U][8U]),8);
    bufp->fullCData(oldp+559,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [3U][9U]),8);
    bufp->fullCData(oldp+560,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [4U][0U]),8);
    bufp->fullCData(oldp+561,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [4U][0xaU]),8);
    bufp->fullCData(oldp+562,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [4U][0xbU]),8);
    bufp->fullCData(oldp+563,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [4U][0xcU]),8);
    bufp->fullCData(oldp+564,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [4U][0xdU]),8);
    bufp->fullCData(oldp+565,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [4U][1U]),8);
    bufp->fullCData(oldp+566,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [4U][2U]),8);
    bufp->fullCData(oldp+567,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [4U][3U]),8);
    bufp->fullCData(oldp+568,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [4U][4U]),8);
    bufp->fullCData(oldp+569,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [4U][5U]),8);
    bufp->fullCData(oldp+570,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [4U][6U]),8);
    bufp->fullCData(oldp+571,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [4U][7U]),8);
    bufp->fullCData(oldp+572,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [4U][8U]),8);
    bufp->fullCData(oldp+573,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [4U][9U]),8);
    bufp->fullCData(oldp+574,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [5U][0U]),8);
    bufp->fullCData(oldp+575,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [5U][0xaU]),8);
    bufp->fullCData(oldp+576,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [5U][0xbU]),8);
    bufp->fullCData(oldp+577,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [5U][0xcU]),8);
    bufp->fullCData(oldp+578,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [5U][0xdU]),8);
    bufp->fullCData(oldp+579,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [5U][1U]),8);
    bufp->fullCData(oldp+580,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [5U][2U]),8);
    bufp->fullCData(oldp+581,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [5U][3U]),8);
    bufp->fullCData(oldp+582,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [5U][4U]),8);
    bufp->fullCData(oldp+583,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [5U][5U]),8);
    bufp->fullCData(oldp+584,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [5U][6U]),8);
    bufp->fullCData(oldp+585,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [5U][7U]),8);
    bufp->fullCData(oldp+586,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [5U][8U]),8);
    bufp->fullCData(oldp+587,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [5U][9U]),8);
    bufp->fullCData(oldp+588,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [6U][0U]),8);
    bufp->fullCData(oldp+589,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [6U][0xaU]),8);
    bufp->fullCData(oldp+590,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [6U][0xbU]),8);
    bufp->fullCData(oldp+591,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [6U][0xcU]),8);
    bufp->fullCData(oldp+592,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [6U][0xdU]),8);
    bufp->fullCData(oldp+593,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [6U][1U]),8);
    bufp->fullCData(oldp+594,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [6U][2U]),8);
    bufp->fullCData(oldp+595,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [6U][3U]),8);
    bufp->fullCData(oldp+596,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [6U][4U]),8);
    bufp->fullCData(oldp+597,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [6U][5U]),8);
    bufp->fullCData(oldp+598,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [6U][6U]),8);
    bufp->fullCData(oldp+599,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [6U][7U]),8);
    bufp->fullCData(oldp+600,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [6U][8U]),8);
    bufp->fullCData(oldp+601,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [6U][9U]),8);
    bufp->fullCData(oldp+602,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [7U][0U]),8);
    bufp->fullCData(oldp+603,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [7U][0xaU]),8);
    bufp->fullCData(oldp+604,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [7U][0xbU]),8);
    bufp->fullCData(oldp+605,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [7U][0xcU]),8);
    bufp->fullCData(oldp+606,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [7U][0xdU]),8);
    bufp->fullCData(oldp+607,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [7U][1U]),8);
    bufp->fullCData(oldp+608,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [7U][2U]),8);
    bufp->fullCData(oldp+609,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [7U][3U]),8);
    bufp->fullCData(oldp+610,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [7U][4U]),8);
    bufp->fullCData(oldp+611,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [7U][5U]),8);
    bufp->fullCData(oldp+612,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [7U][6U]),8);
    bufp->fullCData(oldp+613,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [7U][7U]),8);
    bufp->fullCData(oldp+614,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [7U][8U]),8);
    bufp->fullCData(oldp+615,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [7U][9U]),8);
    bufp->fullCData(oldp+616,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [8U][0U]),8);
    bufp->fullCData(oldp+617,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [8U][0xaU]),8);
    bufp->fullCData(oldp+618,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [8U][0xbU]),8);
    bufp->fullCData(oldp+619,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [8U][0xcU]),8);
    bufp->fullCData(oldp+620,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [8U][0xdU]),8);
    bufp->fullCData(oldp+621,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [8U][1U]),8);
    bufp->fullCData(oldp+622,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [8U][2U]),8);
    bufp->fullCData(oldp+623,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [8U][3U]),8);
    bufp->fullCData(oldp+624,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [8U][4U]),8);
    bufp->fullCData(oldp+625,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [8U][5U]),8);
    bufp->fullCData(oldp+626,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [8U][6U]),8);
    bufp->fullCData(oldp+627,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [8U][7U]),8);
    bufp->fullCData(oldp+628,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [8U][8U]),8);
    bufp->fullCData(oldp+629,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [8U][9U]),8);
    bufp->fullCData(oldp+630,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [9U][0U]),8);
    bufp->fullCData(oldp+631,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [9U][0xaU]),8);
    bufp->fullCData(oldp+632,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [9U][0xbU]),8);
    bufp->fullCData(oldp+633,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [9U][0xcU]),8);
    bufp->fullCData(oldp+634,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [9U][0xdU]),8);
    bufp->fullCData(oldp+635,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [9U][1U]),8);
    bufp->fullCData(oldp+636,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [9U][2U]),8);
    bufp->fullCData(oldp+637,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [9U][3U]),8);
    bufp->fullCData(oldp+638,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [9U][4U]),8);
    bufp->fullCData(oldp+639,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [9U][5U]),8);
    bufp->fullCData(oldp+640,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [9U][6U]),8);
    bufp->fullCData(oldp+641,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [9U][7U]),8);
    bufp->fullCData(oldp+642,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [9U][8U]),8);
    bufp->fullCData(oldp+643,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__a_wire
                              [9U][9U]),8);
    bufp->fullWData(oldp+644,(vlSelf->top_ws_tb__DOT__out_c),448);
    bufp->fullBit(oldp+658,(((0x1bU <= (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__ctr)) 
                             & (0x29U > (IData)(vlSelf->top_ws_tb__DOT__dut__DOT__ctr)))));
    bufp->fullWData(oldp+659,(vlSelf->top_ws_tb__DOT__dut__DOT__raw_psum),448);
    bufp->fullCData(oldp+673,(vlSelf->top_ws_tb__DOT__dut__DOT__ctr),6);
    bufp->fullBit(oldp+674,(vlSelf->top_ws_tb__DOT__dut__DOT__counting));
    bufp->fullCData(oldp+675,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+676,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+677,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+678,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+679,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+680,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+681,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+682,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+683,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+684,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+685,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+686,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+687,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+688,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+689,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+690,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+691,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+692,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+693,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+694,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+695,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+696,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+697,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+698,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+699,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+700,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+701,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+702,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+703,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+704,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+705,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+706,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+707,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+708,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+709,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+710,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+711,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+712,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+713,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+714,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+715,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+716,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+717,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+718,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+719,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+720,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+721,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+722,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+723,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+724,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+725,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+726,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+727,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+728,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+729,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+730,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+731,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+732,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+733,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+734,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+735,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+736,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+737,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+738,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+739,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+740,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+741,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+742,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+743,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+744,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+745,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+746,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+747,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+748,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+749,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+750,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+751,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+752,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+753,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+754,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+755,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+756,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+757,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__10__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+758,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__10__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+759,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+760,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+761,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+762,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+763,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+764,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+765,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+766,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+767,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+768,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+769,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+770,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+771,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+772,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+773,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+774,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+775,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+776,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+777,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+778,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+779,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+780,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+781,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+782,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+783,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+784,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+785,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+786,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+787,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+788,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+789,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+790,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+791,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+792,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+793,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+794,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+795,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+796,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+797,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+798,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+799,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__11__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+800,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__11__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+801,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+802,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+803,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+804,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+805,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+806,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+807,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+808,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+809,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+810,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+811,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+812,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+813,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+814,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+815,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+816,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+817,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+818,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+819,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+820,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+821,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+822,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+823,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+824,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+825,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+826,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+827,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+828,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+829,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+830,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+831,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+832,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+833,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+834,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+835,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+836,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+837,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+838,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+839,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+840,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+841,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__12__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+842,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__12__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+843,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+844,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+845,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+846,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+847,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+848,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+849,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+850,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+851,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+852,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+853,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+854,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+855,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+856,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+857,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+858,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+859,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+860,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+861,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+862,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+863,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+864,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+865,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+866,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+867,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+868,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+869,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+870,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+871,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+872,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+873,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+874,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+875,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+876,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+877,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+878,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+879,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+880,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+881,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+882,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+883,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__13__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+884,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__13__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+885,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+886,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+887,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+888,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+889,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+890,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+891,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+892,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+893,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+894,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+895,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+896,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+897,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+898,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+899,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+900,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+901,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+902,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+903,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+904,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+905,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+906,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+907,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+908,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+909,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+910,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+911,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+912,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+913,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+914,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+915,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+916,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+917,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+918,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+919,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+920,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+921,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+922,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+923,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+924,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+925,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+926,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+927,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+928,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+929,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+930,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+931,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+932,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+933,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+934,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+935,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+936,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+937,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+938,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+939,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+940,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+941,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+942,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+943,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+944,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+945,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+946,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+947,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+948,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+949,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+950,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+951,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+952,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+953,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+954,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+955,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+956,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+957,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+958,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+959,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+960,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+961,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+962,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+963,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+964,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+965,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+966,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+967,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+968,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+969,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+970,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+971,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+972,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+973,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+974,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+975,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+976,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+977,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+978,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+979,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+980,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+981,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+982,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+983,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+984,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+985,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+986,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+987,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+988,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+989,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+990,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+991,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+992,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+993,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+994,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+995,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+996,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+997,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+998,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+999,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1000,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1001,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1002,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1003,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1004,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1005,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1006,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1007,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1008,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1009,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1010,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1011,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1012,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1013,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1014,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1015,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1016,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1017,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1018,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1019,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1020,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1021,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1022,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1023,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1024,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1025,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1026,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1027,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1028,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1029,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1030,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1031,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1032,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1033,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1034,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1035,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1036,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1037,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1038,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1039,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1040,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1041,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1042,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1043,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1044,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1045,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1046,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1047,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1048,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1049,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1050,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1051,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1052,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1053,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1054,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1055,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1056,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1057,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1058,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1059,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1060,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1061,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1062,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1063,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1064,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1065,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1066,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1067,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1068,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1069,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1070,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1071,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1072,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1073,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1074,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1075,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1076,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1077,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1078,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1079,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1080,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1081,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1082,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1083,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1084,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1085,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1086,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1087,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1088,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1089,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1090,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1091,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1092,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1093,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1094,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1095,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1096,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1097,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1098,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1099,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1100,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1101,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1102,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1103,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1104,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1105,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1106,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1107,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1108,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1109,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1110,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1111,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1112,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1113,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1114,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1115,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1116,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1117,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1118,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1119,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1120,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1121,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1122,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1123,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1124,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1125,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1126,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1127,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1128,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1129,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1130,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1131,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1132,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1133,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1134,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1135,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1136,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1137,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1138,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1139,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1140,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1141,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1142,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1143,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1144,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1145,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1146,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1147,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1148,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1149,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1150,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1151,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1152,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1153,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1154,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1155,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1156,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1157,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1158,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1159,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1160,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1161,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1162,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1163,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1164,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1165,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1166,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1167,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1168,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1169,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1170,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1171,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1172,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1173,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1174,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1175,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1176,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1177,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1178,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1179,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1180,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1181,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1182,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1183,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1184,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1185,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1186,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1187,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1188,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1189,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1190,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1191,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1192,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1193,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1194,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1195,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1196,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1197,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1198,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1199,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1200,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1201,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1202,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1203,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1204,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1205,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1206,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1207,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1208,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1209,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1210,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1211,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1212,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1213,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1214,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1215,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1216,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1217,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1218,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1219,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__8__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1220,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__8__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1221,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1222,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__0__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1223,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__0__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1224,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1225,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__10__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1226,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__10__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1227,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1228,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__11__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1229,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__11__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1230,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1231,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__12__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1232,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__12__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1233,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1234,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__13__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1235,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__13__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1236,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1237,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__1__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1238,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__1__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1239,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1240,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__2__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1241,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__2__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1242,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1243,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__3__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1244,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__3__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1245,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1246,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__4__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1247,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__4__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1248,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1249,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__5__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1250,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__5__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1251,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1252,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__6__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1253,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__6__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1254,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1255,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__7__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1256,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__7__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1257,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1258,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__8__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1259,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__8__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullCData(oldp+1260,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_a),8);
    bufp->fullIData(oldp+1261,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT____Vcellout__gen_row__BRA__9__KET____DOT__gen_col__BRA__9__KET____DOT__mac__out_psum),32);
    bufp->fullCData(oldp+1262,(vlSelf->top_ws_tb__DOT__dut__DOT__array__DOT__gen_row__BRA__9__KET____DOT__gen_col__BRA__9__KET____DOT__mac__DOT__weight_reg),8);
    bufp->fullBit(oldp+1263,(vlSelf->top_ws_tb__DOT__clk));
    bufp->fullBit(oldp+1264,(vlSelf->top_ws_tb__DOT__rst_n));
    bufp->fullBit(oldp+1265,(vlSelf->top_ws_tb__DOT__start));
    bufp->fullWData(oldp+1266,(vlSelf->top_ws_tb__DOT__in_a),112);
    bufp->fullIData(oldp+1270,(vlSelf->top_ws_tb__DOT__load_weights__Vstatic__r),32);
    bufp->fullIData(oldp+1271,(vlSelf->top_ws_tb__DOT__load_weights__Vstatic__c),32);
    bufp->fullIData(oldp+1272,(vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__k),32);
    bufp->fullIData(oldp+1273,(vlSelf->top_ws_tb__DOT__run_multiply__Vstatic__r),32);
    bufp->fullIData(oldp+1274,(vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__row),32);
    bufp->fullIData(oldp+1275,(vlSelf->top_ws_tb__DOT__capture_outputs__Vstatic__c),32);
    bufp->fullIData(oldp+1276,(vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__c),32);
    bufp->fullIData(oldp+1277,(vlSelf->top_ws_tb__DOT__compute_expected__Vstatic__k),32);
    bufp->fullIData(oldp+1278,(vlSelf->top_ws_tb__DOT__check_results__Vstatic__r),32);
    bufp->fullIData(oldp+1279,(vlSelf->top_ws_tb__DOT__check_results__Vstatic__c),32);
    bufp->fullIData(oldp+1280,(vlSelf->top_ws_tb__DOT__check_results__Vstatic__errors),32);
    bufp->fullIData(oldp+1281,(vlSelf->top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1282,(vlSelf->top_ws_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
}
