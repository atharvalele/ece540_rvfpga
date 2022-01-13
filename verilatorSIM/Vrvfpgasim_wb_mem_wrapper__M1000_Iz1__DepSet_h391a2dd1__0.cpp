// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_wb_mem_wrapper__M1000_Iz1.h"

VL_INLINE_OPT void Vrvfpgasim_wb_mem_wrapper__M1000_Iz1___settle__TOP__rvfpgasim__swervolf__bootrom__1(Vrvfpgasim_wb_mem_wrapper__M1000_Iz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrvfpgasim_wb_mem_wrapper__M1000_Iz1___settle__TOP__rvfpgasim__swervolf__bootrom__1\n"); );
    // Body
    vlSelf->__PVT__mem_we = ((0xf0U & (IData)(vlSelf->__PVT__mem_we)) 
                             | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                    >> 6U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)))
                                 ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)
                                 : 0U));
    vlSelf->__PVT__mem_we = ((0xfU & (IData)(vlSelf->__PVT__mem_we)) 
                             | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                     >> 6U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)
                                  : 0U) << 4U));
}

VL_INLINE_OPT void Vrvfpgasim_wb_mem_wrapper__M1000_Iz1___sequent__TOP__rvfpgasim__swervolf__bootrom__2(Vrvfpgasim_wb_mem_wrapper__M1000_Iz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrvfpgasim_wb_mem_wrapper__M1000_Iz1___sequent__TOP__rvfpgasim__swervolf__bootrom__2\n"); );
    // Body
    vlSelf->__PVT__o_wb_ack = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                 >> 6U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                               & (~ (IData)(vlSelf->__PVT__o_wb_ack)));
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)))) {
        vlSelf->__PVT__o_wb_ack = 0U;
    }
}
