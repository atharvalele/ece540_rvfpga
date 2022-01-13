// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_dpram64__S10000_MBz1.h"

void Vrvfpgasim_dpram64__S10000_MBz1___ctor_var_reset(Vrvfpgasim_dpram64__S10000_MBz1* vlSelf);

Vrvfpgasim_dpram64__S10000_MBz1::Vrvfpgasim_dpram64__S10000_MBz1(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vrvfpgasim_dpram64__S10000_MBz1___ctor_var_reset(this);
}

void Vrvfpgasim_dpram64__S10000_MBz1::__Vconfigure(Vrvfpgasim__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vrvfpgasim_dpram64__S10000_MBz1::~Vrvfpgasim_dpram64__S10000_MBz1() {
}
