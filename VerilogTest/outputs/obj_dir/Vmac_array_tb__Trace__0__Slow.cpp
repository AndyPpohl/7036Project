// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmac_array_tb__Syms.h"


VL_ATTR_COLD void Vmac_array_tb___024root__trace_init_sub__TOP__0(Vmac_array_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("mac_array_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+163,0,"DIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ain", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+6,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+10,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+14,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+18,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("cin", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+22+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("aout", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+26+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cout", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+126+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+163,0,"DIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ain", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("win", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+6,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+10,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+14,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+18,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("cin", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+22+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("aout", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+26+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cout", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+126+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("a_conn", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+30+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("b_conn", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+46+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cin_conn", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+94+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cout_conn", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+130+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+166,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+110,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+167,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+65,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+111,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+147,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+168,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+112,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+148,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+169,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+69,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+113,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+149,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+170,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+114,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+150,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+171,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+73,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+115,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+151,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+172,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+75,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+116,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+152,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+173,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+77,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+117,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+153,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+174,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+79,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+118,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+175,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+81,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+119,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+155,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+176,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+83,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+120,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+156,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+177,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+121,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+157,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+178,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+87,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+122,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+158,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+179,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+89,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+123,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+159,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+91,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+124,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+160,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+181,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+125,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+161,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+182,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+182,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+181,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+182,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmac_array_tb___024root__trace_init_top(Vmac_array_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root__trace_init_top\n"); );
    // Body
    Vmac_array_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmac_array_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmac_array_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmac_array_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmac_array_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmac_array_tb___024root__trace_register(Vmac_array_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vmac_array_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmac_array_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmac_array_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmac_array_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmac_array_tb___024root__trace_const_0_sub_0(Vmac_array_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmac_array_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root__trace_const_0\n"); );
    // Init
    Vmac_array_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmac_array_tb___024root*>(voidSelf);
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmac_array_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmac_array_tb___024root__trace_const_0_sub_0(Vmac_array_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+163,(4U),32);
    bufp->fullIData(oldp+164,(0xaU),32);
    bufp->fullIData(oldp+165,(3U),32);
    bufp->fullIData(oldp+166,(0U),32);
    bufp->fullIData(oldp+167,(1U),32);
    bufp->fullIData(oldp+168,(2U),32);
    bufp->fullIData(oldp+169,(3U),32);
    bufp->fullIData(oldp+170,(4U),32);
    bufp->fullIData(oldp+171,(5U),32);
    bufp->fullIData(oldp+172,(6U),32);
    bufp->fullIData(oldp+173,(7U),32);
    bufp->fullIData(oldp+174,(8U),32);
    bufp->fullIData(oldp+175,(9U),32);
    bufp->fullIData(oldp+176,(0xaU),32);
    bufp->fullIData(oldp+177,(0xbU),32);
    bufp->fullIData(oldp+178,(0xcU),32);
    bufp->fullIData(oldp+179,(0xdU),32);
    bufp->fullIData(oldp+180,(0xeU),32);
    bufp->fullIData(oldp+181,(0xfU),32);
    bufp->fullIData(oldp+182,(4U),32);
}

VL_ATTR_COLD void Vmac_array_tb___024root__trace_full_0_sub_0(Vmac_array_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmac_array_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root__trace_full_0\n"); );
    // Init
    Vmac_array_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmac_array_tb___024root*>(voidSelf);
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmac_array_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmac_array_tb___024root__trace_full_0_sub_0(Vmac_array_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmac_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_array_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->mac_array_tb__DOT__nrst));
    bufp->fullCData(oldp+2,(vlSelf->mac_array_tb__DOT__ain[0]),8);
    bufp->fullCData(oldp+3,(vlSelf->mac_array_tb__DOT__ain[1]),8);
    bufp->fullCData(oldp+4,(vlSelf->mac_array_tb__DOT__ain[2]),8);
    bufp->fullCData(oldp+5,(vlSelf->mac_array_tb__DOT__ain[3]),8);
    bufp->fullCData(oldp+6,(vlSelf->mac_array_tb__DOT__weights
                            [0U][0U]),8);
    bufp->fullCData(oldp+7,(vlSelf->mac_array_tb__DOT__weights
                            [0U][1U]),8);
    bufp->fullCData(oldp+8,(vlSelf->mac_array_tb__DOT__weights
                            [0U][2U]),8);
    bufp->fullCData(oldp+9,(vlSelf->mac_array_tb__DOT__weights
                            [0U][3U]),8);
    bufp->fullCData(oldp+10,(vlSelf->mac_array_tb__DOT__weights
                             [1U][0U]),8);
    bufp->fullCData(oldp+11,(vlSelf->mac_array_tb__DOT__weights
                             [1U][1U]),8);
    bufp->fullCData(oldp+12,(vlSelf->mac_array_tb__DOT__weights
                             [1U][2U]),8);
    bufp->fullCData(oldp+13,(vlSelf->mac_array_tb__DOT__weights
                             [1U][3U]),8);
    bufp->fullCData(oldp+14,(vlSelf->mac_array_tb__DOT__weights
                             [2U][0U]),8);
    bufp->fullCData(oldp+15,(vlSelf->mac_array_tb__DOT__weights
                             [2U][1U]),8);
    bufp->fullCData(oldp+16,(vlSelf->mac_array_tb__DOT__weights
                             [2U][2U]),8);
    bufp->fullCData(oldp+17,(vlSelf->mac_array_tb__DOT__weights
                             [2U][3U]),8);
    bufp->fullCData(oldp+18,(vlSelf->mac_array_tb__DOT__weights
                             [3U][0U]),8);
    bufp->fullCData(oldp+19,(vlSelf->mac_array_tb__DOT__weights
                             [3U][1U]),8);
    bufp->fullCData(oldp+20,(vlSelf->mac_array_tb__DOT__weights
                             [3U][2U]),8);
    bufp->fullCData(oldp+21,(vlSelf->mac_array_tb__DOT__weights
                             [3U][3U]),8);
    bufp->fullCData(oldp+22,(vlSelf->mac_array_tb__DOT__cin[0]),8);
    bufp->fullCData(oldp+23,(vlSelf->mac_array_tb__DOT__cin[1]),8);
    bufp->fullCData(oldp+24,(vlSelf->mac_array_tb__DOT__cin[2]),8);
    bufp->fullCData(oldp+25,(vlSelf->mac_array_tb__DOT__cin[3]),8);
    bufp->fullCData(oldp+26,(vlSelf->mac_array_tb__DOT__aout[0]),8);
    bufp->fullCData(oldp+27,(vlSelf->mac_array_tb__DOT__aout[1]),8);
    bufp->fullCData(oldp+28,(vlSelf->mac_array_tb__DOT__aout[2]),8);
    bufp->fullCData(oldp+29,(vlSelf->mac_array_tb__DOT__aout[3]),8);
    bufp->fullCData(oldp+30,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[0]),8);
    bufp->fullCData(oldp+31,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[1]),8);
    bufp->fullCData(oldp+32,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[2]),8);
    bufp->fullCData(oldp+33,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[3]),8);
    bufp->fullCData(oldp+34,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[4]),8);
    bufp->fullCData(oldp+35,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[5]),8);
    bufp->fullCData(oldp+36,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[6]),8);
    bufp->fullCData(oldp+37,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[7]),8);
    bufp->fullCData(oldp+38,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[8]),8);
    bufp->fullCData(oldp+39,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[9]),8);
    bufp->fullCData(oldp+40,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[10]),8);
    bufp->fullCData(oldp+41,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[11]),8);
    bufp->fullCData(oldp+42,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[12]),8);
    bufp->fullCData(oldp+43,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[13]),8);
    bufp->fullCData(oldp+44,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[14]),8);
    bufp->fullCData(oldp+45,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn[15]),8);
    bufp->fullCData(oldp+46,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[0]),8);
    bufp->fullCData(oldp+47,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[1]),8);
    bufp->fullCData(oldp+48,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[2]),8);
    bufp->fullCData(oldp+49,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[3]),8);
    bufp->fullCData(oldp+50,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[4]),8);
    bufp->fullCData(oldp+51,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[5]),8);
    bufp->fullCData(oldp+52,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[6]),8);
    bufp->fullCData(oldp+53,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[7]),8);
    bufp->fullCData(oldp+54,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[8]),8);
    bufp->fullCData(oldp+55,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[9]),8);
    bufp->fullCData(oldp+56,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[10]),8);
    bufp->fullCData(oldp+57,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[11]),8);
    bufp->fullCData(oldp+58,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[12]),8);
    bufp->fullCData(oldp+59,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[13]),8);
    bufp->fullCData(oldp+60,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[14]),8);
    bufp->fullCData(oldp+61,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn[15]),8);
    bufp->fullCData(oldp+62,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                             [0U]),8);
    bufp->fullCData(oldp+63,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                             [0U]),8);
    bufp->fullCData(oldp+64,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                             [1U]),8);
    bufp->fullCData(oldp+65,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                             [1U]),8);
    bufp->fullCData(oldp+66,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                             [2U]),8);
    bufp->fullCData(oldp+67,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                             [2U]),8);
    bufp->fullCData(oldp+68,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                             [3U]),8);
    bufp->fullCData(oldp+69,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                             [3U]),8);
    bufp->fullCData(oldp+70,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                             [4U]),8);
    bufp->fullCData(oldp+71,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                             [4U]),8);
    bufp->fullCData(oldp+72,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                             [5U]),8);
    bufp->fullCData(oldp+73,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                             [5U]),8);
    bufp->fullCData(oldp+74,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                             [6U]),8);
    bufp->fullCData(oldp+75,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                             [6U]),8);
    bufp->fullCData(oldp+76,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                             [7U]),8);
    bufp->fullCData(oldp+77,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                             [7U]),8);
    bufp->fullCData(oldp+78,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                             [8U]),8);
    bufp->fullCData(oldp+79,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                             [8U]),8);
    bufp->fullCData(oldp+80,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                             [9U]),8);
    bufp->fullCData(oldp+81,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                             [9U]),8);
    bufp->fullCData(oldp+82,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                             [0xaU]),8);
    bufp->fullCData(oldp+83,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                             [0xaU]),8);
    bufp->fullCData(oldp+84,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                             [0xbU]),8);
    bufp->fullCData(oldp+85,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                             [0xbU]),8);
    bufp->fullCData(oldp+86,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                             [0xcU]),8);
    bufp->fullCData(oldp+87,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                             [0xcU]),8);
    bufp->fullCData(oldp+88,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                             [0xdU]),8);
    bufp->fullCData(oldp+89,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                             [0xdU]),8);
    bufp->fullCData(oldp+90,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                             [0xeU]),8);
    bufp->fullCData(oldp+91,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                             [0xeU]),8);
    bufp->fullCData(oldp+92,(vlSelf->mac_array_tb__DOT__dut__DOT__a_conn
                             [0xfU]),8);
    bufp->fullCData(oldp+93,(vlSelf->mac_array_tb__DOT__dut__DOT__b_conn
                             [0xfU]),8);
    bufp->fullCData(oldp+94,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[0]),8);
    bufp->fullCData(oldp+95,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[1]),8);
    bufp->fullCData(oldp+96,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[2]),8);
    bufp->fullCData(oldp+97,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[3]),8);
    bufp->fullCData(oldp+98,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[4]),8);
    bufp->fullCData(oldp+99,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[5]),8);
    bufp->fullCData(oldp+100,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[6]),8);
    bufp->fullCData(oldp+101,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[7]),8);
    bufp->fullCData(oldp+102,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[8]),8);
    bufp->fullCData(oldp+103,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[9]),8);
    bufp->fullCData(oldp+104,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[10]),8);
    bufp->fullCData(oldp+105,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[11]),8);
    bufp->fullCData(oldp+106,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[12]),8);
    bufp->fullCData(oldp+107,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[13]),8);
    bufp->fullCData(oldp+108,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[14]),8);
    bufp->fullCData(oldp+109,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn[15]),8);
    bufp->fullCData(oldp+110,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                              [0U]),8);
    bufp->fullCData(oldp+111,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                              [1U]),8);
    bufp->fullCData(oldp+112,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                              [2U]),8);
    bufp->fullCData(oldp+113,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                              [3U]),8);
    bufp->fullCData(oldp+114,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                              [4U]),8);
    bufp->fullCData(oldp+115,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                              [5U]),8);
    bufp->fullCData(oldp+116,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                              [6U]),8);
    bufp->fullCData(oldp+117,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                              [7U]),8);
    bufp->fullCData(oldp+118,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                              [8U]),8);
    bufp->fullCData(oldp+119,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                              [9U]),8);
    bufp->fullCData(oldp+120,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                              [0xaU]),8);
    bufp->fullCData(oldp+121,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                              [0xbU]),8);
    bufp->fullCData(oldp+122,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                              [0xcU]),8);
    bufp->fullCData(oldp+123,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                              [0xdU]),8);
    bufp->fullCData(oldp+124,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                              [0xeU]),8);
    bufp->fullCData(oldp+125,(vlSelf->mac_array_tb__DOT__dut__DOT__cin_conn
                              [0xfU]),8);
    bufp->fullCData(oldp+126,(vlSelf->mac_array_tb__DOT__cout[0]),8);
    bufp->fullCData(oldp+127,(vlSelf->mac_array_tb__DOT__cout[1]),8);
    bufp->fullCData(oldp+128,(vlSelf->mac_array_tb__DOT__cout[2]),8);
    bufp->fullCData(oldp+129,(vlSelf->mac_array_tb__DOT__cout[3]),8);
    bufp->fullCData(oldp+130,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[0]),8);
    bufp->fullCData(oldp+131,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[1]),8);
    bufp->fullCData(oldp+132,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[2]),8);
    bufp->fullCData(oldp+133,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[3]),8);
    bufp->fullCData(oldp+134,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[4]),8);
    bufp->fullCData(oldp+135,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[5]),8);
    bufp->fullCData(oldp+136,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[6]),8);
    bufp->fullCData(oldp+137,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[7]),8);
    bufp->fullCData(oldp+138,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[8]),8);
    bufp->fullCData(oldp+139,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[9]),8);
    bufp->fullCData(oldp+140,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[10]),8);
    bufp->fullCData(oldp+141,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[11]),8);
    bufp->fullCData(oldp+142,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[12]),8);
    bufp->fullCData(oldp+143,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[13]),8);
    bufp->fullCData(oldp+144,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[14]),8);
    bufp->fullCData(oldp+145,(vlSelf->mac_array_tb__DOT__dut__DOT__cout_conn[15]),8);
    bufp->fullCData(oldp+146,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout),8);
    bufp->fullCData(oldp+147,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout),8);
    bufp->fullCData(oldp+148,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout),8);
    bufp->fullCData(oldp+149,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout),8);
    bufp->fullCData(oldp+150,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout),8);
    bufp->fullCData(oldp+151,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout),8);
    bufp->fullCData(oldp+152,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout),8);
    bufp->fullCData(oldp+153,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout),8);
    bufp->fullCData(oldp+154,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout),8);
    bufp->fullCData(oldp+155,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout),8);
    bufp->fullCData(oldp+156,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout),8);
    bufp->fullCData(oldp+157,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout),8);
    bufp->fullCData(oldp+158,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__mac_inst__cout),8);
    bufp->fullCData(oldp+159,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__mac_inst__cout),8);
    bufp->fullCData(oldp+160,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__mac_inst__cout),8);
    bufp->fullCData(oldp+161,(vlSelf->mac_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__mac_inst__cout),8);
    bufp->fullBit(oldp+162,(vlSelf->mac_array_tb__DOT__clk));
}
