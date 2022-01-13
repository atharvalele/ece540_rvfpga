// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef VERILATED_VRVFPGASIM_WB_MEM_WRAPPER__M1000_IZ1_H_
#define VERILATED_VRVFPGASIM_WB_MEM_WRAPPER__M1000_IZ1_H_  // guard

#include "verilated.h"

class Vrvfpgasim__Syms;
class Vrvfpgasim_dpram64__S1000_MBz1;

VL_MODULE(Vrvfpgasim_wb_mem_wrapper__M1000_Iz1) {
  public:
    // CELLS
    Vrvfpgasim_dpram64__S1000_MBz1* ram;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst,0,0);
    VL_IN8(__PVT__i_wb_sel,3,0);
    VL_IN8(__PVT__i_wb_we,0,0);
    VL_IN8(__PVT__i_wb_cyc,0,0);
    VL_IN8(__PVT__i_wb_stb,0,0);
    VL_OUT8(__PVT__o_wb_ack,0,0);
    CData/*7:0*/ __PVT__mem_we;
    VL_IN16(__PVT__i_wb_adr,11,2);
    VL_IN(__PVT__i_wb_dat,31,0);
    VL_OUT(__PVT__o_wb_rdt,31,0);
    IData/*31:0*/ __PVT__mem_addr;

    // INTERNAL VARIABLES
    Vrvfpgasim__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vrvfpgasim_wb_mem_wrapper__M1000_Iz1(const char* name);
    ~Vrvfpgasim_wb_mem_wrapper__M1000_Iz1();
    VL_UNCOPYABLE(Vrvfpgasim_wb_mem_wrapper__M1000_Iz1);

    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
