// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_mem_wrapper__I6_M10000.h"

VL_INLINE_OPT void Vrvfpgasim_axi_mem_wrapper__I6_M10000___sequent__TOP__rvfpgasim__ram__3(Vrvfpgasim_axi_mem_wrapper__I6_M10000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_axi_mem_wrapper__I6_M10000___sequent__TOP__rvfpgasim__ram__3\n"); );
    // Body
    vlSelf->__Vdly__axi2wb__DOT__wb_rdt_low = vlSelf->__PVT__axi2wb__DOT__wb_rdt_low;
    vlSelf->__Vdly__axi2wb__DOT__arbiter = vlSelf->__PVT__axi2wb__DOT__arbiter;
    vlSelf->__Vdly__axi2wb__DOT__cs = vlSelf->__PVT__axi2wb__DOT__cs;
    vlSelf->__Vdly__wb_ack = vlSelf->__PVT__wb_ack;
    vlSelf->__Vdly__wb_ack = (((IData)(vlSelf->__PVT__wb_cyc) 
                               & (IData)(vlSelf->__PVT__wb_stb)) 
                              & (~ (IData)(vlSelf->__PVT__wb_ack)));
    if (vlSymsp->TOP.rst) {
        vlSelf->__Vdly__wb_ack = 0U;
        vlSelf->__PVT__axi2wb__DOT__ar_req = 0U;
        vlSelf->__PVT__o_rid = 0U;
        vlSelf->__PVT__axi2wb__DOT__aw_req = 0U;
        vlSelf->__PVT__axi2wb__DOT__w_req = 0U;
        vlSelf->__PVT__o_bid = 0U;
    } else {
        if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
              >> 0x1eU) & (IData)(vlSelf->__PVT__o_arready))) {
            vlSelf->__PVT__o_rid = (0x3fU & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                              << 3U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
                                                >> 0x1dU)));
            vlSelf->__PVT__axi2wb__DOT__ar_req = 1U;
        } else if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
                     >> 0x1dU) & (IData)(vlSelf->__PVT__o_rvalid))) {
            vlSelf->__PVT__axi2wb__DOT__ar_req = 0U;
        }
        if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
              >> 0xfU) & (IData)(vlSelf->__PVT__o_awready))) {
            vlSelf->__PVT__o_bid = (0x3fU & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
                                             >> 0x14U));
            vlSelf->__PVT__axi2wb__DOT__aw_req = 1U;
        } else if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                     >> 3U) & (IData)(vlSelf->__PVT__o_bvalid))) {
            vlSelf->__PVT__axi2wb__DOT__aw_req = 0U;
        }
        if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
              >> 4U) & (IData)(vlSelf->__PVT__o_wready))) {
            vlSelf->__PVT__axi2wb__DOT__w_req = 1U;
        } else if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                     >> 3U) & (IData)(vlSelf->__PVT__o_bvalid))) {
            vlSelf->__PVT__axi2wb__DOT__w_req = 0U;
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_mem_wrapper__I6_M10000___sequent__TOP__rvfpgasim__ram__4(Vrvfpgasim_axi_mem_wrapper__I6_M10000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_axi_mem_wrapper__I6_M10000___sequent__TOP__rvfpgasim__ram__4\n"); );
    // Body
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__o_awready = 0U;
        vlSelf->__PVT__o_wready = 0U;
        vlSelf->__PVT__o_arready = 0U;
        vlSelf->__PVT__o_rvalid = 0U;
        vlSelf->__PVT__o_bvalid = 0U;
        vlSelf->__PVT__wb_adr = 0U;
        vlSelf->__PVT__wb_cyc = 0U;
        vlSelf->__PVT__wb_stb = 0U;
        vlSelf->__PVT__wb_sel = 0U;
        vlSelf->__PVT__wb_we = 0U;
        vlSelf->__Vdly__axi2wb__DOT__arbiter = 1U;
        vlSelf->__Vdly__axi2wb__DOT__wb_rdt_low = 0xdeadbeefU;
        vlSelf->__Vdly__axi2wb__DOT__cs = 0U;
    } else {
        vlSelf->__PVT__o_awready = 0U;
        vlSelf->__PVT__o_wready = 0U;
        vlSelf->__PVT__o_arready = 0U;
        if ((8U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
            vlSelf->__PVT__o_awready = 0U;
            vlSelf->__PVT__o_wready = 0U;
            vlSelf->__PVT__o_arready = 0U;
            vlSelf->__PVT__o_rvalid = 0U;
            vlSelf->__PVT__o_bvalid = 0U;
            vlSelf->__PVT__wb_adr = 0U;
            vlSelf->__PVT__wb_cyc = 0U;
            vlSelf->__PVT__wb_stb = 0U;
            vlSelf->__PVT__wb_sel = 0U;
            vlSelf->__PVT__wb_we = 0U;
            vlSelf->__Vdly__axi2wb__DOT__arbiter = 1U;
            vlSelf->__Vdly__axi2wb__DOT__cs = 0U;
        } else if ((4U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
            if ((2U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
                if ((1U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
                    vlSelf->__PVT__o_rvalid = 1U;
                    if ((0x20000000U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U])) {
                        vlSelf->__PVT__o_rvalid = 0U;
                        vlSelf->__Vdly__axi2wb__DOT__cs = 0U;
                    }
                } else {
                    vlSelf->__PVT__o_bvalid = 1U;
                    if ((8U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U])) {
                        vlSelf->__PVT__o_bvalid = 0U;
                        vlSelf->__Vdly__axi2wb__DOT__cs = 0U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
                if (vlSelf->__PVT__wb_ack) {
                    vlSelf->__PVT__wb_cyc = 0U;
                    vlSelf->__PVT__wb_stb = 0U;
                    vlSelf->__PVT__wb_sel = 0U;
                    vlSelf->__PVT__o_rvalid = 1U;
                    vlSelf->__PVT__o_rdata = (((QData)((IData)(vlSelf->__PVT__wb_rdt)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__axi2wb__DOT__wb_rdt_low)));
                    vlSelf->__Vdly__axi2wb__DOT__cs = 7U;
                }
            } else {
                vlSelf->__PVT__wb_adr = (1U | (IData)(vlSelf->__PVT__wb_adr));
                vlSelf->__PVT__wb_sel = 0xfU;
                vlSelf->__PVT__wb_cyc = 1U;
                vlSelf->__PVT__wb_stb = 1U;
                vlSelf->__Vdly__axi2wb__DOT__cs = 5U;
            }
        } else if ((2U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
            if ((1U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
                if (vlSelf->__PVT__wb_ack) {
                    vlSelf->__PVT__wb_cyc = 0U;
                    vlSelf->__PVT__wb_stb = 0U;
                    vlSelf->__PVT__wb_sel = 0U;
                    vlSelf->__Vdly__axi2wb__DOT__wb_rdt_low 
                        = vlSelf->__PVT__wb_rdt;
                    vlSelf->__Vdly__axi2wb__DOT__cs = 4U;
                }
            } else if (vlSelf->__PVT__wb_ack) {
                vlSelf->__PVT__wb_cyc = 0U;
                vlSelf->__PVT__wb_stb = 0U;
                vlSelf->__PVT__wb_sel = 0U;
                vlSelf->__PVT__wb_we = 0U;
                vlSelf->__PVT__o_bvalid = 1U;
                vlSelf->__Vdly__axi2wb__DOT__cs = 6U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
            if ((0x10U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U])) {
                vlSelf->__PVT__axi2wb__DOT__hi_32b_w 
                    = (0U == (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                      >> 7U)));
                vlSelf->__PVT__wb_adr = ((0x3ffeU & (IData)(vlSelf->__PVT__wb_adr)) 
                                         | (IData)(vlSelf->__PVT__axi2wb__DOT__hi_32b_w));
                vlSelf->__PVT__wb_cyc = 1U;
                vlSelf->__PVT__wb_stb = 1U;
                vlSelf->__PVT__wb_we = 1U;
                vlSelf->__PVT__o_wready = 1U;
                vlSelf->__Vdly__axi2wb__DOT__cs = 2U;
                if (vlSelf->__PVT__axi2wb__DOT__hi_32b_w) {
                    vlSelf->__PVT__wb_sel = (0xfU & 
                                             ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                               << 0x15U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                 >> 0xbU)));
                    vlSelf->__PVT__wb_dat = ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                                              << 0x11U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                >> 0xfU));
                } else {
                    vlSelf->__PVT__wb_sel = (0xfU & 
                                             ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                               << 0x19U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                 >> 7U)));
                    vlSelf->__PVT__wb_dat = ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                              << 0x11U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                >> 0xfU));
                }
            }
        } else {
            vlSelf->__Vdly__axi2wb__DOT__arbiter = 1U;
            if (((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                  >> 0xfU) & (IData)(vlSelf->__PVT__axi2wb__DOT__arbiter))) {
                vlSelf->__PVT__wb_adr = ((1U & (IData)(vlSelf->__PVT__wb_adr)) 
                                         | (0x3ffeU 
                                            & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
                                                << 0xaU) 
                                               | (0x3feU 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xcU] 
                                                     >> 0x16U)))));
                vlSelf->__PVT__o_awready = 1U;
                vlSelf->__Vdly__axi2wb__DOT__arbiter = 0U;
                if ((0x10U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U])) {
                    vlSelf->__PVT__axi2wb__DOT__hi_32b_w 
                        = (0U == (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                          >> 7U)));
                    vlSelf->__PVT__wb_adr = ((0x3ffeU 
                                              & (IData)(vlSelf->__PVT__wb_adr)) 
                                             | (IData)(vlSelf->__PVT__axi2wb__DOT__hi_32b_w));
                    vlSelf->__PVT__wb_cyc = 1U;
                    vlSelf->__PVT__wb_stb = 1U;
                    vlSelf->__PVT__wb_we = 1U;
                    vlSelf->__PVT__o_wready = 1U;
                    vlSelf->__Vdly__axi2wb__DOT__cs = 2U;
                    if (vlSelf->__PVT__axi2wb__DOT__hi_32b_w) {
                        vlSelf->__PVT__wb_sel = (0xfU 
                                                 & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                     << 0x15U) 
                                                    | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                       >> 0xbU)));
                        vlSelf->__PVT__wb_dat = ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
                                                  << 0x11U) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                    >> 0xfU));
                    } else {
                        vlSelf->__PVT__wb_sel = (0xfU 
                                                 & ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                     << 0x19U) 
                                                    | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                       >> 7U)));
                        vlSelf->__PVT__wb_dat = ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
                                                  << 0x11U) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
                                                    >> 0xfU));
                    }
                } else {
                    vlSelf->__Vdly__axi2wb__DOT__cs = 1U;
                }
            } else if ((0x40000000U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U])) {
                vlSelf->__PVT__wb_adr = (0x3fffU & 
                                         ((vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
                                           << 1U) | 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[7U] 
                                           >> 0x1fU)));
                vlSelf->__PVT__wb_sel = 0xfU;
                vlSelf->__PVT__wb_cyc = 1U;
                vlSelf->__PVT__wb_stb = 1U;
                vlSelf->__PVT__o_arready = 1U;
                vlSelf->__Vdly__axi2wb__DOT__cs = 3U;
            }
        }
    }
    vlSelf->__PVT__axi2wb__DOT__arbiter = vlSelf->__Vdly__axi2wb__DOT__arbiter;
    vlSelf->__PVT__axi2wb__DOT__wb_rdt_low = vlSelf->__Vdly__axi2wb__DOT__wb_rdt_low;
    vlSelf->__PVT__wb_ack = vlSelf->__Vdly__wb_ack;
    vlSelf->__PVT__axi2wb__DOT__cs = vlSelf->__Vdly__axi2wb__DOT__cs;
    vlSelf->__PVT__wb_rdt = ((1U & (IData)(vlSelf->__PVT__wb_adr))
                              ? (IData)((vlSymsp->TOP__rvfpgasim__ram__ram.__PVT__dout 
                                         >> 0x20U))
                              : (IData)(vlSymsp->TOP__rvfpgasim__ram__ram.__PVT__dout));
    vlSelf->__PVT__mem_we = ((0xf0U & (IData)(vlSelf->__PVT__mem_we)) 
                             | (((((IData)(vlSelf->__PVT__wb_cyc) 
                                   & (IData)(vlSelf->__PVT__wb_stb)) 
                                  & (IData)(vlSelf->__PVT__wb_we)) 
                                 & (~ (IData)(vlSelf->__PVT__wb_adr)))
                                 ? (IData)(vlSelf->__PVT__wb_sel)
                                 : 0U));
    vlSelf->__PVT__mem_we = ((0xfU & (IData)(vlSelf->__PVT__mem_we)) 
                             | ((((((IData)(vlSelf->__PVT__wb_cyc) 
                                    & (IData)(vlSelf->__PVT__wb_stb)) 
                                   & (IData)(vlSelf->__PVT__wb_we)) 
                                  & (IData)(vlSelf->__PVT__wb_adr))
                                  ? (IData)(vlSelf->__PVT__wb_sel)
                                  : 0U) << 4U));
}
