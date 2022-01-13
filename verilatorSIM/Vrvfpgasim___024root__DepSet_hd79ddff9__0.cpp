// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim___024root.h"

QData Vrvfpgasim___024root___change_request_1(Vrvfpgasim___024root* vlSelf);

VL_INLINE_OPT QData Vrvfpgasim___024root___change_request(Vrvfpgasim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvfpgasim___024root___change_request\n"); );
    // Body
    return (Vrvfpgasim___024root___change_request_1(vlSelf));
}

#ifdef VL_DEBUG
void Vrvfpgasim___024root___eval_debug_assertions(Vrvfpgasim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvfpgasim___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->i_jtag_tck & 0xfeU))) {
        Verilated::overWidthError("i_jtag_tck");}
    if (VL_UNLIKELY((vlSelf->i_jtag_tms & 0xfeU))) {
        Verilated::overWidthError("i_jtag_tms");}
    if (VL_UNLIKELY((vlSelf->i_jtag_tdi & 0xfeU))) {
        Verilated::overWidthError("i_jtag_tdi");}
    if (VL_UNLIKELY((vlSelf->i_jtag_trst_n & 0xfeU))) {
        Verilated::overWidthError("i_jtag_trst_n");}
}
#endif  // VL_DEBUG
