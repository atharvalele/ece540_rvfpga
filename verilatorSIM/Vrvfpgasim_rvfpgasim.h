// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef VERILATED_VRVFPGASIM_RVFPGASIM_H_
#define VERILATED_VRVFPGASIM_RVFPGASIM_H_  // guard

#include "verilated.h"

class Vrvfpgasim__Syms;
class Vrvfpgasim_axi_mem_wrapper__I6_M10000;
class Vrvfpgasim_swervolf_core__Bz1;

VL_MODULE(Vrvfpgasim_rvfpgasim) {
  public:
    // CELLS
    Vrvfpgasim_axi_mem_wrapper__I6_M10000* ram;
    Vrvfpgasim_swervolf_core__Bz1* swervolf;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(i_jtag_tck,0,0);
    VL_IN8(i_jtag_trst_n,0,0);
    CData/*0:0*/ __Vcellinp__swervolf__rstn;
    VL_IN8(rst,0,0);
    VL_IN8(i_jtag_tms,0,0);
    VL_IN8(i_jtag_tdi,0,0);
    VL_OUT8(o_jtag_tdo,0,0);
    VL_OUT8(o_uart_tx,0,0);
    VL_OUT8(o_gpio,0,0);
    CData/*0:0*/ __PVT__dmi_reg_en;
    CData/*0:0*/ __PVT__dmi_hard_reset;
    CData/*0:0*/ __PVT__dmi_wrapper__DOT__dmireset;
    CData/*3:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state;
    CData/*3:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate;
    CData/*4:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir;
    CData/*1:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en;
    CData/*0:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en;
    CData/*2:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden;
    CData/*2:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren;
    VlWide<32>/*1023:0*/ __PVT__ram_init_file;
    VlWide<32>/*1023:0*/ __PVT__rom_init_file;
    IData/*31:0*/ io_data__en0;
    QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
    QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr;
    QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;

    // INTERNAL VARIABLES
    Vrvfpgasim__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vrvfpgasim_rvfpgasim(const char* name);
    ~Vrvfpgasim_rvfpgasim();
    VL_UNCOPYABLE(Vrvfpgasim_rvfpgasim);

    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
