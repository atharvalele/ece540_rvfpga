// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_wb_mem_wrapper__M1000_Iz1.h"

void Vrvfpgasim_wb_mem_wrapper__M1000_Iz1___ctor_var_reset(Vrvfpgasim_wb_mem_wrapper__M1000_Iz1* vlSelf);

Vrvfpgasim_wb_mem_wrapper__M1000_Iz1::Vrvfpgasim_wb_mem_wrapper__M1000_Iz1(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vrvfpgasim_wb_mem_wrapper__M1000_Iz1___ctor_var_reset(this);
}

void Vrvfpgasim_wb_mem_wrapper__M1000_Iz1::__Vconfigure(Vrvfpgasim__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vrvfpgasim_wb_mem_wrapper__M1000_Iz1::~Vrvfpgasim_wb_mem_wrapper__M1000_Iz1() {
}
