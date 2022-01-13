// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_swervolf_core__Bz1.h"

VL_ATTR_COLD void Vrvfpgasim_swervolf_core__Bz1___settle__TOP__rvfpgasim__swervolf__11(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___settle__TOP__rvfpgasim__swervolf__11\n"); );
    // Body
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U];
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U];
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U];
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[3U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U];
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[4U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U];
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[5U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U];
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
        = ((0xe0000000U & vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U]) 
           | vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U]);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
        = ((0xf0000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U]) 
           | vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U]);
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U] 
        = ((0x1fffffffU & vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[6U]) 
           | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
              << 0x1dU));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[7U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U] 
            >> 3U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U] 
                      << 0x1dU));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[8U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U] 
            >> 3U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                      << 0x1dU));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[9U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
            >> 3U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                      << 0x1dU));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xaU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
            >> 3U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                      << 0x1dU));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xbU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
            >> 3U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                      << 0x1dU));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xcU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
            >> 3U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
                      << 0x1dU));
    vlSelf->axi_intercon__DOT____Vcellout__axi_xbar__mst_ports_req_o[0xdU] 
        = (0x3ffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
                         >> 3U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
        = ((0xfffffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U]) 
           | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U] 
              << 0x1cU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U] 
            >> 4U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U] 
                      << 0x1cU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U] 
            >> 4U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U] 
                      << 0x1cU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U] 
            >> 4U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U] 
                      << 0x1cU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U] 
            >> 4U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U] 
                      << 0x1cU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U] 
            >> 4U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U] 
                      << 0x1cU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U] 
            >> 4U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
                      << 0x1cU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
        = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
            >> 4U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
                      << 0x1cU));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
        = (0xffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
                        >> 4U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[1U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[1U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[2U] 
        = (((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
             << 0x18U) | (0xf00000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                                       >> 8U))) | (0xfffffU 
                                                   & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[3U] 
        = ((0xfffffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
                        >> 8U)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
                                    << 0x18U) | (0xf00000U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[8U] 
                                                    >> 8U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[4U] 
        = ((0xfffffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
                        >> 8U)) | (0xfff00000U & ((
                                                   vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU] 
                                                   << 0x18U) 
                                                  | (0xf00000U 
                                                     & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[9U] 
                                                        >> 8U)))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U] 
        = ((0xffffff00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[5U]) 
           | (0xffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU] 
                       >> 8U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U] 
        = ((0xfffffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[7U]) 
           | (0xf0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U] 
                             << 8U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[8U] 
        = (((0xfffff00U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
                           << 8U)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[2U] 
                                      >> 0x18U)) | 
           (0xf0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
                           << 8U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[9U] 
        = (((0xfffff00U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
                           << 8U)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[3U] 
                                      >> 0x18U)) | 
           (0xf0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
                           << 8U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xaU] 
        = (((0xfff0000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU]) 
            | (0xffffU & ((0xfffff00U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
                                         << 8U)) | 
                          (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[4U] 
                           >> 0x18U)))) | (0xf0000000U 
                                           & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xaU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xbU] 
        = (((0xffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU]) 
            | (0xfff0000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU])) 
           | (0xf0000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xbU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xcU] 
        = (((0xffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU]) 
            | (0xfff0000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU])) 
           | (0xf0000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xcU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU] 
        = ((0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xdU]) 
           | (0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU] 
        = ((0xffffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0xfU]) 
           | (0xff000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
                             << 0x10U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x10U] 
        = (((0xff0000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
                          << 0x10U)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[5U] 
                                        >> 0x10U)) 
           | (0xff000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
                             << 0x10U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x11U] 
        = (((0xff0000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                          << 0x10U)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[6U] 
                                        >> 0x10U)) 
           | (0xff000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                             << 0x10U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x12U] 
        = (((0xfff000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
                          << 8U)) | (0xfffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[7U] 
                                               >> 0x10U))) 
           | (0xff000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
                             << 8U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x13U] 
        = ((((0xf00U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                        << 8U)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xdU] 
                                   >> 0x18U)) | (0xfff000U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                                                    << 8U))) 
           | (0xff000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                             << 8U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_resps[0x14U] 
        = ((((0xf00U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
                        << 8U)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                                   >> 0x18U)) | (0xfff000U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
                                                    << 8U))) 
           | (0xff000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_resps[0xfU] 
                             << 8U)));
}
