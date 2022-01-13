// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef VERILATED_VRVFPGASIM___024UNIT_H_
#define VERILATED_VRVFPGASIM___024UNIT_H_  // guard

#include "verilated.h"

class Vrvfpgasim__Syms;
VL_MODULE(Vrvfpgasim___024unit) {
  public:

    // INTERNAL VARIABLES
    Vrvfpgasim__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vrvfpgasim___024unit(const char* name);
    ~Vrvfpgasim___024unit();
    VL_UNCOPYABLE(Vrvfpgasim___024unit);

    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
