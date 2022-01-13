// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim_dpram64__S1000_MBz1.h"

VL_ATTR_COLD void Vrvfpgasim_dpram64__S1000_MBz1___ctor_var_reset(Vrvfpgasim_dpram64__S1000_MBz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrvfpgasim_dpram64__S1000_MBz1___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__we = VL_RAND_RESET_I(8);
    vlSelf->__PVT__din = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__waddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__raddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__dout = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
}
