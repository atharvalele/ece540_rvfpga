// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_mux__pi4.h"

void Vrvfpgasim_axi_mux__pi4___ctor_var_reset(Vrvfpgasim_axi_mux__pi4* vlSelf);

Vrvfpgasim_axi_mux__pi4::Vrvfpgasim_axi_mux__pi4(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vrvfpgasim_axi_mux__pi4___ctor_var_reset(this);
}

void Vrvfpgasim_axi_mux__pi4::__Vconfigure(Vrvfpgasim__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vrvfpgasim_axi_mux__pi4::~Vrvfpgasim_axi_mux__pi4() {
}
