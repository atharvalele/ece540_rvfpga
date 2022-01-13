// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim_axi_mem_wrapper__I6_M10000.h"

VL_ATTR_COLD void Vrvfpgasim_axi_mem_wrapper__I6_M10000___initial__TOP__rvfpgasim__ram__1(Vrvfpgasim_axi_mem_wrapper__I6_M10000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_axi_mem_wrapper__I6_M10000___initial__TOP__rvfpgasim__ram__1\n"); );
    // Body
    vlSelf->__PVT__axi2wb__DOT__aw_req = 0U;
    vlSelf->__PVT__axi2wb__DOT__w_req = 0U;
    vlSelf->__PVT__axi2wb__DOT__ar_req = 0U;
    vlSelf->__PVT__wb_we = 0U;
    vlSelf->__PVT__wb_stb = 0U;
    vlSelf->__PVT__wb_cyc = 0U;
    vlSelf->__PVT__o_rvalid = 0U;
    vlSelf->__PVT__o_bvalid = 0U;
    vlSelf->__PVT__axi2wb__DOT__cs = 0U;
}

VL_ATTR_COLD void Vrvfpgasim_axi_mem_wrapper__I6_M10000___ctor_var_reset(Vrvfpgasim_axi_mem_wrapper__I6_M10000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_axi_mem_wrapper__I6_M10000___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_awid = VL_RAND_RESET_I(6);
    vlSelf->__PVT__i_awaddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_awlen = VL_RAND_RESET_I(8);
    vlSelf->__PVT__i_awsize = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_awburst = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_awvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__o_awready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_arid = VL_RAND_RESET_I(6);
    vlSelf->__PVT__i_araddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_arlen = VL_RAND_RESET_I(8);
    vlSelf->__PVT__i_arsize = VL_RAND_RESET_I(3);
    vlSelf->__PVT__i_arburst = VL_RAND_RESET_I(2);
    vlSelf->__PVT__i_arvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__o_arready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_wdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__i_wstrb = VL_RAND_RESET_I(8);
    vlSelf->__PVT__i_wlast = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_wvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__o_wready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__o_bid = VL_RAND_RESET_I(6);
    vlSelf->__PVT__o_bresp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__o_bvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_bready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__o_rid = VL_RAND_RESET_I(6);
    vlSelf->__PVT__o_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__o_rresp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__o_rlast = VL_RAND_RESET_I(1);
    vlSelf->__PVT__o_rvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_rready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_adr = VL_RAND_RESET_I(14);
    vlSelf->__PVT__wb_dat = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wb_sel = VL_RAND_RESET_I(4);
    vlSelf->__PVT__wb_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_cyc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_stb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_rdt = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_we = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi2wb__DOT__hi_32b_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi2wb__DOT__arbiter = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi2wb__DOT__wb_rdt_low = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi2wb__DOT__cs = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi2wb__DOT__aw_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi2wb__DOT__w_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi2wb__DOT__ar_req = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__wb_ack = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__axi2wb__DOT__arbiter = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__axi2wb__DOT__wb_rdt_low = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__axi2wb__DOT__cs = VL_RAND_RESET_I(4);
}
