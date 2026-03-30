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
    tracep->declBus(c+99,0,"DIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"PSUM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"load_weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"clear_psum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ain", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("win", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+6+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cin", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("aout", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+47+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cout", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+49+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("A", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+10,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+12,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("B", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+14,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+16,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("C_sw", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+18,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+20,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("C_hw", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+22,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+24,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_in_row", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+104+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+106,0,"flush_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+51,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+99,0,"DIM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"PSUM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"clear_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ain", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("win", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+6+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cin", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("aout", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+47+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cout", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+49+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ain_skewed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+94+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lw_skewed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+96+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+107,0,"lw_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("a_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+52,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+53,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+54,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+55,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("w_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+56,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+58,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+59,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("psum_sig", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+60,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+62,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+64,0,"lw_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"lw_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("row[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"a_in_local",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,0,"w_in_local",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+28,0,"psum_in_local",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"psum_pipe1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"PSUM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"clear_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,0,"w_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+28,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+67,0,"w_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+67,0,"w_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+98,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"valid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"psum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"a_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"a_in_local",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+29,0,"w_in_local",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"psum_in_local",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"psum_pipe1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"PSUM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"clear_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+29,0,"w_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+72,0,"w_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+73,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+72,0,"w_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+75,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+111,0,"valid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"psum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"a_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("col[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+76,0,"a_in_local",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+77,0,"w_in_local",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+78,0,"psum_in_local",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"psum_pipe1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"PSUM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"clear_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+77,0,"w_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+78,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"w_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+81,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"w_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+83,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"valid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"psum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"a_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("col[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+84,0,"a_in_local",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+85,0,"w_in_local",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"psum_in_local",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"psum_pipe1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"PSUM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"load_weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"clear_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+85,0,"w_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+88,0,"w_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+89,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+88,0,"w_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+91,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"valid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"psum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"a_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("skew_row[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("ain_skew_chain", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+92+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+32,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+37,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+39,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+40,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+41,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+42,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+43,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    bufp->fullIData(oldp+99,(2U),32);
    bufp->fullIData(oldp+100,(0x10U),32);
    bufp->fullIData(oldp+101,(0x20U),32);
    bufp->fullIData(oldp+102,(0xaU),32);
    bufp->fullIData(oldp+103,(5U),32);
    bufp->fullBit(oldp+104,(vlSelf->mac_array_tb__DOT__valid_in_row[0]));
    bufp->fullBit(oldp+105,(vlSelf->mac_array_tb__DOT__valid_in_row[1]));
    bufp->fullIData(oldp+106,(vlSelf->mac_array_tb__DOT__flush_cycles),32);
    bufp->fullBit(oldp+107,(vlSelf->mac_array_tb__DOT__dut__DOT__lw_pipe));
    bufp->fullIData(oldp+108,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__psum_pipe1),32);
    bufp->fullBit(oldp+109,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__valid_reg));
    bufp->fullIData(oldp+110,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__psum_pipe1),32);
    bufp->fullBit(oldp+111,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__valid_reg));
    bufp->fullBit(oldp+112,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__valid_reg));
    bufp->fullBit(oldp+113,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__valid_reg));
    bufp->fullIData(oldp+114,(2U),32);
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
    bufp->fullBit(oldp+2,(vlSelf->mac_array_tb__DOT__load_weight));
    bufp->fullBit(oldp+3,(vlSelf->mac_array_tb__DOT__clear_psum));
    bufp->fullSData(oldp+4,(vlSelf->mac_array_tb__DOT__ain[0]),16);
    bufp->fullSData(oldp+5,(vlSelf->mac_array_tb__DOT__ain[1]),16);
    bufp->fullSData(oldp+6,(vlSelf->mac_array_tb__DOT__win[0]),16);
    bufp->fullSData(oldp+7,(vlSelf->mac_array_tb__DOT__win[1]),16);
    bufp->fullIData(oldp+8,(vlSelf->mac_array_tb__DOT__cin[0]),32);
    bufp->fullIData(oldp+9,(vlSelf->mac_array_tb__DOT__cin[1]),32);
    bufp->fullSData(oldp+10,(vlSelf->mac_array_tb__DOT__A
                             [0U][0U]),16);
    bufp->fullSData(oldp+11,(vlSelf->mac_array_tb__DOT__A
                             [0U][1U]),16);
    bufp->fullSData(oldp+12,(vlSelf->mac_array_tb__DOT__A
                             [1U][0U]),16);
    bufp->fullSData(oldp+13,(vlSelf->mac_array_tb__DOT__A
                             [1U][1U]),16);
    bufp->fullSData(oldp+14,(vlSelf->mac_array_tb__DOT__B
                             [0U][0U]),16);
    bufp->fullSData(oldp+15,(vlSelf->mac_array_tb__DOT__B
                             [0U][1U]),16);
    bufp->fullSData(oldp+16,(vlSelf->mac_array_tb__DOT__B
                             [1U][0U]),16);
    bufp->fullSData(oldp+17,(vlSelf->mac_array_tb__DOT__B
                             [1U][1U]),16);
    bufp->fullIData(oldp+18,(vlSelf->mac_array_tb__DOT__C_sw
                             [0U][0U]),32);
    bufp->fullIData(oldp+19,(vlSelf->mac_array_tb__DOT__C_sw
                             [0U][1U]),32);
    bufp->fullIData(oldp+20,(vlSelf->mac_array_tb__DOT__C_sw
                             [1U][0U]),32);
    bufp->fullIData(oldp+21,(vlSelf->mac_array_tb__DOT__C_sw
                             [1U][1U]),32);
    bufp->fullIData(oldp+22,(vlSelf->mac_array_tb__DOT__C_hw
                             [0U][0U]),32);
    bufp->fullIData(oldp+23,(vlSelf->mac_array_tb__DOT__C_hw
                             [0U][1U]),32);
    bufp->fullIData(oldp+24,(vlSelf->mac_array_tb__DOT__C_hw
                             [1U][0U]),32);
    bufp->fullIData(oldp+25,(vlSelf->mac_array_tb__DOT__C_hw
                             [1U][1U]),32);
    bufp->fullSData(oldp+26,(vlSelf->mac_array_tb__DOT__ain
                             [0U]),16);
    bufp->fullSData(oldp+27,(vlSelf->mac_array_tb__DOT__win
                             [0U]),16);
    bufp->fullIData(oldp+28,(vlSelf->mac_array_tb__DOT__cin
                             [0U]),32);
    bufp->fullSData(oldp+29,(vlSelf->mac_array_tb__DOT__win
                             [1U]),16);
    bufp->fullIData(oldp+30,(vlSelf->mac_array_tb__DOT__cin
                             [1U]),32);
    bufp->fullIData(oldp+31,(vlSelf->mac_array_tb__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+32,(vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__k),32);
    bufp->fullIData(oldp+33,(vlSelf->mac_array_tb__DOT__unnamedblk12__DOT__unnamedblk13__DOT__r),32);
    bufp->fullIData(oldp+34,(vlSelf->mac_array_tb__DOT__unnamedblk14__DOT__i),32);
    bufp->fullIData(oldp+35,(vlSelf->mac_array_tb__DOT__unnamedblk14__DOT__unnamedblk15__DOT__j),32);
    bufp->fullIData(oldp+36,(vlSelf->mac_array_tb__DOT__unnamedblk16__DOT__i),32);
    bufp->fullIData(oldp+37,(vlSelf->mac_array_tb__DOT__unnamedblk16__DOT__unnamedblk17__DOT__j),32);
    bufp->fullIData(oldp+38,(vlSelf->mac_array_tb__DOT__unnamedblk18__DOT__i),32);
    bufp->fullIData(oldp+39,(vlSelf->mac_array_tb__DOT__unnamedblk18__DOT__unnamedblk19__DOT__j),32);
    bufp->fullIData(oldp+40,(vlSelf->mac_array_tb__DOT__unnamedblk20__DOT__i),32);
    bufp->fullIData(oldp+41,(vlSelf->mac_array_tb__DOT__unnamedblk20__DOT__unnamedblk21__DOT__j),32);
    bufp->fullIData(oldp+42,(vlSelf->mac_array_tb__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+43,(vlSelf->mac_array_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
    bufp->fullIData(oldp+44,(vlSelf->mac_array_tb__DOT__unnamedblk8__DOT__col),32);
    bufp->fullIData(oldp+45,(vlSelf->mac_array_tb__DOT__unnamedblk9__DOT__row),32);
    bufp->fullIData(oldp+46,(vlSelf->mac_array_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__col),32);
    bufp->fullSData(oldp+47,(vlSelf->mac_array_tb__DOT__aout[0]),16);
    bufp->fullSData(oldp+48,(vlSelf->mac_array_tb__DOT__aout[1]),16);
    bufp->fullIData(oldp+49,(vlSelf->mac_array_tb__DOT__cout[0]),32);
    bufp->fullIData(oldp+50,(vlSelf->mac_array_tb__DOT__cout[1]),32);
    bufp->fullIData(oldp+51,(vlSelf->mac_array_tb__DOT__cycle_count),32);
    bufp->fullSData(oldp+52,(vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
                             [0U][0U]),16);
    bufp->fullSData(oldp+53,(vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
                             [0U][1U]),16);
    bufp->fullSData(oldp+54,(vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
                             [1U][0U]),16);
    bufp->fullSData(oldp+55,(vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
                             [1U][1U]),16);
    bufp->fullSData(oldp+56,(vlSelf->mac_array_tb__DOT__dut__DOT__w_sig
                             [0U][0U]),16);
    bufp->fullSData(oldp+57,(vlSelf->mac_array_tb__DOT__dut__DOT__w_sig
                             [0U][1U]),16);
    bufp->fullSData(oldp+58,(vlSelf->mac_array_tb__DOT__dut__DOT__w_sig
                             [1U][0U]),16);
    bufp->fullSData(oldp+59,(vlSelf->mac_array_tb__DOT__dut__DOT__w_sig
                             [1U][1U]),16);
    bufp->fullIData(oldp+60,(vlSelf->mac_array_tb__DOT__dut__DOT__psum_sig
                             [0U][0U]),32);
    bufp->fullIData(oldp+61,(vlSelf->mac_array_tb__DOT__dut__DOT__psum_sig
                             [0U][1U]),32);
    bufp->fullIData(oldp+62,(vlSelf->mac_array_tb__DOT__dut__DOT__psum_sig
                             [1U][0U]),32);
    bufp->fullIData(oldp+63,(vlSelf->mac_array_tb__DOT__dut__DOT__psum_sig
                             [1U][1U]),32);
    bufp->fullBit(oldp+64,(vlSelf->mac_array_tb__DOT__dut__DOT__lw_d1));
    bufp->fullBit(oldp+65,(vlSelf->mac_array_tb__DOT__dut__DOT__lw_d2));
    bufp->fullSData(oldp+66,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__a_out_reg),16);
    bufp->fullSData(oldp+67,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__w_out_reg),16);
    bufp->fullIData(oldp+68,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__psum_reg),32);
    bufp->fullSData(oldp+69,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__weight_reg),16);
    bufp->fullSData(oldp+70,(vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
                             [0U][0U]),16);
    bufp->fullSData(oldp+71,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__a_out_reg),16);
    bufp->fullSData(oldp+72,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__w_out_reg),16);
    bufp->fullIData(oldp+73,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__psum_reg),32);
    bufp->fullSData(oldp+74,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__weight_reg),16);
    bufp->fullIData(oldp+75,((vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
                              [0U][0U] * (IData)(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__weight_reg))),32);
    bufp->fullSData(oldp+76,(vlSelf->mac_array_tb__DOT__dut__DOT__skew_row__BRA__1__KET____DOT__ain_skew_chain
                             [0U]),16);
    bufp->fullSData(oldp+77,(vlSelf->mac_array_tb__DOT__dut__DOT__w_sig
                             [0U][0U]),16);
    bufp->fullIData(oldp+78,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__psum_pipe1),32);
    bufp->fullSData(oldp+79,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__a_out_reg),16);
    bufp->fullSData(oldp+80,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__w_out_reg),16);
    bufp->fullIData(oldp+81,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__psum_reg),32);
    bufp->fullSData(oldp+82,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__weight_reg),16);
    bufp->fullIData(oldp+83,((vlSelf->mac_array_tb__DOT__dut__DOT__skew_row__BRA__1__KET____DOT__ain_skew_chain
                              [0U] * (IData)(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__weight_reg))),32);
    bufp->fullSData(oldp+84,(vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
                             [1U][0U]),16);
    bufp->fullSData(oldp+85,(vlSelf->mac_array_tb__DOT__dut__DOT__w_sig
                             [0U][1U]),16);
    bufp->fullIData(oldp+86,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__psum_pipe1),32);
    bufp->fullSData(oldp+87,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__a_out_reg),16);
    bufp->fullSData(oldp+88,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__w_out_reg),16);
    bufp->fullIData(oldp+89,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__psum_reg),32);
    bufp->fullSData(oldp+90,(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__weight_reg),16);
    bufp->fullIData(oldp+91,((vlSelf->mac_array_tb__DOT__dut__DOT__a_sig
                              [1U][0U] * (IData)(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__mac_inst__DOT__weight_reg))),32);
    bufp->fullSData(oldp+92,(vlSelf->mac_array_tb__DOT__dut__DOT__skew_row__BRA__1__KET____DOT__ain_skew_chain[0]),16);
    bufp->fullBit(oldp+93,(vlSelf->mac_array_tb__DOT__clk));
    bufp->fullSData(oldp+94,(vlSelf->mac_array_tb__DOT__dut__DOT__ain_skewed[0]),16);
    bufp->fullSData(oldp+95,(vlSelf->mac_array_tb__DOT__dut__DOT__ain_skewed[1]),16);
    bufp->fullBit(oldp+96,(vlSelf->mac_array_tb__DOT__dut__DOT__lw_skewed[0]));
    bufp->fullBit(oldp+97,(vlSelf->mac_array_tb__DOT__dut__DOT__lw_skewed[1]));
    bufp->fullIData(oldp+98,((vlSelf->mac_array_tb__DOT__ain
                              [0U] * (IData)(vlSelf->mac_array_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__mac_inst__DOT__weight_reg))),32);
}
