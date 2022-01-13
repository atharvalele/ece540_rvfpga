// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim___024unit.h"

void Vrvfpgasim___024unit___ctor_var_reset(Vrvfpgasim___024unit* vlSelf);

Vrvfpgasim___024unit::Vrvfpgasim___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vrvfpgasim___024unit___ctor_var_reset(this);
}

void Vrvfpgasim___024unit::__Vconfigure(Vrvfpgasim__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vrvfpgasim___024unit::~Vrvfpgasim___024unit() {
}
