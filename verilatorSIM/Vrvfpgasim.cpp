// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrvfpgasim.h"
#include "Vrvfpgasim__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vrvfpgasim::Vrvfpgasim(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vrvfpgasim__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , i_jtag_tck{vlSymsp->TOP.i_jtag_tck}
    , i_jtag_trst_n{vlSymsp->TOP.i_jtag_trst_n}
    , rst{vlSymsp->TOP.rst}
    , i_jtag_tms{vlSymsp->TOP.i_jtag_tms}
    , i_jtag_tdi{vlSymsp->TOP.i_jtag_tdi}
    , o_jtag_tdo{vlSymsp->TOP.o_jtag_tdo}
    , o_uart_tx{vlSymsp->TOP.o_uart_tx}
    , o_gpio{vlSymsp->TOP.o_gpio}
    , rvfpgasim{vlSymsp->TOP.rvfpgasim}
    , rootp{&(vlSymsp->TOP)}
{
}

Vrvfpgasim::Vrvfpgasim(const char* _vcname__)
    : Vrvfpgasim(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vrvfpgasim::~Vrvfpgasim() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vrvfpgasim___024root___eval_initial(Vrvfpgasim___024root* vlSelf);
void Vrvfpgasim___024root___eval_settle(Vrvfpgasim___024root* vlSelf);
void Vrvfpgasim___024root___eval(Vrvfpgasim___024root* vlSelf);
QData Vrvfpgasim___024root___change_request(Vrvfpgasim___024root* vlSelf);
#ifdef VL_DEBUG
void Vrvfpgasim___024root___eval_debug_assertions(Vrvfpgasim___024root* vlSelf);
#endif  // VL_DEBUG
void Vrvfpgasim___024root___final(Vrvfpgasim___024root* vlSelf);

static void _eval_initial_loop(Vrvfpgasim__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vrvfpgasim___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vrvfpgasim___024root___eval_settle(&(vlSymsp->TOP));
        Vrvfpgasim___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vrvfpgasim___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../src/rvfpgasim.v", 25, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vrvfpgasim___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vrvfpgasim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrvfpgasim::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrvfpgasim___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vrvfpgasim___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vrvfpgasim___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../src/rvfpgasim.v", 25, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vrvfpgasim___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vrvfpgasim::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vrvfpgasim::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vrvfpgasim::final() {
    Vrvfpgasim___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vrvfpgasim___024root__trace_init_top(Vrvfpgasim___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrvfpgasim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrvfpgasim___024root*>(voidSelf);
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vrvfpgasim___024root__trace_init_top(vlSelf, tracep);
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vrvfpgasim___024root__trace_register(Vrvfpgasim___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrvfpgasim::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vrvfpgasim___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
