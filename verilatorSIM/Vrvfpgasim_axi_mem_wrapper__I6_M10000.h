// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef VERILATED_VRVFPGASIM_AXI_MEM_WRAPPER__I6_M10000_H_
#define VERILATED_VRVFPGASIM_AXI_MEM_WRAPPER__I6_M10000_H_  // guard

#include "verilated.h"

class Vrvfpgasim__Syms;
class Vrvfpgasim_dpram64__S10000_MBz1;

VL_MODULE(Vrvfpgasim_axi_mem_wrapper__I6_M10000) {
  public:
    // CELLS
    Vrvfpgasim_dpram64__S10000_MBz1* ram;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__i_awid,5,0);
    VL_IN8(__PVT__i_awlen,7,0);
    VL_IN8(__PVT__i_awsize,2,0);
    VL_IN8(__PVT__i_awburst,1,0);
    VL_IN8(__PVT__i_awvalid,0,0);
    VL_OUT8(__PVT__o_awready,0,0);
    VL_IN8(__PVT__i_arid,5,0);
    VL_IN8(__PVT__i_arlen,7,0);
    VL_IN8(__PVT__i_arsize,2,0);
    VL_IN8(__PVT__i_arburst,1,0);
    VL_IN8(__PVT__i_arvalid,0,0);
    VL_OUT8(__PVT__o_arready,0,0);
    VL_IN8(__PVT__i_wstrb,7,0);
    VL_IN8(__PVT__i_wlast,0,0);
    VL_IN8(__PVT__i_wvalid,0,0);
    VL_OUT8(__PVT__o_wready,0,0);
    VL_OUT8(__PVT__o_bid,5,0);
    VL_OUT8(__PVT__o_bresp,1,0);
    VL_OUT8(__PVT__o_bvalid,0,0);
    VL_IN8(__PVT__i_bready,0,0);
    VL_OUT8(__PVT__o_rid,5,0);
    VL_OUT8(__PVT__o_rresp,1,0);
    VL_OUT8(__PVT__o_rlast,0,0);
    VL_OUT8(__PVT__o_rvalid,0,0);
    VL_IN8(__PVT__i_rready,0,0);
    CData/*3:0*/ __PVT__wb_sel;
    CData/*0:0*/ __PVT__wb_we;
    CData/*0:0*/ __PVT__wb_cyc;
    CData/*0:0*/ __PVT__wb_stb;
    CData/*0:0*/ __PVT__wb_ack;
    CData/*7:0*/ __PVT__mem_we;
    CData/*0:0*/ __PVT__axi2wb__DOT__hi_32b_w;
    CData/*0:0*/ __PVT__axi2wb__DOT__arbiter;
    CData/*3:0*/ __PVT__axi2wb__DOT__cs;
    CData/*0:0*/ __PVT__axi2wb__DOT__aw_req;
    CData/*0:0*/ __PVT__axi2wb__DOT__w_req;
    CData/*0:0*/ __PVT__axi2wb__DOT__ar_req;
    CData/*0:0*/ __Vdly__wb_ack;
    CData/*0:0*/ __Vdly__axi2wb__DOT__arbiter;
    CData/*3:0*/ __Vdly__axi2wb__DOT__cs;
    SData/*13:0*/ __PVT__wb_adr;
    VL_IN(__PVT__i_awaddr,31,0);
    VL_IN(__PVT__i_araddr,31,0);
    IData/*31:0*/ __PVT__wb_dat;
    IData/*31:0*/ __PVT__wb_rdt;
    IData/*31:0*/ __PVT__mem_addr;
    IData/*31:0*/ __PVT__axi2wb__DOT__wb_rdt_low;
    IData/*31:0*/ __Vdly__axi2wb__DOT__wb_rdt_low;
    VL_IN64(__PVT__i_wdata,63,0);
    VL_OUT64(__PVT__o_rdata,63,0);

    // INTERNAL VARIABLES
    Vrvfpgasim__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vrvfpgasim_axi_mem_wrapper__I6_M10000(const char* name);
    ~Vrvfpgasim_axi_mem_wrapper__I6_M10000();
    VL_UNCOPYABLE(Vrvfpgasim_axi_mem_wrapper__I6_M10000);

    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
