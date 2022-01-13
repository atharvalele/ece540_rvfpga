// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_axi_mem_wrapper__I6_M10000.h"

VL_ATTR_COLD void Vrvfpgasim_axi_mem_wrapper__I6_M10000___settle__TOP__rvfpgasim__ram__2(Vrvfpgasim_axi_mem_wrapper__I6_M10000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_axi_mem_wrapper__I6_M10000___settle__TOP__rvfpgasim__ram__2\n"); );
    // Body
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
