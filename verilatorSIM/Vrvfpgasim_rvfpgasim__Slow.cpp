// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_rvfpgasim.h"

void Vrvfpgasim_rvfpgasim___ctor_var_reset(Vrvfpgasim_rvfpgasim* vlSelf);

Vrvfpgasim_rvfpgasim::Vrvfpgasim_rvfpgasim(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vrvfpgasim_rvfpgasim___ctor_var_reset(this);
}

void Vrvfpgasim_rvfpgasim::__Vconfigure(Vrvfpgasim__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vrvfpgasim_rvfpgasim::~Vrvfpgasim_rvfpgasim() {
}
