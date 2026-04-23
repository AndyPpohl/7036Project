// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_ws_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop_ws_tb::Vtop_ws_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_ws_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop_ws_tb::Vtop_ws_tb(const char* _vcname__)
    : Vtop_ws_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_ws_tb::~Vtop_ws_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop_ws_tb___024root___eval_debug_assertions(Vtop_ws_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_ws_tb___024root___eval_static(Vtop_ws_tb___024root* vlSelf);
void Vtop_ws_tb___024root___eval_initial(Vtop_ws_tb___024root* vlSelf);
void Vtop_ws_tb___024root___eval_settle(Vtop_ws_tb___024root* vlSelf);
void Vtop_ws_tb___024root___eval(Vtop_ws_tb___024root* vlSelf);

void Vtop_ws_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_ws_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_ws_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop_ws_tb___024root___eval_static(&(vlSymsp->TOP));
        Vtop_ws_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vtop_ws_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop_ws_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtop_ws_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtop_ws_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtop_ws_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtop_ws_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtop_ws_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop_ws_tb___024root___eval_final(Vtop_ws_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_ws_tb::final() {
    Vtop_ws_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_ws_tb::hierName() const { return vlSymsp->name(); }
const char* Vtop_ws_tb::modelName() const { return "Vtop_ws_tb"; }
unsigned Vtop_ws_tb::threads() const { return 1; }
void Vtop_ws_tb::prepareClone() const { contextp()->prepareClone(); }
void Vtop_ws_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtop_ws_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop_ws_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtop_ws_tb___024root__trace_init_top(Vtop_ws_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_ws_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_ws_tb___024root*>(voidSelf);
    Vtop_ws_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_ws_tb___024root__trace_decl_types(tracep);
    Vtop_ws_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_ws_tb___024root__trace_register(Vtop_ws_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop_ws_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop_ws_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop_ws_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
