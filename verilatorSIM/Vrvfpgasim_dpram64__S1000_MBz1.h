// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef VERILATED_VRVFPGASIM_DPRAM64__S1000_MBZ1_H_
#define VERILATED_VRVFPGASIM_DPRAM64__S1000_MBZ1_H_  // guard

#include "verilated.h"

class Vrvfpgasim__Syms;
VL_MODULE(Vrvfpgasim_dpram64__S1000_MBz1) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__we,7,0);
    VL_IN16(__PVT__waddr,11,0);
    VL_IN16(__PVT__raddr,11,0);
    IData/*31:0*/ __PVT__i;
    VL_IN64(__PVT__din,63,0);
    VL_OUT64(__PVT__dout,63,0);
    VlUnpacked<QData/*63:0*/, 512> mem;

    // INTERNAL VARIABLES
    Vrvfpgasim__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vrvfpgasim_dpram64__S1000_MBz1(const char* name);
    ~Vrvfpgasim_dpram64__S1000_MBz1();
    VL_UNCOPYABLE(Vrvfpgasim_dpram64__S1000_MBz1);

    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
