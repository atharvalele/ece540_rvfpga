// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_swervolf_core__Bz1.h"

// Parameter definitions for Vrvfpgasim_swervolf_core__Bz1
constexpr VlUnpacked<IData/*31:0*/, 9> Vrvfpgasim_swervolf_core__Bz1::__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__GW_CONFIG;


void Vrvfpgasim_swervolf_core__Bz1___ctor_var_reset(Vrvfpgasim_swervolf_core__Bz1* vlSelf);

Vrvfpgasim_swervolf_core__Bz1::Vrvfpgasim_swervolf_core__Bz1(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vrvfpgasim_swervolf_core__Bz1___ctor_var_reset(this);
}

void Vrvfpgasim_swervolf_core__Bz1::__Vconfigure(Vrvfpgasim__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vrvfpgasim_swervolf_core__Bz1::~Vrvfpgasim_swervolf_core__Bz1() {
}
