// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_mux__pi4.h"

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__5(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__5\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hf3272c14__0;
    VlWide<3>/*95:0*/ __Vtemp_he40b2463__0;
    VlWide<3>/*95:0*/ __Vtemp_h3cb00e6a__0;
    VlWide<3>/*95:0*/ __Vtemp_hc02c6a77__0;
    VlWide<3>/*95:0*/ __Vtemp_ha39245ee__0;
    VlWide<3>/*95:0*/ __Vtemp_h52a866d2__0;
    VlWide<3>/*95:0*/ __Vtemp_hda76176f__0;
    VlWide<3>/*95:0*/ __Vtemp_hae336303__0;
    VlWide<3>/*95:0*/ __Vtemp_h8e1af1e3__0;
    VlWide<3>/*95:0*/ __Vtemp_hc482adae__0;
    VlWide<3>/*95:0*/ __Vtemp_ha2d278ed__0;
    VlWide<3>/*95:0*/ __Vtemp_h914b2b99__0;
    // Body
    vlSelf->__PVT__gen_mux__DOT__slv_r_readies = ((6U 
                                                   & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_r_readies)) 
                                                  | (1U 
                                                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0U]));
    vlSelf->__PVT__gen_mux__DOT__slv_b_readies = ((6U 
                                                   & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_b_readies)) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[2U] 
                                                        >> 4U)));
    vlSelf->__PVT__gen_mux__DOT__slv_r_readies = ((5U 
                                                   & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_r_readies)) 
                                                  | (2U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U] 
                                                        >> 0x18U)));
    vlSelf->__PVT__gen_mux__DOT__slv_b_readies = ((5U 
                                                   & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_b_readies)) 
                                                  | (2U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[8U] 
                                                        >> 0x1cU)));
    vlSelf->__PVT__gen_mux__DOT__slv_r_readies = ((3U 
                                                   & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_r_readies)) 
                                                  | (4U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
                                                        >> 0x10U)));
    vlSelf->__PVT__gen_mux__DOT__slv_b_readies = ((3U 
                                                   & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_b_readies)) 
                                                  | (4U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
                                                        >> 0x14U)));
    __Vtemp_hf3272c14__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[1U] 
                                 << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0U] 
                                              >> 2U));
    __Vtemp_hf3272c14__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[2U] 
                                 << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[1U] 
                                              >> 2U));
    __Vtemp_hf3272c14__0[2U] = (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[2U] 
                                      >> 2U));
    VL_EXTEND_WW(68,66, __Vtemp_he40b2463__0, __Vtemp_hf3272c14__0);
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp_he40b2463__0[0U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp_he40b2463__0[1U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp_he40b2463__0[2U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[2U] 
              << 0x1eU));
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[2U] 
                 >> 2U));
    __Vtemp_h3cb00e6a__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[7U] 
                                 << 5U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U] 
                                           >> 0x1bU));
    __Vtemp_h3cb00e6a__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[8U] 
                                 << 5U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[7U] 
                                           >> 0x1bU));
    __Vtemp_h3cb00e6a__0[2U] = (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[8U] 
                                      >> 0x1bU));
    VL_EXTEND_WW(68,66, __Vtemp_hc02c6a77__0, __Vtemp_h3cb00e6a__0);
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp_hc02c6a77__0[0U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp_hc02c6a77__0[1U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp_hc02c6a77__0[2U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[8U] 
                             << 5U)));
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (4U | (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[8U] 
                               >> 0x1bU))));
    __Vtemp_ha39245ee__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xeU] 
                                 << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
                                             >> 0x14U));
    __Vtemp_ha39245ee__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
                                 << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xeU] 
                                             >> 0x14U));
    __Vtemp_ha39245ee__0[2U] = (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
                                      >> 0x14U));
    VL_EXTEND_WW(68,66, __Vtemp_h52a866d2__0, __Vtemp_ha39245ee__0);
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp_h52a866d2__0[0U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp_h52a866d2__0[1U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp_h52a866d2__0[2U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
                             << 0xcU)));
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (8U | (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
                               >> 0x14U))));
    vlSelf->__PVT__gen_mux__DOT__slv_w_valids = ((4U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
                                                     >> 0x15U)) 
                                                 | ((2U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[8U] 
                                                        >> 0x1dU)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[2U] 
                                                          >> 5U))));
    vlSelf->__PVT__gen_mux__DOT__slv_w_chans[0U] = 
        ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[3U] 
          << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[2U] 
                       >> 6U));
    vlSelf->__PVT__gen_mux__DOT__slv_w_chans[1U] = 
        ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[4U] 
          << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[3U] 
                       >> 6U));
    vlSelf->__PVT__gen_mux__DOT__slv_w_chans[2U] = 
        (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[9U] 
           << 0xbU) | (0x400U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[8U] 
                                 >> 0x15U))) | (0x3ffU 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[4U] 
                                                   >> 6U)));
    vlSelf->__PVT__gen_mux__DOT__slv_w_chans[3U] = 
        ((0x3ffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[9U] 
                    >> 0x15U)) | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xaU] 
                                   << 0xbU) | (0x400U 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[9U] 
                                                  >> 0x15U))));
    vlSelf->__PVT__gen_mux__DOT__slv_w_chans[4U] = 
        (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x10U] 
           << 0x1cU) | (0xff00000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
                                      >> 4U))) | ((0x3ffU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xaU] 
                                                      >> 0x15U)) 
                                                  | (0xffc00U 
                                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xbU] 
                                                         << 0xbU) 
                                                        | (0x400U 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xaU] 
                                                              >> 0x15U))))));
    vlSelf->__PVT__gen_mux__DOT__slv_w_chans[5U] = 
        ((0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x10U] 
                      >> 4U)) | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x11U] 
                                  << 0x1cU) | (0xff00000U 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x10U] 
                                                  >> 4U))));
    vlSelf->__PVT__gen_mux__DOT__slv_w_chans[6U] = 
        ((0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x11U] 
                      >> 4U)) | (0x3ff00000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x12U] 
                                                 << 0x1cU) 
                                                | (0xff00000U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x11U] 
                                                      >> 4U)))));
    __Vtemp_hda76176f__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[5U] 
                                 << 0xfU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[4U] 
                                             >> 0x11U));
    __Vtemp_hda76176f__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U] 
                                 << 0xfU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[5U] 
                                             >> 0x11U));
    __Vtemp_hda76176f__0[2U] = (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U] 
                                         >> 0x11U));
    VL_EXTEND_WW(74,72, __Vtemp_hae336303__0, __Vtemp_hda76176f__0);
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp_hae336303__0[0U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp_hae336303__0[1U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp_hae336303__0[2U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xf0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U] 
                       >> 0x11U)));
    __Vtemp_h8e1af1e3__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xcU] 
                                 << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xbU] 
                                              >> 0xaU));
    __Vtemp_h8e1af1e3__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
                                 << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xcU] 
                                              >> 0xaU));
    __Vtemp_h8e1af1e3__0[2U] = (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
                                         >> 0xaU));
    VL_EXTEND_WW(74,72, __Vtemp_hc482adae__0, __Vtemp_h8e1af1e3__0);
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp_hc482adae__0[0U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp_hc482adae__0[1U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp_hc482adae__0[2U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x100U | (0xf0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
                                           >> 0xaU)))));
    __Vtemp_ha2d278ed__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x13U] 
                                 << 0x1dU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x12U] 
                                              >> 3U));
    __Vtemp_ha2d278ed__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
                                 << 0x1dU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x13U] 
                                              >> 3U));
    __Vtemp_ha2d278ed__0[2U] = (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
                                         >> 3U));
    VL_EXTEND_WW(74,72, __Vtemp_h914b2b99__0, __Vtemp_ha2d278ed__0);
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp_h914b2b99__0[0U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp_h914b2b99__0[1U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp_h914b2b99__0[2U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x200U | (0xf0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
                                           >> 3U)))));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_valids = ((4U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
                                                      >> 0x11U)) 
                                                  | ((2U 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U] 
                                                         >> 0x19U)) 
                                                     | (1U 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0U] 
                                                           >> 1U))));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_valids = ((4U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x12U]) 
                                                  | ((2U 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xbU] 
                                                         >> 8U)) 
                                                     | (1U 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[4U] 
                                                           >> 0x10U))));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[0U] = 
        vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[1U] = 
        vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[2U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
          << 4U) | vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]);
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[3U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
          >> 0x1cU) | (vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                       << 4U));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[4U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
          << 8U) | ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                     >> 0x1cU) | (vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                  << 4U)));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[5U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
          >> 0x18U) | (vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                       << 8U));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[6U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
          >> 0x18U) | (vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                       << 8U));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[0U] = 
        vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U];
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[1U] = 
        vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U];
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[2U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
          << 0xaU) | vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]);
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[3U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
          >> 0x16U) | (vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                       << 0xaU));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[4U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
          << 0x14U) | ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                        >> 0x16U) | (vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                     << 0xaU)));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[5U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
          >> 0xcU) | (vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                      << 0x14U));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[6U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
          >> 0xcU) | (vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                      << 0x14U));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__7(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__7\n"); );
    // Body
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n;
        if (vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n;
        if ((1U & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock)))) {
            vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q 
                = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n;
        }
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
            = (1U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready))));
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n;
        vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q 
            = ((IData)(vlSelf->__PVT__gen_mux__DOT__load_aw_lock)
                ? (IData)(vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_d)
                : (IData)(vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q));
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
        if (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
            = (1U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__aw_ready))));
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d;
        if (vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
            vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0xfU & vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
        }
        if (vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
            vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0x3ffU & vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
        }
    } else {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__lock_aw_valid_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o 
        = ((0xbU >= (0xfU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q) 
                             << 1U))) ? (3U & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q) 
                                               >> (0xfU 
                                                   & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q) 
                                                      << 1U))))
            : 0U);
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->__PVT__gen_mux__DOT__ar_ready = (1U & (
                                                   (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                   | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    vlSelf->__PVT__gen_mux__DOT__mst_aw_ready = (1U 
                                                 & ((~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                    | (~ (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (IData)(vlSelf->__PVT__gen_mux__DOT__ar_ready));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__11(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__11\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__slv_r_valids = ((0x400U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U])
                                                  ? 
                                                 (7U 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                         >> 8U))))
                                                  : 0U);
    vlSelf->__PVT__gen_mux__DOT__slv_b_valids = ((0x100000U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U])
                                                  ? 
                                                 (7U 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                         >> 0x12U))))
                                                  : 0U);
    vlSelf->__PVT__slv_resps_o[0U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[0U];
    vlSelf->__PVT__slv_resps_o[1U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[1U];
    vlSelf->__PVT__slv_resps_o[2U] = ((0xfffffe00U 
                                       & vlSelf->__PVT__slv_resps_o[2U]) 
                                      | ((0x100U & 
                                          ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_r_valids) 
                                           << 8U)) 
                                         | (0xffU & 
                                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U])));
    vlSelf->__PVT__slv_resps_o[2U] = ((0xfffffU & vlSelf->__PVT__slv_resps_o[2U]) 
                                      | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
                                         << 0x14U));
    vlSelf->__PVT__slv_resps_o[3U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
                                       >> 0xcU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
                                                   << 0x14U));
    vlSelf->__PVT__slv_resps_o[4U] = ((0xe0000000U 
                                       & vlSelf->__PVT__slv_resps_o[4U]) 
                                      | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
                                          >> 0xcU) 
                                         | ((0x10000000U 
                                             & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_r_valids) 
                                                << 0x1bU)) 
                                            | (0xff00000U 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                  << 0x14U)))));
    vlSelf->__PVT__slv_resps_o[5U] = ((0xffU & vlSelf->__PVT__slv_resps_o[5U]) 
                                      | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
                                         << 8U));
    vlSelf->__PVT__slv_resps_o[6U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[0U] 
                                       >> 0x18U) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
                                       << 8U));
    vlSelf->__PVT__slv_resps_o[7U] = ((0xffe0000U & 
                                       vlSelf->__PVT__slv_resps_o[7U]) 
                                      | (0xfffffffU 
                                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[1U] 
                                             >> 0x18U) 
                                            | ((0x10000U 
                                                & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_r_valids) 
                                                   << 0xeU)) 
                                               | (0xff00U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                     << 8U))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__13(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__13\n"); );
    // Body
    vlSelf->__PVT__mst_req_o[0U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     << 2U) | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                << 1U) 
                                               | ((2U 
                                                   >= 
                                                   (3U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                       >> 8U))) 
                                                  & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_r_readies) 
                                                     >> 
                                                     (3U 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                         >> 8U))))));
    vlSelf->__PVT__mst_req_o[1U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     >> 0x1eU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                    ? 
                                                   vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                    : 
                                                   vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                  << 2U));
    vlSelf->__PVT__mst_req_o[2U] = ((vlSelf->__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                     << 8U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_valid) 
                                                << 7U) 
                                               | ((((2U 
                                                     >= 
                                                     (3U 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                         >> 0x12U))) 
                                                    & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_b_readies) 
                                                       >> 
                                                       (3U 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                           >> 0x12U)))) 
                                                   << 6U) 
                                                  | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                        ? 
                                                       vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                        : 
                                                       vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                      >> 0x1eU) 
                                                     | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                          ? 
                                                         vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                          : 
                                                         vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                        << 2U)))));
    vlSelf->__PVT__mst_req_o[3U] = ((vlSelf->__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                     >> 0x18U) | (vlSelf->__PVT__gen_mux__DOT__mst_w_chan[1U] 
                                                  << 8U));
    vlSelf->__PVT__mst_req_o[4U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     << 0x13U) | ((
                                                   ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                    | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                   << 0x12U) 
                                                  | ((vlSelf->__PVT__gen_mux__DOT__mst_w_chan[1U] 
                                                      >> 0x18U) 
                                                     | (vlSelf->__PVT__gen_mux__DOT__mst_w_chan[2U] 
                                                        << 8U))));
    vlSelf->__PVT__mst_req_o[5U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     >> 0xdU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                   : 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                 << 0x13U));
    vlSelf->__PVT__mst_req_o[6U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                     >> 0xdU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                   : 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                 << 0x13U));
    vlSelf->__PVT__gen_mux__DOT__w_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__gen_mux__DOT__w_fifo_pop = (
                                                   (((2U 
                                                      >= (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                     & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_valids) 
                                                        >> (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                       >> 0x15U)) 
                                                   & (vlSelf->__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                                      >> 1U));
    }
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((5U == (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop)) 
          & (6U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__15(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__15\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                 >> 0x17U)));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
              >> 0x17U));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                 >> 0x16U)));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
              >> 0x16U));
    vlSelf->__PVT__gen_mux__DOT__slv_w_readies = 0U;
    if ((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelf->__Vlvbound_hc8ba31da__0 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                 >> 0x15U));
        if ((2U >= (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) {
            vlSelf->__PVT__gen_mux__DOT__slv_w_readies 
                = (((~ ((IData)(1U) << (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                    & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies)) 
                   | (7U & ((IData)(vlSelf->__Vlvbound_hc8ba31da__0) 
                            << (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))));
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__17(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__17\n"); );
    // Body
    vlSelf->__PVT__slv_resps_o[2U] = ((0xfff801ffU 
                                       & vlSelf->__PVT__slv_resps_o[2U]) 
                                      | (0xfffffe00U 
                                         & ((0x40000U 
                                             & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_ar_readies) 
                                                << 0x12U)) 
                                            | ((0x20000U 
                                                & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies) 
                                                   << 0x11U)) 
                                               | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_b_valids) 
                                                      << 0x10U)) 
                                                  | (0xfe00U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                        >> 2U)))))));
    vlSelf->__PVT__slv_resps_o[4U] = ((0x1fffffffU 
                                       & vlSelf->__PVT__slv_resps_o[4U]) 
                                      | (0xe0000000U 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                            << 0x12U)));
    vlSelf->__PVT__slv_resps_o[5U] = ((0xffffff80U 
                                       & vlSelf->__PVT__slv_resps_o[5U]) 
                                      | (0x1fffffffU 
                                         & ((0x40U 
                                             & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_ar_readies) 
                                                << 5U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies) 
                                                   << 4U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_b_valids) 
                                                      << 3U)) 
                                                  | (0xfU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                        >> 0xeU)))))));
    vlSelf->__PVT__slv_resps_o[7U] = ((0x801ffffU & 
                                       vlSelf->__PVT__slv_resps_o[7U]) 
                                      | (0xffe0000U 
                                         & ((0x4000000U 
                                             & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_ar_readies) 
                                                << 0x18U)) 
                                            | ((0x2000000U 
                                                & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies) 
                                                   << 0x17U)) 
                                               | ((0x1000000U 
                                                   & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_b_valids) 
                                                      << 0x16U)) 
                                                  | (0xfe0000U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                        << 6U)))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__6(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__6\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hf28f409c__0;
    VlWide<3>/*95:0*/ __Vtemp_hcd4245d6__0;
    VlWide<3>/*95:0*/ __Vtemp_h3c5d49d4__0;
    VlWide<3>/*95:0*/ __Vtemp_h7012869f__0;
    VlWide<3>/*95:0*/ __Vtemp_h90440ade__0;
    VlWide<3>/*95:0*/ __Vtemp_h78253875__0;
    VlWide<3>/*95:0*/ __Vtemp_heec7b260__0;
    VlWide<3>/*95:0*/ __Vtemp_h9c2f8d1e__0;
    VlWide<3>/*95:0*/ __Vtemp_h1197ee70__0;
    VlWide<3>/*95:0*/ __Vtemp_h77925fad__0;
    VlWide<3>/*95:0*/ __Vtemp_h64694c61__0;
    VlWide<3>/*95:0*/ __Vtemp_h79ba49da__0;
    // Body
    vlSelf->__PVT__gen_mux__DOT__slv_r_readies = ((6U 
                                                   & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_r_readies)) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
                                                        >> 0xbU)));
    vlSelf->__PVT__gen_mux__DOT__slv_b_readies = ((6U 
                                                   & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_b_readies)) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
                                                        >> 0xfU)));
    vlSelf->__PVT__gen_mux__DOT__slv_r_readies = ((5U 
                                                   & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_r_readies)) 
                                                  | (2U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU] 
                                                        >> 3U)));
    vlSelf->__PVT__gen_mux__DOT__slv_b_readies = ((5U 
                                                   & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_b_readies)) 
                                                  | (2U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1dU] 
                                                        >> 7U)));
    vlSelf->__PVT__gen_mux__DOT__slv_r_readies = ((3U 
                                                   & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_r_readies)) 
                                                  | (4U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
                                                        >> 0x1bU)));
    vlSelf->__PVT__gen_mux__DOT__slv_b_readies = ((3U 
                                                   & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_b_readies)) 
                                                  | (4U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x24U] 
                                                        << 1U)));
    __Vtemp_hf28f409c__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x15U] 
                                 << 0x13U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
                                              >> 0xdU));
    __Vtemp_hf28f409c__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
                                 << 0x13U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x15U] 
                                              >> 0xdU));
    __Vtemp_hf28f409c__0[2U] = (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
                                      >> 0xdU));
    VL_EXTEND_WW(68,66, __Vtemp_hcd4245d6__0, __Vtemp_hf28f409c__0);
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp_hcd4245d6__0[0U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp_hcd4245d6__0[1U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp_hcd4245d6__0[2U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
                             << 0x13U)));
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
                 >> 0xdU));
    __Vtemp_h3c5d49d4__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1cU] 
                                 << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU] 
                                              >> 6U));
    __Vtemp_h3c5d49d4__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1dU] 
                                 << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1cU] 
                                              >> 6U));
    __Vtemp_h3c5d49d4__0[2U] = (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1dU] 
                                      >> 6U));
    VL_EXTEND_WW(68,66, __Vtemp_h7012869f__0, __Vtemp_h3c5d49d4__0);
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp_h7012869f__0[0U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp_h7012869f__0[1U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp_h7012869f__0[2U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1dU] 
                             << 0x1aU)));
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (4U | (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1dU] 
                               >> 6U))));
    __Vtemp_h90440ade__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x22U] 
                                 << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
                                           >> 0x1fU));
    __Vtemp_h90440ade__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x23U] 
                                 << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x22U] 
                                           >> 0x1fU));
    __Vtemp_h90440ade__0[2U] = (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x24U] 
                                       << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x23U] 
                                                 >> 0x1fU)));
    VL_EXTEND_WW(68,66, __Vtemp_h78253875__0, __Vtemp_h90440ade__0);
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp_h78253875__0[0U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp_h78253875__0[1U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp_h78253875__0[2U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x23U] 
                             << 1U)));
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0xfU & (8U | (3U & ((0x3ffffffeU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x24U] 
                                               << 1U)) 
                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x23U] 
                                  >> 0x1fU)))));
    vlSelf->__PVT__gen_mux__DOT__slv_w_valids = ((4U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x24U]) 
                                                 | ((2U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1dU] 
                                                        >> 8U)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
                                                          >> 0x10U))));
    vlSelf->__PVT__gen_mux__DOT__slv_w_chans[0U] = 
        ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x17U] 
          << 0xfU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
                      >> 0x11U));
    vlSelf->__PVT__gen_mux__DOT__slv_w_chans[1U] = 
        ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x18U] 
          << 0xfU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x17U] 
                      >> 0x11U));
    vlSelf->__PVT__gen_mux__DOT__slv_w_chans[2U] = 
        ((0xfffffc00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1dU]) 
         | (0x3ffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x18U] 
                      >> 0x11U)));
    vlSelf->__PVT__gen_mux__DOT__slv_w_chans[3U] = 
        ((0x3ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1eU]) 
         | (0xfffffc00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1eU]));
    vlSelf->__PVT__gen_mux__DOT__slv_w_chans[4U] = 
        ((0xfff00000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x24U] 
                         << 0x11U)) | ((0x3ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1fU]) 
                                       | (0xffc00U 
                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1fU])));
    vlSelf->__PVT__gen_mux__DOT__slv_w_chans[5U] = 
        (((0xe0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x25U] 
                       << 0x11U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x24U] 
                                     >> 0xfU)) | (0xfff00000U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x25U] 
                                                     << 0x11U)));
    vlSelf->__PVT__gen_mux__DOT__slv_w_chans[6U] = 
        (((0xe0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x26U] 
                       << 0x11U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x25U] 
                                     >> 0xfU)) | (0x3ff00000U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x26U] 
                                                     << 0x11U)));
    __Vtemp_heec7b260__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x19U] 
                                 << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x18U] 
                                           >> 0x1cU));
    __Vtemp_heec7b260__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1aU] 
                                 << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x19U] 
                                           >> 0x1cU));
    __Vtemp_heec7b260__0[2U] = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU] 
                                          << 4U) | 
                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1aU] 
                                          >> 0x1cU)));
    VL_EXTEND_WW(74,72, __Vtemp_h9c2f8d1e__0, __Vtemp_heec7b260__0);
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp_h9c2f8d1e__0[0U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp_h9c2f8d1e__0[1U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp_h9c2f8d1e__0[2U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xf0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU] 
                       << 4U)));
    __Vtemp_h1197ee70__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x20U] 
                                 << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1fU] 
                                             >> 0x15U));
    __Vtemp_h1197ee70__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
                                 << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x20U] 
                                             >> 0x15U));
    __Vtemp_h1197ee70__0[2U] = (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
                                         >> 0x15U));
    VL_EXTEND_WW(74,72, __Vtemp_h77925fad__0, __Vtemp_h1197ee70__0);
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp_h77925fad__0[0U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp_h77925fad__0[1U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp_h77925fad__0[2U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x100U | (0xf0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
                                           >> 0x15U)))));
    __Vtemp_h64694c61__0[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x27U] 
                                 << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x26U] 
                                              >> 0xeU));
    __Vtemp_h64694c61__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x28U] 
                                 << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x27U] 
                                              >> 0xeU));
    __Vtemp_h64694c61__0[2U] = (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x28U] 
                                         >> 0xeU));
    VL_EXTEND_WW(74,72, __Vtemp_h79ba49da__0, __Vtemp_h64694c61__0);
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp_h79ba49da__0[0U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp_h79ba49da__0[1U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp_h79ba49da__0[2U];
    vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0x3f0U & (0x200U | (0xf0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x28U] 
                                           >> 0xeU)))));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_valids = ((4U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
                                                      >> 0x1cU)) 
                                                  | ((2U 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU] 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
                                                           >> 0xcU))));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_valids = ((4U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x26U] 
                                                      >> 0xbU)) 
                                                  | ((2U 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1fU] 
                                                         >> 0x13U)) 
                                                     | (1U 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x18U] 
                                                           >> 0x1bU))));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[0U] = 
        vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[1U] = 
        vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[2U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
          << 4U) | vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]);
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[3U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
          >> 0x1cU) | (vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                       << 4U));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[4U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
          << 8U) | ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                     >> 0x1cU) | (vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                  << 4U)));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[5U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
          >> 0x18U) | (vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                       << 8U));
    vlSelf->__PVT__gen_mux__DOT__slv_ar_chans[6U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
          >> 0x18U) | (vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                       << 8U));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[0U] = 
        vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U];
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[1U] = 
        vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U];
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[2U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
          << 0xaU) | vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]);
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[3U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
          >> 0x16U) | (vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                       << 0xaU));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[4U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
          << 0x14U) | ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                        >> 0x16U) | (vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                     << 0xaU)));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[5U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
          >> 0xcU) | (vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                      << 0x14U));
    vlSelf->__PVT__gen_mux__DOT__slv_aw_chans[6U] = 
        ((vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
          >> 0xcU) | (vlSelf->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                      << 0x14U));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__12(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__12\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__slv_r_valids = ((4U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U])
                                                  ? 
                                                 (7U 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U])))
                                                  : 0U);
    vlSelf->__PVT__gen_mux__DOT__slv_b_valids = ((0x1000U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U])
                                                  ? 
                                                 (7U 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                         >> 0xaU))))
                                                  : 0U);
    vlSelf->__PVT__slv_resps_o[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                       << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                                 >> 0x18U));
    vlSelf->__PVT__slv_resps_o[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                       << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                 >> 0x18U));
    vlSelf->__PVT__slv_resps_o[2U] = ((0xfffffe00U 
                                       & vlSelf->__PVT__slv_resps_o[2U]) 
                                      | ((0x100U & 
                                          ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_r_valids) 
                                           << 8U)) 
                                         | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                            >> 0x18U)));
    vlSelf->__PVT__slv_resps_o[2U] = ((0xfffffU & vlSelf->__PVT__slv_resps_o[2U]) 
                                      | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                          << 0x1cU) 
                                         | (0xff00000U 
                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                               >> 4U))));
    vlSelf->__PVT__slv_resps_o[3U] = ((0xfffffU & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                   >> 4U)) 
                                      | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                          << 0x1cU) 
                                         | (0xff00000U 
                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                               >> 4U))));
    vlSelf->__PVT__slv_resps_o[4U] = ((0xe0000000U 
                                       & vlSelf->__PVT__slv_resps_o[4U]) 
                                      | ((0xfffffU 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                             >> 4U)) 
                                         | ((0x10000000U 
                                             & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_r_valids) 
                                                << 0x1bU)) 
                                            | (0xff00000U 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                  >> 4U)))));
    vlSelf->__PVT__slv_resps_o[5U] = ((0xffU & vlSelf->__PVT__slv_resps_o[5U]) 
                                      | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                          << 0x10U) 
                                         | (0xff00U 
                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                               >> 0x10U))));
    vlSelf->__PVT__slv_resps_o[6U] = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                                >> 0x10U)) 
                                      | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                          << 0x10U) 
                                         | (0xff00U 
                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[3U] 
                                               >> 0x10U))));
    vlSelf->__PVT__slv_resps_o[7U] = ((0xffe0000U & 
                                       vlSelf->__PVT__slv_resps_o[7U]) 
                                      | (0xfffffffU 
                                         & ((0xffU 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                >> 0x10U)) 
                                            | ((0x10000U 
                                                & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_r_valids) 
                                                   << 0xeU)) 
                                               | (0xff00U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[4U] 
                                                     >> 0x10U))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__14(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__14\n"); );
    // Body
    vlSelf->__PVT__mst_req_o[0U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     << 2U) | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                 | (IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                << 1U) 
                                               | ((2U 
                                                   >= 
                                                   (3U 
                                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U])) 
                                                  & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_r_readies) 
                                                     >> 
                                                     (3U 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U])))));
    vlSelf->__PVT__mst_req_o[1U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     >> 0x1eU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                    ? 
                                                   vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                    : 
                                                   vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                  << 2U));
    vlSelf->__PVT__mst_req_o[2U] = ((vlSelf->__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                     << 8U) | (((IData)(vlSelf->__PVT__gen_mux__DOT__mst_w_valid) 
                                                << 7U) 
                                               | ((((2U 
                                                     >= 
                                                     (3U 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                         >> 0xaU))) 
                                                    & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_b_readies) 
                                                       >> 
                                                       (3U 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                           >> 0xaU)))) 
                                                   << 6U) 
                                                  | ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                        ? 
                                                       vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                        : 
                                                       vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                      >> 0x1eU) 
                                                     | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                          ? 
                                                         vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                          : 
                                                         vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                        << 2U)))));
    vlSelf->__PVT__mst_req_o[3U] = ((vlSelf->__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                     >> 0x18U) | (vlSelf->__PVT__gen_mux__DOT__mst_w_chan[1U] 
                                                  << 8U));
    vlSelf->__PVT__mst_req_o[4U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     << 0x13U) | ((
                                                   ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                                    | (IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                                   << 0x12U) 
                                                  | ((vlSelf->__PVT__gen_mux__DOT__mst_w_chan[1U] 
                                                      >> 0x18U) 
                                                     | (vlSelf->__PVT__gen_mux__DOT__mst_w_chan[2U] 
                                                        << 8U))));
    vlSelf->__PVT__mst_req_o[5U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                     >> 0xdU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                   : 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                 << 0x13U));
    vlSelf->__PVT__mst_req_o[6U] = ((((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                       ? vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                       : vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                     >> 0xdU) | (((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                   ? 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                   : 
                                                  vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                 << 0x13U));
    vlSelf->__PVT__gen_mux__DOT__w_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__gen_mux__DOT__w_fifo_pop = (
                                                   (((2U 
                                                      >= (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                     & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_valids) 
                                                        >> (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                       >> 0xdU)) 
                                                   & (vlSelf->__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                                      >> 1U));
    }
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((5U == (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
    vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
        = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_push) 
           & (IData)(vlSelf->__PVT__gen_mux__DOT__w_fifo_pop)) 
          & (6U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__16(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___sequent__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__16\n"); );
    // Body
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                 >> 0xfU)));
    vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
              >> 0xfU));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                 >> 0xeU)));
    vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
              >> 0xeU));
    vlSelf->__PVT__gen_mux__DOT__slv_w_readies = 0U;
    if ((0U != (IData)(vlSelf->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        vlSelf->__Vlvbound_hc8ba31da__0 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                 >> 0xdU));
        if ((2U >= (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) {
            vlSelf->__PVT__gen_mux__DOT__slv_w_readies 
                = (((~ ((IData)(1U) << (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                    & (IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies)) 
                   | (7U & ((IData)(vlSelf->__Vlvbound_hc8ba31da__0) 
                            << (IData)(vlSelf->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))));
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4___combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__18(Vrvfpgasim_axi_mux__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrvfpgasim_axi_mux__pi4___combo__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__18\n"); );
    // Body
    vlSelf->__PVT__slv_resps_o[2U] = ((0xfff801ffU 
                                       & vlSelf->__PVT__slv_resps_o[2U]) 
                                      | (0xfffffe00U 
                                         & ((0x40000U 
                                             & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_ar_readies) 
                                                << 0x12U)) 
                                            | ((0x20000U 
                                                & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies) 
                                                   << 0x11U)) 
                                               | ((0x10000U 
                                                   & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_b_valids) 
                                                      << 0x10U)) 
                                                  | (0xfe00U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                        << 6U)))))));
    vlSelf->__PVT__slv_resps_o[4U] = ((0x1fffffffU 
                                       & vlSelf->__PVT__slv_resps_o[4U]) 
                                      | (0xe0000000U 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                            << 0x1aU)));
    vlSelf->__PVT__slv_resps_o[5U] = ((0xffffff80U 
                                       & vlSelf->__PVT__slv_resps_o[5U]) 
                                      | (0x1fffffffU 
                                         & ((0x40U 
                                             & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_ar_readies) 
                                                << 5U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies) 
                                                   << 4U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_b_valids) 
                                                      << 3U)) 
                                                  | (0xfU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                        >> 6U)))))));
    vlSelf->__PVT__slv_resps_o[7U] = ((0x801ffffU & 
                                       vlSelf->__PVT__slv_resps_o[7U]) 
                                      | (0xffe0000U 
                                         & ((0x4000000U 
                                             & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_ar_readies) 
                                                << 0x18U)) 
                                            | ((0x2000000U 
                                                & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_w_readies) 
                                                   << 0x17U)) 
                                               | ((0x1000000U 
                                                   & ((IData)(vlSelf->__PVT__gen_mux__DOT__slv_b_valids) 
                                                      << 0x16U)) 
                                                  | (0xfe0000U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                                        << 0xeU)))))));
}
