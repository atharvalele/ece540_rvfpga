// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim_swervolf_core__Bz1.h"

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__63(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__63\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
        = ((0xfffffffcU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg) 
           | ((2U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                     << 1U)) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq 
        = ((IData)((0x40000000U == (0xc0000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__65(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__65\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hd9ec6737__0;
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1 
        = ((IData)(((8U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
                    & (0x2080000U == (0xff080000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg)))) 
           & (~ (IData)((0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                      >> 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_read_pend 
        = ((7U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
           & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                 >> 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_arvalid 
        = ((((6U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
             & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                   >> 0x10U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid 
        = (((6U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
               >> 0x10U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid 
        = (((6U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
               >> 0x10U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_dma_bubble 
        = (((3U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (~ (IData)((0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                       >> 8U)))))) 
           | (4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)));
    vlSelf->__PVT__sb_arvalid = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_arvalid) 
                                 | (3U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)));
    vlSelf->__PVT__sb_awvalid = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid) 
                                 | ((4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                    | (5U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid))
            ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg)))
            : (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg))));
    vlSelf->__PVT__sb_wvalid = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid) 
                                | ((4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                   | (6U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))));
    if (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid)) 
          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_arvalid)) 
         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_read_pend))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size 
            = (7U & (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                           >> 0x14U)));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg;
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                     >> 0x11U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg;
    }
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
        = ((0xfff7ffffU & vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU]) 
           | ((IData)(vlSelf->__PVT__sb_arvalid) << 0x13U));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0x12U] 
        = ((0xfffffffbU & vlSelf->__PVT__axi_intercon__DOT__masters_req[0x12U]) 
           | ((IData)(vlSelf->__PVT__sb_awvalid) << 2U));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU] 
        = ((0xff3fffffU & vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU]) 
           | (0xffc00000U & (0x400000U | ((IData)(vlSelf->__PVT__sb_wvalid) 
                                          << 0x17U))));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0x12U] 
        = (0x5e00000U | ((0xfU & vlSelf->__PVT__axi_intercon__DOT__masters_req[0x12U]) 
                         | (((IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                       << 0xbU) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                             << 0x1cU) | (0x3c00U & 
                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                           >> 0x12U)))));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0x13U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                              << 0xbU) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                    >> 4U)) | ((0xffffff0U & ((IData)(
                                                      (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                                        << 0xbU) 
                                                       | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                                              >> 4U)) 
                               | ((IData)(((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                             << 0xbU) 
                                            | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))) 
                                           >> 0x20U)) 
                                  << 0x1cU)));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0x14U] 
        = (0x7ffU & ((0xfU & ((IData)(((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                         << 0xbU) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))) 
                                       >> 0x20U)) >> 4U)) 
                     | (0xffffff0U & ((IData)(((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                                 << 0xbU) 
                                                | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))) 
                                               >> 0x20U)) 
                                      >> 4U))));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
        = ((0x1fffffU & vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU]) 
           | (0x1e00000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                            >> 7U)));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0xeU] 
        = (0x20U | ((0x1fff80U & ((IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                            << 0xbU) 
                                           | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                                  << 7U)) | (0xffe00000U 
                                             & ((IData)(
                                                        (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                                          << 0xbU) 
                                                         | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                                                << 7U))));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU] 
        = ((0xffc00000U & vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU]) 
           | ((((IData)((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                          << 0xbU) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                >> 0x19U) | (0x1fff80U & ((IData)((
                                                   (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                                     << 0xbU) 
                                                    | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))) 
                                                   >> 0x20U)) 
                                          << 7U))) 
              | (0xffe00000U & ((IData)(((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                           << 0xbU) 
                                          | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))) 
                                         >> 0x20U)) 
                                << 7U))));
    __Vtemp_hd9ec6737__0[0U] = (1U | (((IData)(((((
                                                   (- (QData)((IData)(
                                                                      (0U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                   & (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                       << 0x38U) 
                                                      | (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                          << 0x30U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                             << 0x28U) 
                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                << 0x20U) 
                                                               | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                   << 0x18U) 
                                                                  | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                      << 0x10U) 
                                                                     | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                         << 8U) 
                                                                        | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                                                  | ((- (QData)((IData)(
                                                                        (1U 
                                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                     & (((QData)((IData)(
                                                                         (0xffffU 
                                                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                         << 0x30U) 
                                                        | (((QData)((IData)(
                                                                            (0xffffU 
                                                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                            << 0x20U) 
                                                           | (((QData)((IData)(
                                                                               (0xffffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                               << 0x10U) 
                                                              | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))))))) 
                                                 | ((- (QData)((IData)(
                                                                       (2U 
                                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                    & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))) 
                                                | ((- (QData)((IData)(
                                                                      (3U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))) 
                                       << 9U) | (0x1feU 
                                                 & ((((((- (IData)(
                                                                   (0U 
                                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                                                        & ((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr))) 
                                                       | ((- (IData)(
                                                                     (1U 
                                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                                                          & ((IData)(3U) 
                                                             << 
                                                             (6U 
                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)))) 
                                                      | ((- (IData)(
                                                                    (2U 
                                                                     == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                                                         & ((IData)(0xfU) 
                                                            << 
                                                            (4U 
                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)))) 
                                                     | (- (IData)(
                                                                  (3U 
                                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                    << 1U))));
    __Vtemp_hd9ec6737__0[1U] = (((IData)((((((- (QData)((IData)(
                                                                (0U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                             & (((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                 << 0x38U) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                       << 0x28U) 
                                                      | (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                          << 0x20U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                             << 0x18U) 
                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                << 0x10U) 
                                                               | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                   << 8U) 
                                                                  | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                                            | ((- (QData)((IData)(
                                                                  (1U 
                                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                               & (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                      << 0x20U) 
                                                     | (((QData)((IData)(
                                                                         (0xffffU 
                                                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))))))) 
                                           | ((- (QData)((IData)(
                                                                 (2U 
                                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                              & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))) 
                                          | ((- (QData)((IData)(
                                                                (3U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))) 
                                 >> 0x17U) | ((IData)(
                                                      ((((((- (QData)((IData)(
                                                                              (0U 
                                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                           & (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                  << 0x30U) 
                                                                 | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                     << 0x28U) 
                                                                    | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                        << 0x20U) 
                                                                       | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                           << 0x18U) 
                                                                          | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                              << 0x10U) 
                                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                                << 8U) 
                                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                                                          | ((- (QData)((IData)(
                                                                                (1U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                             & (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                 << 0x30U) 
                                                                | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                    << 0x20U) 
                                                                   | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                       << 0x10U) 
                                                                      | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))))))) 
                                                         | ((- (QData)((IData)(
                                                                               (2U 
                                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                            & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))) 
                                                        | ((- (QData)((IData)(
                                                                              (3U 
                                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                                       >> 0x20U)) 
                                              << 9U));
    __Vtemp_hd9ec6737__0[2U] = ((IData)(((((((- (QData)((IData)(
                                                                (0U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                             & (((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                 << 0x38U) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                       << 0x28U) 
                                                      | (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                          << 0x20U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                             << 0x18U) 
                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                << 0x10U) 
                                                               | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                   << 8U) 
                                                                  | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                                            | ((- (QData)((IData)(
                                                                  (1U 
                                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                               & (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                      << 0x20U) 
                                                     | (((QData)((IData)(
                                                                         (0xffffU 
                                                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))))))) 
                                           | ((- (QData)((IData)(
                                                                 (2U 
                                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                              & (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))) 
                                          | ((- (QData)((IData)(
                                                                (3U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                         >> 0x20U)) 
                                >> 0x17U);
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU] 
        = ((0x1ffffffU & vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU]) 
           | (__Vtemp_hd9ec6737__0[0U] << 0x19U));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0x10U] 
        = ((__Vtemp_hd9ec6737__0[0U] >> 7U) | (__Vtemp_hd9ec6737__0[1U] 
                                               << 0x19U));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0x11U] 
        = ((__Vtemp_hd9ec6737__0[1U] >> 7U) | (__Vtemp_hd9ec6737__0[2U] 
                                               << 0x19U));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0x12U] 
        = ((0xfffffffcU & vlSelf->__PVT__axi_intercon__DOT__masters_req[0x12U]) 
           | (__Vtemp_hd9ec6737__0[2U] >> 7U));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__67(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__67\n"); );
    // Body
    if (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__lsu_freeze_dc3_q) {
        vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_lo 
            = (0x7fffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_lo_q);
        vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_hi 
            = (0x7fffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hi_q);
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_loff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_lo_q;
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_lo 
            = (0x7fffffffffULL & ((0x137U >= (0x1ffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                   ? (((QData)((IData)(
                                                       vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))))) 
                                         | ((QData)((IData)(
                                                            vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                            (0xfU 
                                                             & (((IData)(0x27U) 
                                                                 * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)) 
                                                                >> 5U))])) 
                                            >> (0x1fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))))
                                   : 0ULL));
        vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_hi 
            = (0x7fffffffffULL & ((0x137U >= (0x1ffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                   ? (((QData)((IData)(
                                                       vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                         | ((QData)((IData)(
                                                            vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                            (0xfU 
                                                             & (((IData)(0x27U) 
                                                                 * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                >> 5U))])) 
                                            >> (0x1fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))))
                                   : 0ULL));
        vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_loff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_lo;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_dccm_c1_dc3_clken) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_lo_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (IData)(vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_lo);
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_ecc_lo_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (0x7fU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_lo 
                                >> 0x20U)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_lo_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_ecc_lo_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3));
    }
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hiff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__lsu_freeze_dc3_q)
            ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hi_q
            : vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_hi);
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_dccm_c1_dc3_clken) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_hi_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (IData)(vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_hi);
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_ecc_hi_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (0x7fU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_hi 
                                >> 0x20U)));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_hi_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_ecc_hi_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3));
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__68(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__68\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0U] 
        = (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0U] 
           & (IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[1U] 
        = (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[1U] 
           & (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                >> 1U))))))) 
               << 2U) | (IData)(((0x3ffffffffULL & 
                                  (- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                 >> 0x20U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[2U] 
        = (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U] 
           & (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                >> 2U))))))) 
               << 4U) | (((IData)((0x3ffffffffULL & 
                                   (- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                          >> 1U))))))) 
                          >> 0x1eU) | ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 1U)))))) 
                                                >> 0x20U)) 
                                       << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[3U] 
        = (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U] 
           & (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                >> 3U))))))) 
               << 6U) | (((IData)((0x3ffffffffULL & 
                                   (- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                          >> 2U))))))) 
                          >> 0x1cU) | ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 2U)))))) 
                                                >> 0x20U)) 
                                       << 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U] 
        = ((0xffffff00U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U]) 
           | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
              & (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                   >> 3U))))))) 
                  >> 0x1aU) | ((IData)(((0x3ffffffffULL 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                  >> 3U)))))) 
                                        >> 0x20U)) 
                               << 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U] 
        = ((0xffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U]) 
           | (0xffffff00U & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
                             & ((IData)((0x3ffffffffULL 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                                << 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[5U] 
        = ((0xffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
                     & ((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                        >> 0x18U))) | (0xffffff00U 
                                       & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
                                          & (((IData)(
                                                      (0x3ffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                              << 0xaU) 
                                             | ((IData)(
                                                        ((0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                         >> 0x20U)) 
                                                << 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[6U] 
        = ((0xffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
                     & ((0xffU & ((IData)((0x3ffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                    >> 1U))))))) 
                                  >> 0x16U)) | ((IData)(
                                                        ((0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                         >> 0x20U)) 
                                                >> 0x18U)))) 
           | (0xffffff00U & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
                             & (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                   >> 2U))))))) 
                                 << 0xcU) | ((0x300U 
                                              & ((IData)(
                                                         (0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                                 >> 0x16U)) 
                                             | ((IData)(
                                                        ((0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U)))))) 
                                                         >> 0x20U)) 
                                                << 0xaU))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[7U] 
        = ((0xffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
                     & (((IData)((0x3ffffffffULL & 
                                  (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                         >> 2U))))))) 
                         >> 0x14U) | ((IData)(((0x3ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                         >> 1U)))))) 
                                               >> 0x20U)) 
                                      >> 0x16U)))) 
           | (0xffffff00U & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
                             & (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                   >> 3U))))))) 
                                 << 0xeU) | ((0xf00U 
                                              & ((IData)(
                                                         (0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                                 >> 0x14U)) 
                                             | ((IData)(
                                                        ((0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U)))))) 
                                                         >> 0x20U)) 
                                                << 0xcU))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
        = ((0xffff0000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U]) 
           | ((0xffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
                        & (((IData)((0x3ffffffffULL 
                                     & (- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                              >> 3U))))))) 
                            >> 0x12U) | ((IData)(((0x3ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                            >> 2U)))))) 
                                                  >> 0x20U)) 
                                         >> 0x14U)))) 
              | (0xffffff00U & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
                                & ((0x3f00U & ((IData)(
                                                       (0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U))))))) 
                                               >> 0x12U)) 
                                   | ((IData)(((0x3ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                         >> 3U)))))) 
                                               >> 0x20U)) 
                                      << 0xeU))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
        = ((0xffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U]) 
           | (0xffff0000U & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
                             & ((IData)((0x3ffffffffULL 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                                << 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
        = ((0xffffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[9U] 
                       & ((IData)((0x3ffffffffULL & 
                                   (- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                          >> 0x10U))) | (0xffff0000U 
                                         & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[9U] 
                                            & (((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                                << 0x12U) 
                                               | ((IData)(
                                                          ((0x3ffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xaU] 
        = ((0xffffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xaU] 
                       & ((0xffffU & ((IData)((0x3ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                        >> 1U))))))) 
                                      >> 0xeU)) | ((IData)(
                                                           ((0x3ffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                            >> 0x20U)) 
                                                   >> 0x10U)))) 
           | (0xffff0000U & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xaU] 
                             & (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                   >> 2U))))))) 
                                 << 0x14U) | ((0x30000U 
                                               & ((IData)(
                                                          (0x3ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                                  >> 0xeU)) 
                                              | ((IData)(
                                                         ((0x3ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U)))))) 
                                                          >> 0x20U)) 
                                                 << 0x12U))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xbU] 
        = ((0xffffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xbU] 
                       & (((IData)((0x3ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                             >> 2U))))))) 
                           >> 0xcU) | ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 1U)))))) 
                                                >> 0x20U)) 
                                       >> 0xeU)))) 
           | (0xffff0000U & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xbU] 
                             & (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                   >> 3U))))))) 
                                 << 0x16U) | ((0xf0000U 
                                               & ((IData)(
                                                          (0x3ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                                  >> 0xcU)) 
                                              | ((IData)(
                                                         ((0x3ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U)))))) 
                                                          >> 0x20U)) 
                                                 << 0x14U))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
        = ((0xff000000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU]) 
           | ((0xffffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU] 
                          & (((IData)((0x3ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                >> 3U))))))) 
                              >> 0xaU) | ((IData)((
                                                   (0x3ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                             >> 2U)))))) 
                                                   >> 0x20U)) 
                                          >> 0xcU)))) 
              | (0xffff0000U & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU] 
                                & ((0x3f0000U & ((IData)(
                                                         (0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U))))))) 
                                                 >> 0xaU)) 
                                   | ((IData)(((0x3ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                         >> 3U)))))) 
                                               >> 0x20U)) 
                                      << 0x16U))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
        = ((0xffffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU]) 
           | (0xff000000U & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU] 
                             & ((IData)((0x3ffffffffULL 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                                << 0x18U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
        = ((0xffffffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xdU] 
                         & ((IData)((0x3ffffffffULL 
                                     & (- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                            >> 8U))) | (0xff000000U 
                                        & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xdU] 
                                           & (((IData)(
                                                       (0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                               << 0x1aU) 
                                              | ((IData)(
                                                         ((0x3ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                          >> 0x20U)) 
                                                 << 0x18U)))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
        = ((0xffffffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xeU] 
                         & ((0xffffffU & ((IData)((0x3ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                            >> 1U))))))) 
                                          >> 6U)) | 
                            ((IData)(((0x3ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                      >> 0x20U)) >> 8U)))) 
           | (0xff000000U & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xeU] 
                             & (((IData)((0x3ffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                   >> 2U))))))) 
                                 << 0x1cU) | ((0x3000000U 
                                               & ((IData)(
                                                          (0x3ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                                  >> 6U)) 
                                              | ((IData)(
                                                         ((0x3ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U)))))) 
                                                          >> 0x20U)) 
                                                 << 0x1aU))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
        = ((0xffffffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xfU] 
                         & (((IData)((0x3ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                               >> 2U))))))) 
                             >> 4U) | ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 1U)))))) 
                                                >> 0x20U)) 
                                       >> 6U)))) | 
           (0xff000000U & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xfU] 
                           & (((IData)((0x3ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                 >> 3U))))))) 
                               << 0x1eU) | ((0xf000000U 
                                             & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                                >> 4U)) 
                                            | ((IData)(
                                                       ((0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U)))))) 
                                                        >> 0x20U)) 
                                               << 0x1cU))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0x10U] 
        = ((0xffffffU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0x10U] 
                         & (((IData)((0x3ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                               >> 3U))))))) 
                             >> 2U) | ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 2U)))))) 
                                                >> 0x20U)) 
                                       >> 4U)))) | 
           (0xff000000U & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0x10U] 
                           & ((0x3f000000U & ((IData)(
                                                      (0x3ffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U))))))) 
                                              >> 2U)) 
                              | ((IData)(((0x3ffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                    >> 3U)))))) 
                                          >> 0x20U)) 
                                 << 0x1eU)))));
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U];
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U];
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U];
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[3U] 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U];
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0U];
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[1U];
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[2U];
        vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[3U] 
            = vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[3U];
    }
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U] 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
              ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
              : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[5U] 
                  << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U] 
                               >> 8U))) << 8U) | (0xffU 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                      ? 
                                                     vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U]
                                                      : 
                                                     vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U])));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[5U] 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
              ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
              : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[5U] 
                  << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U] 
                               >> 8U))) >> 0x18U) | 
           (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
              ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
              : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[6U] 
                  << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[5U] 
                               >> 8U))) << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[6U] 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
              ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
              : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[6U] 
                  << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[5U] 
                               >> 8U))) >> 0x18U) | 
           (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
              ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
              : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[7U] 
                  << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[6U] 
                               >> 8U))) << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[7U] 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
              ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
              : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[7U] 
                  << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[6U] 
                               >> 8U))) >> 0x18U) | 
           (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
              ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
              : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
                  << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[7U] 
                               >> 8U))) << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
        = ((0xffff0000U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U]) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                 ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                 : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
                     << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[7U] 
                                  >> 8U))) >> 0x18U) 
              | (0xff00U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                              ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U]
                              : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
                                  << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
                                               >> 8U))) 
                            << 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
        = ((0xffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U]) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
                    << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
                                 >> 0x10U))) << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
              ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
              : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
                  << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
                               >> 0x10U))) >> 0x10U) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xaU] 
                    << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
                                 >> 0x10U))) << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xaU] 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
              ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
              : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xaU] 
                  << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
                               >> 0x10U))) >> 0x10U) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xbU] 
                    << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xaU] 
                                 >> 0x10U))) << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xbU] 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
              ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
              : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xbU] 
                  << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xaU] 
                               >> 0x10U))) >> 0x10U) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
                    << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xbU] 
                                 >> 0x10U))) << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
              ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
              : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
                  << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xbU] 
                               >> 0x10U))) >> 0x10U) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                 ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                 : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                     << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
                               >> 0x18U))) << 0x18U) 
              | (0xff0000U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U]
                                : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                                    << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
                                                 >> 0x10U))) 
                              << 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
        = ((0xffffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                         ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                         : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                             << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
                                       >> 0x18U))) 
                       >> 8U)) | ((0xff0000U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                  ? 
                                                 vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                                                  : 
                                                 ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                                                   << 8U) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
                                                     >> 0x18U))) 
                                                >> 8U)) 
                                  | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                       ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                                       : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
                                           << 8U) | 
                                          (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                                           >> 0x18U))) 
                                     << 0x18U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xeU] 
        = ((0xffffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                         ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                         : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
                             << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                                       >> 0x18U))) 
                       >> 8U)) | ((0xff0000U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                  ? 
                                                 vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                                                  : 
                                                 ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
                                                   << 8U) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                                                     >> 0x18U))) 
                                                >> 8U)) 
                                  | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                       ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                                       : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
                                           << 8U) | 
                                          (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
                                           >> 0x18U))) 
                                     << 0x18U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xfU] 
        = ((0xffffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                         ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                         : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
                             << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
                                       >> 0x18U))) 
                       >> 8U)) | ((0xff0000U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                  ? 
                                                 vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                                                  : 
                                                 ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
                                                   << 8U) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
                                                     >> 0x18U))) 
                                                >> 8U)) 
                                  | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                       ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                                       : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0x10U] 
                                           << 8U) | 
                                          (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
                                           >> 0x18U))) 
                                     << 0x18U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0x10U] 
        = ((0xffffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                         ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                         : ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0x10U] 
                             << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
                                       >> 0x18U))) 
                       >> 8U)) | ((0xff0000U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                  ? 
                                                 vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                                                  : 
                                                 ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0x10U] 
                                                   << 8U) 
                                                  | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
                                                     >> 0x18U))) 
                                                >> 8U)) 
                                  | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                       ? vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U]
                                       : (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0x10U] 
                                          >> 0x18U)) 
                                     << 0x18U)));
}

extern const VlUnpacked<CData/*2:0*/, 2048> Vrvfpgasim__ConstPool__TABLE_h3d93b9c2_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vrvfpgasim__ConstPool__TABLE_hba95ad68_0;

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__69(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__69\n"); );
    // Init
    SData/*10:0*/ __Vtableidx5;
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__ictag_debug_rd_data 
        = (0x1fffffU & (((((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff)))) 
                           & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U]) 
                          | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff) 
                                               >> 1U)))) 
                             & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
                                 << 0xbU) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U] 
                                             >> 0x15U)))) 
                         | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff) 
                                              >> 2U)))) 
                            & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
                                << 0x16U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
                                             >> 0xaU)))) 
                        | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff) 
                                             >> 3U)))) 
                           & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[2U] 
                               << 1U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
                                         >> 0x1fU)))));
    vlSelf->__PVT__swerv_eh1__DOT__ic_rd_hit = ((0xeU 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_rd_hit)) 
                                                | (((0xfffffU 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U]) 
                                                    == 
                                                    (0xfffffU 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                                        >> 8U))) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_tag_valid)));
    vlSelf->__PVT__swerv_eh1__DOT__ic_rd_hit = ((0xdU 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_rd_hit)) 
                                                | (0xfffffffeU 
                                                   & ((((0xfffffU 
                                                         & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
                                                             << 0xbU) 
                                                            | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U] 
                                                               >> 0x15U))) 
                                                        == 
                                                        (0xfffffU 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                                            >> 8U))) 
                                                       << 1U) 
                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_tag_valid))));
    vlSelf->__PVT__swerv_eh1__DOT__ic_rd_hit = ((0xbU 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_rd_hit)) 
                                                | (0xfffffffcU 
                                                   & ((((0xfffffU 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
                                                            >> 0xaU)) 
                                                        == 
                                                        (0xfffffU 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                                            >> 8U))) 
                                                       << 2U) 
                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_tag_valid))));
    vlSelf->__PVT__swerv_eh1__DOT__ic_rd_hit = ((7U 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_rd_hit)) 
                                                | (0xfffffff8U 
                                                   & ((((0xfffffU 
                                                         & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[2U] 
                                                             << 1U) 
                                                            | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
                                                               >> 0x1fU))) 
                                                        == 
                                                        (0xfffffU 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                                            >> 8U))) 
                                                       << 3U) 
                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_tag_valid))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_w_debug 
        = (7U & ((IData)((0x40001ULL == (0x40001ULL 
                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt)))
                  ? (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                             >> 0x17U)) : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new_q)
                                            ? (((((- (IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any)))) 
                                                  & (3U 
                                                     | (4U 
                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff)))) 
                                                 | ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
                                                                   >> 1U)))) 
                                                    & (1U 
                                                       | (4U 
                                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff))))) 
                                                | ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
                                                                  >> 2U)))) 
                                                   & (4U 
                                                      | (2U 
                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff))))) 
                                               | (2U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
                                                                    >> 3U)))) 
                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff))))
                                            : (((((- (IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_rd_hit)))) 
                                                  & (3U 
                                                     | (4U 
                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status)))) 
                                                 | ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_rd_hit) 
                                                                   >> 1U)))) 
                                                    & (1U 
                                                       | (4U 
                                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status))))) 
                                                | ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_rd_hit) 
                                                                  >> 2U)))) 
                                                   & (4U 
                                                      | (2U 
                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status))))) 
                                               | (2U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_rd_hit) 
                                                                    >> 3U)))) 
                                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status)))))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q 
        = (0xfU & ((1U & (IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__debug_rd_wy_ff__dout))
                    ? ((IData)(vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__debug_rd_wy_ff__dout) 
                       >> 1U) : (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_rd_hit)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2 
        = (((((~ (IData)((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_rd_hit)))) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2)) 
            & (0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2 
        = (((((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_rd_hit)) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2)) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
            & ((0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
               | (2U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr_ff)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half_valid_in 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_first_data) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half_valid) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half_valid_in 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_second_data) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half_valid) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_first_half_in 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_first_data)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_data_error)
            : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_first_half) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_second_half_in 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_second_data)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_data_error)
            : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_second_half) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_reset_data_beat_cnt 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)));
    __Vtableidx5 = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
                     << 0xaU) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff) 
                                  << 9U) | ((((((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_rd_hit)))) 
                                                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2)) 
                                              & (2U 
                                                 == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                             << 8U) 
                                            | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2) 
                                                << 7U) 
                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__flush_final_f2) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                            << 3U) 
                                                           | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate 
        = Vrvfpgasim__ConstPool__TABLE_h3d93b9c2_0[__Vtableidx5];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en 
        = Vrvfpgasim__ConstPool__TABLE_hba95ad68_0[__Vtableidx5];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2) 
             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2)) 
            | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f2) 
               & ((0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                  | (2U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2)) 
              & (~ ((1U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                    | (5U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_cumulative_err 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_data_error) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_data_comb_err_ff)) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_reset_data_beat_cnt)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_new_data_beat_count 
        = (7U & (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_data_beat_cnt))) 
                  & ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_data_beat_count))) 
                 | ((- (IData)((1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_data_beat_cnt)) 
                                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_reset_data_beat_cnt)))))) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_data_beat_count))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb 
        = (((((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
              & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))) 
             & (~ ((4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2)) 
           | ((0U != (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
              & (4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__faddrf2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xfffffffU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2))) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2))
                          ? (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                             >> 3U) : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__faddrf2_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2 
        = (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__imb_f2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_f1_f2_c1_clken)
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb)
                ? vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout
                : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1)
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_uncacheable_f1));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1 
        = ((((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2)) 
            & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__next_state 
        = ((2U & ((((((IData)((1U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout))) 
                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__reset_delayed))) 
                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle))) 
                   << 1U) | (0xfffffffeU & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout) 
                                              & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__reset_delayed)) 
                                                 << 1U)) 
                                             & ((~ 
                                                 (((((((2U 
                                                        == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))) 
                                                      | (0U 
                                                         == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall))) 
                                                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2))) 
                                                  & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__ran_ff__dout)))) 
                                                << 1U)) 
                                            & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle)) 
                                               << 1U))))) 
           | (1U & ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle)) 
                      & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb))) 
                         & (0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout)))) 
                     | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout) 
                        & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle)))) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__reset_delayed))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right3 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right 
        = (((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
            | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)))) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1) 
            & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2)))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2 
        = ((0xffffff80U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                             << 7U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                       << 1U)) & ((IData)(
                                                          (0U 
                                                           == 
                                                           (7U 
                                                            & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout))) 
                                                  << 7U))) 
           | ((0xffffffc0U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                << 6U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                          << 1U)) & 
                              ((IData)((0U == (6U & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout))) 
                               << 6U))) | ((0xffffffe0U 
                                            & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                 << 5U) 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                   << 1U)) 
                                               & (((IData)(
                                                           (0U 
                                                            == 
                                                            (5U 
                                                             & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout))) 
                                                   | (IData)(
                                                             (0U 
                                                              == 
                                                              (6U 
                                                               & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)))) 
                                                  << 5U))) 
                                           | ((0xfffffff0U 
                                               & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                    << 4U) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                      << 1U)) 
                                                  & ((~ 
                                                      (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                       >> 2U)) 
                                                     << 4U))) 
                                              | ((0xfffffff8U 
                                                  & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                       << 3U) 
                                                      & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                         << 1U)) 
                                                     & (((IData)(
                                                                 (0U 
                                                                  == 
                                                                  (3U 
                                                                   & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout))) 
                                                         | (~ 
                                                            (vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                             >> 2U))) 
                                                        << 3U))) 
                                                 | ((0xfffffffcU 
                                                     & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                          << 2U) 
                                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                            << 1U)) 
                                                        & ((IData)(
                                                                   (6U 
                                                                    != 
                                                                    (6U 
                                                                     & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout))) 
                                                           << 2U))) 
                                                    | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2)) 
                                                         & (IData)(
                                                                   (7U 
                                                                    != 
                                                                    (7U 
                                                                     & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)))) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual))))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__unc_miss_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_f1_f2_c1_clken)
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__faddmiss_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                    | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                       >> 1U)) | ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2)) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2))) 
                  | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
                     & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout)))))
            ? (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_path_final) 
                 | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
                    & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1)) 
               | ((- (IData)((1U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
                                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)))))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddmiss_ff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__faddrf1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__next_state)) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_crit_word))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns 
        = (0xfU & (((((((1U & (- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))))) 
                        | (2U & (- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))))) 
                       | (7U & ((- (IData)(((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right)))) 
                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                   >> 1U)))) | (3U 
                                                & ((- (IData)(
                                                              ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2)))) 
                                                   & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                      >> 2U)))) 
                     | (1U & ((- (IData)(((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right3)))) 
                              & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                 >> 3U)))) | (0xeU 
                                              & ((- (IData)(
                                                            ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left)))) 
                                                 & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                    << 1U)))) 
                   | ((- (IData)((1U & (((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right))) 
                                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2))) 
                                         & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left))) 
                                        & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right3)))))) 
                      & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr_in 
        = ((((1U & (- (IData)(((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2))))) 
             | (2U & (- (IData)(((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)))))) 
            | ((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2))))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr))) 
           & (~ (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1 
        = (1U & ((((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)) 
                   | (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)))) 
                  | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val) 
                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0 
        = (1U & ((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2 
        = (1U & (((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)) 
                  | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val) 
                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)))) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen 
        = ((((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)) 
            << 2U) | ((((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)) 
                       << 1U) | ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1)) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B)) 
             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B)) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B))
            ? ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1))) 
                 & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1))) 
                   & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout)) 
               | ((- (IData)((1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1)) 
                                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1)))))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1pc))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0) 
                                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0)) 
                               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0)) 
                              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B)) 
                             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B)) 
                            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B)) 
                           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B))
                           ? (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0))) 
                                 & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0))) 
                                   & vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout)) 
                               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0))) 
                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1pc)) 
                              | ((- (IData)((1U & (
                                                   ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0)) 
                                                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0))) 
                                                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0)))))) 
                                 & (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B))) 
                                       & ((IData)(1U) 
                                          + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)) 
                                      | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B))) 
                                         & ((IData)(2U) 
                                            + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))) 
                                     | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B))) 
                                        & ((IData)(3U) 
                                           + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))) 
                                    | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B))) 
                                       & ((IData)(4U) 
                                          + vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)))))
                           : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2)
            ? vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
            : vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val_in 
        = ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2))) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)) 
            | ((- (IData)((1U & (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2)) 
                                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1))) 
                                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0)))))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val))) 
           & (~ (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off_in 
        = (7U & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
                  ? vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
                  : ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off) 
                         + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off) 
                             + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off_in 
        = (7U & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
                  ? vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
                  : ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off) 
                         + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off) 
                             + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off_in 
        = (7U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
                  ? vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
                  : ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off) 
                         + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off) 
                             + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off)))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__70(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__70\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr)) 
           | (1U & VL_REDXOR_32((0x1fffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U]))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr)) 
           | (2U & ((VL_REDXOR_32((0xfffffU & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
                                                << 0xbU) 
                                               | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U] 
                                                  >> 0x15U)))) 
                     << 1U) ^ (0xfffffeU & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
                                            >> 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr)) 
           | (4U & (VL_REDXOR_32((0x7ffffc00U & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U])) 
                    << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr)) 
           | (8U & ((VL_REDXOR_32((0xfffffU & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[2U] 
                                                << 1U) 
                                               | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
                                                  >> 0x1fU)))) 
                     << 3U) ^ (0xfff8U & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[2U] 
                                          >> 0x10U)))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__74(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__74\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__core_dbg_cmd_done) 
            & (4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                 >> 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid 
        = (((3U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (~ ((IData)(((0U != (0x700U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg)) 
                           | (0U == (0xff020000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg)))) 
                  | ((2U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                             >> 0x18U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abmem_addr_core_local)))))) 
           & ((~ (((0U != ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid_en) 
                           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid))) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid)) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_slv_sent_q))) 
              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_dma_bubble)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules = 0U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[6U] 
                        << 0xbU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[5U] 
                                    >> 0x15U)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (1U | (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[6U] 
                           << 0xbU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[5U] 
                                       >> 0x15U))) 
         & (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[6U] 
                            << 0xbU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[5U] 
                                        >> 0x15U))))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (2U | (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_valid = 0U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[6U] 
                        << 0xbU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[5U] 
                                    >> 0x15U)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_valid = 1U;
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[6U] 
                           << 0xbU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[5U] 
                                       >> 0x15U))) 
         & (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[6U] 
                            << 0xbU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[5U] 
                                        >> 0x15U))))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_valid = 1U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error = 1U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[6U] 
                        << 0xbU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[5U] 
                                    >> 0x15U)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error = 0U;
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[6U] 
                           << 0xbU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[5U] 
                                       >> 0x15U))) 
         & (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[6U] 
                            << 0xbU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[5U] 
                                        >> 0x15U))))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error = 0U;
    }
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[6U] 
                        << 0xbU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[5U] 
                                    >> 0x15U)))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o = 1U;
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[6U] 
                           << 0xbU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[5U] 
                                       >> 0x15U))) 
         & (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[6U] 
                            << 0xbU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[5U] 
                                        >> 0x15U))))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules = 0U;
    if ((0x8000000U > vlSelf->__PVT__axi_intercon__DOT__masters_req[1U])) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (1U | (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
    }
    if (((0x80000000U <= vlSelf->__PVT__axi_intercon__DOT__masters_req[1U]) 
         & (0x80004000U > vlSelf->__PVT__axi_intercon__DOT__masters_req[1U]))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (2U | (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_valid = 0U;
    if ((0x8000000U > vlSelf->__PVT__axi_intercon__DOT__masters_req[1U])) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_valid = 1U;
    }
    if (((0x80000000U <= vlSelf->__PVT__axi_intercon__DOT__masters_req[1U]) 
         & (0x80004000U > vlSelf->__PVT__axi_intercon__DOT__masters_req[1U]))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_valid = 1U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error = 1U;
    if ((0x8000000U > vlSelf->__PVT__axi_intercon__DOT__masters_req[1U])) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error = 0U;
    }
    if (((0x80000000U <= vlSelf->__PVT__axi_intercon__DOT__masters_req[1U]) 
         & (0x80004000U > vlSelf->__PVT__axi_intercon__DOT__masters_req[1U]))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error = 0U;
    }
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    if ((0x8000000U > vlSelf->__PVT__axi_intercon__DOT__masters_req[1U])) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o = 1U;
    }
    if (((0x80000000U <= vlSelf->__PVT__axi_intercon__DOT__masters_req[1U]) 
         & (0x80004000U > vlSelf->__PVT__axi_intercon__DOT__masters_req[1U]))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules = 0U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
                        << 0x12U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                     >> 0xeU)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (1U | (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
                           << 0x12U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                        >> 0xeU))) 
         & (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
                            << 0x12U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                         >> 0xeU))))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (2U | (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_valid = 0U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
                        << 0x12U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                     >> 0xeU)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_valid = 1U;
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
                           << 0x12U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                        >> 0xeU))) 
         & (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
                            << 0x12U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                         >> 0xeU))))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_valid = 1U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error = 1U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
                        << 0x12U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                     >> 0xeU)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error = 0U;
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
                           << 0x12U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                        >> 0xeU))) 
         & (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
                            << 0x12U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                         >> 0xeU))))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error = 0U;
    }
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
                        << 0x12U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                     >> 0xeU)))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o = 1U;
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
                           << 0x12U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                        >> 0xeU))) 
         & (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xdU] 
                            << 0x12U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xcU] 
                                         >> 0xeU))))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules = 0U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[8U] 
                        << 7U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[7U] 
                                  >> 0x19U)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (1U | (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[8U] 
                           << 7U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[7U] 
                                     >> 0x19U))) & 
         (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[8U] 
                          << 7U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[7U] 
                                    >> 0x19U))))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (2U | (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_valid = 0U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[8U] 
                        << 7U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[7U] 
                                  >> 0x19U)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_valid = 1U;
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[8U] 
                           << 7U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[7U] 
                                     >> 0x19U))) & 
         (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[8U] 
                          << 7U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[7U] 
                                    >> 0x19U))))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_valid = 1U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error = 1U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[8U] 
                        << 7U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[7U] 
                                  >> 0x19U)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error = 0U;
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[8U] 
                           << 7U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[7U] 
                                     >> 0x19U))) & 
         (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[8U] 
                          << 7U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[7U] 
                                    >> 0x19U))))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error = 0U;
    }
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[8U] 
                        << 7U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[7U] 
                                  >> 0x19U)))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o = 1U;
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[8U] 
                           << 7U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[7U] 
                                     >> 0x19U))) & 
         (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[8U] 
                          << 7U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[7U] 
                                    >> 0x19U))))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules = 0U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0x14U] 
                        << 0x19U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                     >> 7U)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (1U | (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0x14U] 
                           << 0x19U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                        >> 7U))) & 
         (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0x14U] 
                          << 0x19U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                       >> 7U))))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (2U | (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_valid = 0U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0x14U] 
                        << 0x19U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                     >> 7U)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_valid = 1U;
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0x14U] 
                           << 0x19U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                        >> 7U))) & 
         (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0x14U] 
                          << 0x19U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                       >> 7U))))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_valid = 1U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error = 1U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0x14U] 
                        << 0x19U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                     >> 7U)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error = 0U;
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0x14U] 
                           << 0x19U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                        >> 7U))) & 
         (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0x14U] 
                          << 0x19U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                       >> 7U))))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error = 0U;
    }
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0x14U] 
                        << 0x19U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                     >> 7U)))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o = 1U;
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0x14U] 
                           << 0x19U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                        >> 7U))) & 
         (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0x14U] 
                          << 0x19U) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0x13U] 
                                       >> 7U))))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules = 0U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU] 
                        << 0xeU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                    >> 0x12U)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (1U | (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU] 
                           << 0xeU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                       >> 0x12U))) 
         & (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU] 
                            << 0xeU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                        >> 0x12U))))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (2U | (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_valid = 0U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU] 
                        << 0xeU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                    >> 0x12U)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_valid = 1U;
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU] 
                           << 0xeU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                       >> 0x12U))) 
         & (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU] 
                            << 0xeU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                        >> 0x12U))))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_valid = 1U;
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error = 1U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU] 
                        << 0xeU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                    >> 0x12U)))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error = 0U;
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU] 
                           << 0xeU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                       >> 0x12U))) 
         & (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU] 
                            << 0xeU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                        >> 0x12U))))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error = 0U;
    }
    vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    if ((0x8000000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU] 
                        << 0xeU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                    >> 0x12U)))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o = 1U;
    }
    if (((0x80000000U <= ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU] 
                           << 0xeU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                       >> 0x12U))) 
         & (0x80004000U > ((vlSelf->__PVT__axi_intercon__DOT__masters_req[0xfU] 
                            << 0xeU) | (vlSelf->__PVT__axi_intercon__DOT__masters_req[0xeU] 
                                        >> 0x12U))))) {
        vlSelf->axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                     >> 0x14U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in 
            = (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                     >> 0x10U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid 
            = (2U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in 
            = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid = 0U;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type) 
                     >> 1U))) & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                << 1U) | (0xfffffffeU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                                          << 1U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type)))) 
              & ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                 << 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                << 2U) | (0xfffffffcU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                                          << 2U) & 
                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type) 
                                          << 1U)))) 
              & ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                 << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                << 3U) | (0xfffffff8U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                                          << 3U) & 
                                         ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type) 
                                          << 2U)))) 
              & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                 << 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid) 
           & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                 >> 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid) 
           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
              >> 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i0_wen 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i0_wen)) 
           | ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval)) 
              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val) 
                 | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval)) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr_dff__DOT____Vcellinp__dffs__din 
        = (3U & ((0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))
                  : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_iccm_valid_dff__DOT____Vcellinp__dffs__din 
        = ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_iccm_valid_dff__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_iccm_valid_dff__DOT____Vcellinp__dffs__din 
        = ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
               >> 1U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_iccm_valid_dff__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_iccm_valid_dff__DOT____Vcellinp__dffs__din 
        = ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
               >> 2U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_iccm_valid_dff__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_iccm_valid_dff__DOT____Vcellinp__dffs__din 
        = ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
               >> 3U)) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_iccm_valid_dff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_valid_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                    | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_valid_dff__dout))));
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_tag;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_write_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_posted_write_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_tag_dff__dout;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                                 >> 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_valid_dff__dout))));
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_tag;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_write_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_posted_write_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_tag_dff__dout;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                                 >> 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_valid_dff__dout))));
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_tag;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_write_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_posted_write_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_tag_dff__dout;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                                 >> 3U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_valid_dff__dout))));
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write_in;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_tag;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_write_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_posted_write_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_tag_dff__dout;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                    | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)) 
                       & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
                    | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)) 
                        & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                       << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
                    | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)) 
                        & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                       << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
                    | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)) 
                        & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                       << 3U))));
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = ((0xf004U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                            >> 0x10U)) | (0x1e018U 
                                          == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                              >> 0xfU)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__dout;
    }
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = ((0xf004U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                            >> 0x10U)) | (0x1e018U 
                                          == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                              >> 0xfU)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_dccm_valid_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__dout;
    }
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = ((0xf004U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                            >> 0x10U)) | (0x1e018U 
                                          == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                              >> 0xfU)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_dccm_valid_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__dout;
    }
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = ((0xf004U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                            >> 0x10U)) | (0x1e018U 
                                          == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                              >> 0xfU)));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_dccm_valid_dff__dout;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__dout;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
            & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type))) 
           & ((~ ((0xf004U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                               >> 0x10U)) | (0x1e018U 
                                             == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                                 >> 0xfU)))) 
              | ((0x1e018U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                               >> 0xfU)) & (2U != (3U 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                      >> 0x14U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
           & (0xf004U != (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                          >> 0x10U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_gpr 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write) 
           & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_csr 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write) 
           & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibvalid 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i0_wen)) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i1_wen) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3) 
             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3)) 
            << 3U) | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2) 
                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2)) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2)) 
                       << 2U) | ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1) 
                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1)) 
                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1)) 
                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1)) 
                                  << 1U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0) 
                                             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0)) 
                                            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error))) 
           & (((((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size)) 
                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr 
                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                       & (3U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteen) 
                                       >> (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))))))) 
                | ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size)) 
                   & ((0U != (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr)) 
                      | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                         & (0xfU != (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteen) 
                                             >> (7U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr)))))))) 
               | ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size)) 
                  & ((0U != (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr)) 
                     | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                        & (0xffU != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteen)))))) 
              | (((0xf004U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                               >> 0x10U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel)) 
                 & (~ ((2U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size))) 
                       | (3U == (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size))))))));
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk2__DOT__cinst3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                          | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_cinst))));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__pc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
               | ((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U]) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__ib3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_instr));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk2__DOT__cinst3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst3));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__pc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc3;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__ib3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib3;
    }
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                           | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst1))) 
                          | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst2))));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
                | ((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1)) 
               | ((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc2));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[0U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[0U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[1U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U]) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[2U]));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst0));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[2U];
    }
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk2__DOT__cinst2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                           | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_cinst))) 
                          | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst3))));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__pc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
                | ((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata)) 
               | ((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc3));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[0U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[1U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U]) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[2U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__ib2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_instr)) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib3));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk2__DOT__cinst2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst2));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__pc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc2;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__ib2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib2;
    }
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                            | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_cinst))) 
                           | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst2))) 
                          | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst3))));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
                 | ((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata)) 
                | ((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc2)) 
               | ((- (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc3));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[0U]) 
                 | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[0U])) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[0U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[0U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[1U]) 
                 | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[1U])) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[1U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[1U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i0_brp[2U]) 
                 | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__i1_brp[2U])) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[2U])) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[2U]));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr) 
                 | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_instr)) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib2)) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib3));
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst1));
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1;
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1;
    }
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))
            ? ((((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid)
                     ? (((((- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                       & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type))))) 
                           & (0x6033U | (0xf8000U & 
                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                          << 0xfU)))) 
                          | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_gpr))) 
                             & (0x6033U | (0xf80U & 
                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                            << 7U))))) 
                         | ((- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                        & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type))))) 
                            & (0x2073U | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                          << 0x14U)))) 
                        | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_csr))) 
                           & (0x1073U | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                         << 0x14U))))
                     : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr)) 
                | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)) 
               | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib2))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                 & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
                | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type) 
                       >> 1U)) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                  >> 0x10U))) & (0U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))) 
              | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                 & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                  & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
                 << 1U) | (0x1fffeU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                                         << 1U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type)) 
                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                          >> 0xfU)))) 
               & ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                  << 1U)) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                              & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                             << 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                  & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
                 << 2U) | (0x3fffcU & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                                         << 2U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type) 
                                                   << 1U)) 
                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                          >> 0xeU)))) 
               & ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                  << 2U)) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                              & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                             << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                  & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
                 << 3U) | (0x7fff8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                                         << 3U) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type) 
                                                   << 2U)) 
                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                          >> 0xdU)))) 
               & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                  << 3U)) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                              & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                             << 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0xfcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
               & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
               ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
               : (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in)) 
                   << 1U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0xf3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
                : (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in)) 
                    << 1U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0xcfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
                : (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in)) 
                    << 1U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
                : (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in)) 
                    << 1U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                    | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                                 >> 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                                 >> 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                                 >> 3U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset))))) 
                 & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                     ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)
                     : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 1U))))) & 
                 ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 2U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 2U))))) & 
                 ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 4U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 3U))))) & 
                 ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 6U) : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en)) 
           | (((0U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
              | (0U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en)) 
           | ((((0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                              >> 2U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                                          >> 1U)) | 
               (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                             >> 2U)))) << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en)) 
           | ((((0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                              >> 4U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                                          >> 2U)) | 
               (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                             >> 4U)))) << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en)) 
           | ((((0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                              >> 6U))) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                                          >> 3U)) | 
               (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                             >> 6U)))) << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[0U] 
        = (IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                    & (0U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in))))
                    ? ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                        ? (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                        : (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[0U])))
                    : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                        ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rdata
                        : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
                            ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[1U] 
        = (IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     & (0U != (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in))))
                     ? ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                         ? (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                         : (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[0U])))
                     : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                         ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rdata
                         : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
                             ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                             : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[2U] 
        = (IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     >> 1U) & (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                            >> 2U))))
                    ? ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                        ? (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                        : (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[1U])))
                    : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                        ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rdata
                        : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
                            ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[3U] 
        = (IData)((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                      >> 1U) & (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                             >> 2U))))
                     ? ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                         ? (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                         : (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[1U])))
                     : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                         ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rdata
                         : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
                             ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                             : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[4U] 
        = (IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     >> 2U) & (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                            >> 4U))))
                    ? ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                        ? (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                        : (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[2U])))
                    : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                        ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rdata
                        : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
                            ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[5U] 
        = (IData)((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                      >> 2U) & (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                             >> 4U))))
                     ? ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                         ? (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                         : (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[2U])))
                     : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                         ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rdata
                         : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
                             ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                             : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[6U] 
        = (IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     >> 3U) & (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                            >> 6U))))
                    ? ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                        ? (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                        : (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[3U])))
                    : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                        ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rdata
                        : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
                            ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[7U] 
        = (IData)((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                      >> 3U) & (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                             >> 6U))))
                     ? ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                         ? (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                         : (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[3U])))
                     : (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                         ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rdata
                         : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid)
                             ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                             : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))) 
                   >> 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en) 
                    | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en) 
                                 >> 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en) 
                                 >> 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en) 
                                 >> 3U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_error_bus_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en) 
                    | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_bus_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_error_bus_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en) 
                                 >> 1U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_bus_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_error_bus_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en) 
                                 >> 2U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_bus_dff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_error_bus_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en) 
                                 >> 3U) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_bus_dff__dout))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[0U])))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[2U])))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[4U])))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_dff__dout);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[6U])))
            : vlSelf->swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_dff__dout);
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__76(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__76\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q) 
           & (0x80000000U == (0x80000002U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)));
    if ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req = 0U;
        } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req 
                    = (IData)((0x80000000U == (0x80000002U 
                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)));
            }
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__77(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__77\n"); );
    // Body
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_reg__DOT____Vcellinp__dffs__din 
        = ((((9U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
             & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                >> 0x10U)) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq)) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted)))
            ? ((9U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
               & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0x10U)) : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0xdU) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req 
        = (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req) 
                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                     >> 1U)) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   >> 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running 
        = (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                 | (IData)((2U == (0x802U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4 
        = (((((((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_mp_e4)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)) 
                 | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4)) 
                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4)) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4)) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_wb)) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb)) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req 
        = (1U & (((0U != (0x1800U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                     >> 7U)) | ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                    >> 3U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_halt_idle_any) 
             & (0xc0000U == (0xc0400U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))) 
            & (0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_leak_one_wb 
        = (1U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                   >> 2U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                 & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0x10U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 3U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer_stalled 
        = (1U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4)) 
                   | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                      >> 0xcU)) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)) 
                 | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt 
        = (1U & ((((((((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                        >> 0xeU) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                    >> 3U)) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                  >> 4U))) 
                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4))) 
                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4))) 
                   & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                         >> 0x15U))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb))) 
                 & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted 
        = (1U & ((((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0xeU) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty)) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken)) 
                 | ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0x11U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted 
        = (1U & (((((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 3U) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty)) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken)) 
                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req))) 
                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 2U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)))) 
                 & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xeU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall_in 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_leak_one_wb) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall) 
              & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 2U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__coll_ff__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__branch_error_bank_conflict_f1) 
            << 9U) | (((((((0x1ffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                      >> 6U)) == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f1)) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid)) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)) 
                        & ((3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                  >> 0x16U)) == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) 
                       << 8U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_bank_decoded) 
                                  << 4U) | ((8U & (
                                                   vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                                   << 3U)) 
                                            | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_way_wb) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((0x7ffffffeU 
                                                       & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_leak_one_wb) 
                                                           << 1U) 
                                                          & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                             >> 1U))) 
                                                      | (0xfffffffeU 
                                                         & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                            & ((~ 
                                                                ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                 >> 2U)) 
                                                               << 1U))))) 
                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_wb) 
                   | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0) 
                        & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)) 
                           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0) 
                              >> 2U))) & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                              >> 2U)) 
                                          | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0) 
                                             >> 1U))) 
                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers)))) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns)))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns)
                ? 0U : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_wb)
                         ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                         : ((IData)(1U) + vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0)))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0);
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_wb) 
                   | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1) 
                        & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)) 
                           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1) 
                              >> 2U))) & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                              >> 2U)) 
                                          | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1) 
                                             >> 1U))) 
                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers)))) 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns)))
            ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns)
                ? 0U : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_wb)
                         ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                         : ((IData)(1U) + vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1)))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
           & (0U == (0x20004U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req) 
           & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted)) 
              | (IData)((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                          >> 3U) & (0x30U == (0x70U 
                                              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req) 
                 | ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0xeU) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns 
        = (1U & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual) 
                    & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                          >> 9U))) | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mpmc_wb) 
                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb) 
                                       & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                             >> 9U))) 
                                      & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                            >> 0xeU)))) 
                  | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 3U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted)))) 
                 & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xeU))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb) 
                                  | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 3U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)))
                           ? ((((- (IData)((((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                 >> 3U)) 
                                             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc))) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb)))) 
                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                   >> 1U)) | ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                             >> 3U)))) 
                                              & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout)) 
                              | ((- (IData)(((~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                 >> 3U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)))) 
                                 & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout))
                           : vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                 | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 3U) & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                  & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                 | ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 4U) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1))) 
                    & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                          >> 0xeU)))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb)) 
                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                     >> 1U))) ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le)
                                  ? ((0x3f80U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                     | (((((0x40U & 
                                            ((- (IData)(
                                                        (1U 
                                                         & ((((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                               >> 0xbU) 
                                                              & (~ 
                                                                 ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                                  >> 7U))) 
                                                             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb))) 
                                                            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req)))))) 
                                             << 4U)) 
                                           | (0x30U 
                                              & ((- (IData)(
                                                            (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                              & (~ 
                                                                 ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                                  >> 7U))) 
                                                             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb))))) 
                                                 << 4U))) 
                                          | (0x10U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                                >> 7U) 
                                                               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb)))))) 
                                                << 4U))) 
                                         | (0x20U & 
                                            ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb))) 
                                             << 4U))) 
                                        | (0xfU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))
                                  : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb)
                                      ? ((0x2000U & 
                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                           >> 2U)) 
                                         | ((0x300U 
                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                >> 2U)) 
                                            | ((0x70U 
                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                               | ((2U 
                                                   & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                                                       << 1U) 
                                                      | (0xfffffffeU 
                                                         & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))) 
                                                  | (1U 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                        >> 2U))))))
                                      : ((0x3ffcU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                         | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                                             << 1U) 
                                            | (1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))))
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi 
        = (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode))) 
               & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                  | (IData)((((2U == (0x802U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                              & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                 >> 9U)) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)))))) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4))) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4))) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts 
        = (1U & ((((((((((IData)((0x10U == (0x14U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)))) 
                         | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                            & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running)) 
                               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4)))) 
                        | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode)) 
                       | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                          >> 9U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4)) 
                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4)) 
                   | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                      >> 0xcU)) | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)) 
                 | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int 
        = ((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                    >> 1U)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible)) 
               & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff))) 
              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready))) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int 
        = (((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
                  | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible)) 
                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff))) 
               & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                     | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                        >> 1U)))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready))) 
             & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_e4 
        = ((((((((((((((0xbU & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)))) 
                       | (7U & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int))))) 
                      | (0x1dU & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int))))) 
                     | (0x1cU & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))))) 
                    | (0x1eU & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int))))) 
                   | (2U & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))))) 
                  | (0xbU & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ecall_e4))))) 
                 | (1U & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4))))) 
                | (3U & (- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_e4) 
                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)))))) 
               | (4U & (- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4) 
                                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4))))))) 
              | (5U & (- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4) 
                                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4))))))) 
             | (6U & (- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4)))))) 
            | (7U & (- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4) 
                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4)))))) 
           & (~ (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid 
        = ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int) 
               | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int)) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int)) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual) 
            << 9U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_sync_qual) 
                       << 8U) | ((0x80U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                             << 5U) 
                                            & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                                               << 7U)) 
                                           | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                               & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                                                  << 7U)) 
                                              & ((~ 
                                                  ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                   >> 3U)) 
                                                 << 7U)))) 
                                 | (((IData)((0x204U 
                                              == (0x204U 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))) 
                                     << 6U) | ((((IData)(
                                                         (0U 
                                                          != 
                                                          (0xa0U 
                                                           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)))) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_sync_qual)) 
                                                << 5U) 
                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted) 
                                                         << 2U) 
                                                        | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                                                              << 1U) 
                                                             & ((0x7ffffffeU 
                                                                 & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                                    >> 1U)) 
                                                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer_stalled) 
                                                                   << 1U))) 
                                                            | (0xfffffffeU 
                                                               & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible) 
                                                                     << 1U) 
                                                                    & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                                                   & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid)) 
                                                                      << 1U)) 
                                                                  & ((~ 
                                                                      ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                       >> 3U)) 
                                                                     << 1U)))) 
                                                           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
                                                               & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                                   >> 2U) 
                                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer_stalled))) 
                                                              | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible) 
                                                                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                                                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))) 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                     >> 3U)))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_path_e4 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed)
            ? 0x40000000U : (0x7fffffffU & ((((((((
                                                   ((((- (IData)(
                                                                 ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4)))) 
                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_path_e4) 
                                                     | ((- (IData)(
                                                                   (((((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                       & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4))) 
                                                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_mp_e4)) 
                                                                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
                                                                    & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4))))) 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_path_e4)) 
                                                    | ((- (IData)(
                                                                  ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                   & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4) 
                                                                        | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4) 
                                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt))) 
                                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4)) 
                                                                      | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1) 
                                                                         & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))))))) 
                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__npc_e4)) 
                                                   | ((- (IData)(
                                                                 ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)))) 
                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_pc_e4)) 
                                                  | ((- (IData)(
                                                                ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)))) 
                                                     & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout)) 
                                                 | ((- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))) 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)
                                                        ? 
                                                       (vlSelf->__PVT__nmi_vec 
                                                        >> 1U)
                                                        : 
                                                       ((1U 
                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec)
                                                         ? 
                                                        ((0x7ffffffeU 
                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec) 
                                                         + 
                                                         (0x3fU 
                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_e4) 
                                                             << 1U)))
                                                         : 
                                                        (0x7ffffffeU 
                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec))))) 
                                                | (0x7ffffffeU 
                                                   & ((- (IData)(
                                                                 ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)) 
                                                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4) 
                                                                      & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4)))) 
                                                                  & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))))) 
                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec))) 
                                               | ((- (IData)(
                                                             (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)) 
                                                              & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_wb))))) 
                                                  & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout)) 
                                              | ((- (IData)(
                                                            ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)))) 
                                                 & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout)) 
                                             | ((- (IData)(
                                                           ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_wb)))) 
                                                & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout)) 
                                            | ((- (IData)(
                                                          (((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)) 
                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_wb)))) 
                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                  >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4 
        = (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)) 
             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4)) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt)) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din 
        = ((0x200U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                      << 1U)) | ((0x100U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                            << 5U)) 
                                 | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3) 
                                     << 7U) | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3) 
                                                 & (~ 
                                                    ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                     >> 7U))) 
                                                << 6U) 
                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__e4_valid) 
                                                   << 5U) 
                                                  | (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3) 
                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc3)) 
                                                       & (~ 
                                                          ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                           >> 2U))) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4) 
                                                            << 2U) 
                                                           | (((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                                                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4)) 
                                                                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4)) 
                                                                 << 1U) 
                                                                | (0xfffeU 
                                                                   & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4) 
                                                                       << 1U) 
                                                                      & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                         >> 0x10U)))) 
                                                               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                                                                          | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                                         | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)) 
                                                                        | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                                           >> 9U)) 
                                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4)) 
                                                                      | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4) 
                                                                         & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                            >> 0x11U))) 
                                                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4 
        = ((0xfcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4)) 
           | ((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
              & ((((((((((((((((((((((((((((((((((((((((((((((((((((1U 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))))) 
                                                                   | (1U 
                                                                      & ((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                         & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                            >> 3U)))) 
                                                                  | (1U 
                                                                     & ((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                        & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                           >> 4U)))) 
                                                                 | ((- (IData)(
                                                                               (4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                    & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                        << 1U) 
                                                                       | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4)))))) 
                                                                | ((- (IData)(
                                                                              (5U 
                                                                               == 
                                                                               (0x3fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                   & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                        & (~ 
                                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                            >> 6U))) 
                                                                       << 1U) 
                                                                      | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                          & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4))) 
                                                                         & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4)))))) 
                                                               | ((- (IData)(
                                                                             (6U 
                                                                              == 
                                                                              (0x3fU 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                  & ((0x7fffffeU 
                                                                      & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                          << 1U) 
                                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                            >> 5U))) 
                                                                     | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4)) 
                                                                        & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4)))))) 
                                                              | ((- (IData)(
                                                                            (7U 
                                                                             == 
                                                                             (0x3fU 
                                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned))) 
                                                             | ((- (IData)(
                                                                           (8U 
                                                                            == 
                                                                            (0x3fU 
                                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded))) 
                                                            | ((- (IData)(
                                                                          (0x1dU 
                                                                           == 
                                                                           (0x3fU 
                                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall))) 
                                                           | ((- (IData)(
                                                                         (0x1eU 
                                                                          == 
                                                                          (0x3fU 
                                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall))) 
                                                          | ((- (IData)(
                                                                        (9U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                             & (((1U 
                                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                         | ((- (IData)(
                                                                       (0xaU 
                                                                        == 
                                                                        (0x3fU 
                                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                            & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                >> 1U) 
                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)))) 
                                                        | ((- (IData)(
                                                                      (0xbU 
                                                                       == 
                                                                       (0x3fU 
                                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                           & (((2U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                               << 1U) 
                                                              | (2U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                       | ((- (IData)(
                                                                     (0xcU 
                                                                      == 
                                                                      (0x3fU 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                          & (((3U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                              << 1U) 
                                                             | (3U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                      | (((- (IData)(
                                                                     (0xdU 
                                                                      == 
                                                                      (0x3fU 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                          & (((2U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                              << 1U) 
                                                             | (2U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))))) 
                                                     | (((- (IData)(
                                                                    (0xeU 
                                                                     == 
                                                                     (0x3fU 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                         & (((3U 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                             << 1U) 
                                                            | (3U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))))) 
                                                    | ((- (IData)(
                                                                  (0xfU 
                                                                   == 
                                                                   (0x3fU 
                                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                       & (((4U 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                           << 1U) 
                                                          | (4U 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                   | ((- (IData)(
                                                                 (0x10U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                      & (5U 
                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                  | ((- (IData)(
                                                                (0x12U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                     & (6U 
                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                 | ((- (IData)(
                                                               (0x11U 
                                                                == 
                                                                (0x3fU 
                                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                    & (7U 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                | ((- (IData)(
                                                              (0x13U 
                                                               == 
                                                               (0x3fU 
                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                   & (8U 
                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                               | ((- (IData)(
                                                             (0x14U 
                                                              == 
                                                              (0x3fU 
                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                  & (9U 
                                                     == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                              | ((- (IData)(
                                                            (0x15U 
                                                             == 
                                                             (0x3fU 
                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                 & (0xaU 
                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                             | ((- (IData)(
                                                           (0x16U 
                                                            == 
                                                            (0x3fU 
                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                & (0xbU 
                                                   == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                            | ((- (IData)(
                                                          (0x17U 
                                                           == 
                                                           (0x3fU 
                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                               & (0xcU 
                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                           | ((- (IData)(
                                                         (0x18U 
                                                          == 
                                                          (0x3fU 
                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                              & ((((0xdU 
                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                   | (0xeU 
                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
                                                  << 1U) 
                                                 | ((0xdU 
                                                     == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                    | (0xeU 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))))) 
                                          | ((- (IData)(
                                                        (0x19U 
                                                         == 
                                                         (0x3fU 
                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                             & ((0xfffffeU 
                                                 & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                     >> 8U) 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                       << 1U))) 
                                                | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_misp) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt))))) 
                                         | ((- (IData)(
                                                       (0x1aU 
                                                        == 
                                                        (0x3fU 
                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                            & ((0x1fffffeU 
                                                & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                      << 1U))) 
                                               | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_ataken) 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt))))) 
                                        | ((- (IData)(
                                                      (0x1bU 
                                                       == 
                                                       (0x3fU 
                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                           & ((0x7ffffffeU 
                                               & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                   >> 1U) 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                     << 1U))) 
                                              | ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                  >> 3U) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt))))) 
                                       | ((- (IData)(
                                                     (0x1cU 
                                                      == 
                                                      (0x3fU 
                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall))) 
                                      | ((- (IData)(
                                                    (0x1dU 
                                                     == 
                                                     (0x3fU 
                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall))) 
                                     | ((- (IData)(
                                                   (0x1eU 
                                                    == 
                                                    (0x3fU 
                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall))) 
                                    | ((- (IData)((0x1fU 
                                                   == 
                                                   (0x3fU 
                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall))) 
                                   | ((- (IData)((0x20U 
                                                  == 
                                                  (0x3fU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall))) 
                                  | ((- (IData)((0x21U 
                                                 == 
                                                 (0x3fU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                     & (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                                 | ((- (IData)((0x22U 
                                                == 
                                                (0x3fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any))) 
                                | ((- (IData)((0x23U 
                                               == (0x3fU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any))) 
                               | ((- (IData)((0x24U 
                                              == (0x3fU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any))) 
                              | ((- (IData)((0x25U 
                                             == (0x3fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                 & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)))) 
                             | ((- (IData)((0x26U == 
                                            (0x3fU 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int)))) 
                            | ((- (IData)((0x27U == 
                                           (0x3fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int))) 
                           | ((- (IData)((0x28U == 
                                          (0x3fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4))) 
                          | ((- (IData)((0x29U == (0x3fU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                             & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                 << 1U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))))) 
                         | (1U & ((- (IData)((0x2aU 
                                              == (0x3fU 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                        | ((- (IData)((0x2bU == (0x3fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn))) 
                       | ((- (IData)((0x2cU == (0x3fU 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned))) 
                      | (1U & ((- (IData)((0x2dU == 
                                           (0x3fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                               & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                  >> 2U)))) | ((- (IData)(
                                                          (0x2eU 
                                                           == 
                                                           (0x3fU 
                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_error))) 
                    | (1U & ((- (IData)((0x2fU == (0x3fU 
                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                             & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                >> 1U)))) | ((- (IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x3fU 
                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy))) 
                  | (1U & ((- (IData)((0x31U == (0x3fU 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))))) 
                 | ((- (IData)((0x32U == (0x3fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                    & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                       & (0U != ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4 
        = ((0xf3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4)) 
           | (((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
               << 2U) & (((((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((4U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                               << 2U)) 
                                                                           | (4U 
                                                                              & (((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                                << 2U) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U)))) 
                                                                          | (4U 
                                                                             & (((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                                << 2U) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U)))) 
                                                                         | (((- (IData)(
                                                                                (4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                             << 2U) 
                                                                            & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 2U)))) 
                                                                        | (((- (IData)(
                                                                                (5U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                            << 2U) 
                                                                           & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                & (~ 
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 6U))) 
                                                                               << 3U) 
                                                                              | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4))) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 2U)))) 
                                                                       | (((- (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                           << 2U) 
                                                                          & ((0x1ffffff8U 
                                                                              & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 3U) 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 3U))) 
                                                                             | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4)) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 2U)))) 
                                                                      | (((- (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned)) 
                                                                         << 2U)) 
                                                                     | (((- (IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                                        << 2U)) 
                                                                    | (((- (IData)(
                                                                                (0x1dU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                                       << 2U)) 
                                                                   | (((- (IData)(
                                                                                (0x1eU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                      << 2U)) 
                                                                  | (((- (IData)(
                                                                                (9U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                      << 2U) 
                                                                     & (((1U 
                                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                         << 3U) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                           << 2U)))) 
                                                                 | (0xfffffffcU 
                                                                    & (((- (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                        << 2U) 
                                                                       & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                           << 1U) 
                                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                             << 2U))))) 
                                                                | (((- (IData)(
                                                                               (0xbU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                    << 2U) 
                                                                   & (((2U 
                                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                       << 3U) 
                                                                      | ((2U 
                                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                         << 2U)))) 
                                                               | (((- (IData)(
                                                                              (0xcU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                   << 2U) 
                                                                  & (((3U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 3U) 
                                                                     | ((3U 
                                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 2U)))) 
                                                              | ((((- (IData)(
                                                                              (0xdU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                   << 2U) 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 3U) 
                                                                     | ((2U 
                                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 2U))) 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                    << 2U))) 
                                                             | ((((- (IData)(
                                                                             (0xeU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                  << 2U) 
                                                                 & (((3U 
                                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                     << 3U) 
                                                                    | ((3U 
                                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                       << 2U))) 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                   << 2U))) 
                                                            | (((- (IData)(
                                                                           (0xfU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                << 2U) 
                                                               & (((4U 
                                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                   << 3U) 
                                                                  | ((4U 
                                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                     << 2U)))) 
                                                           | (((- (IData)(
                                                                          (0x10U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 6U))))) 
                                                               & (5U 
                                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                              << 2U)) 
                                                          | (((- (IData)(
                                                                         (0x12U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 6U))))) 
                                                              & (6U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                             << 2U)) 
                                                         | (((- (IData)(
                                                                        (0x11U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 6U))))) 
                                                             & (7U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 2U)) 
                                                        | (((- (IData)(
                                                                       (0x13U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 6U))))) 
                                                            & (8U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                           << 2U)) 
                                                       | (((- (IData)(
                                                                      (0x14U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 6U))))) 
                                                           & (9U 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                          << 2U)) 
                                                      | (((- (IData)(
                                                                     (0x15U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 6U))))) 
                                                          & (0xaU 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                         << 2U)) 
                                                     | (((- (IData)(
                                                                    (0x16U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 6U))))) 
                                                         & (0xbU 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                        << 2U)) 
                                                    | (((- (IData)(
                                                                   (0x17U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 6U))))) 
                                                        & (0xcU 
                                                           == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                       << 2U)) 
                                                   | (((- (IData)(
                                                                  (0x18U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 6U))))) 
                                                       << 2U) 
                                                      & ((((0xdU 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                           | (0xeU 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
                                                          << 3U) 
                                                         | (((0xdU 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                             | (0xeU 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 2U)))) 
                                                  | (((- (IData)(
                                                                 (0x19U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 6U))))) 
                                                      << 2U) 
                                                     & ((0x3fffff8U 
                                                         & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                             >> 6U) 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                               << 3U))) 
                                                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_misp) 
                                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                           << 2U)))) 
                                                 | (((- (IData)(
                                                                (0x1aU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 6U))))) 
                                                     << 2U) 
                                                    & ((0x7fffff8U 
                                                        & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                            >> 5U) 
                                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                              << 3U))) 
                                                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_ataken) 
                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                          << 2U)))) 
                                                | (((- (IData)(
                                                               (0x1bU 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 6U))))) 
                                                    << 2U) 
                                                   & ((0xfffffff8U 
                                                       & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                           << 1U) 
                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                             << 3U))) 
                                                      | (0x7ffffffcU 
                                                         & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                             >> 1U) 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                               << 2U)))))) 
                                               | (((- (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 6U))))) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                  << 2U)) 
                                              | (((- (IData)(
                                                             (0x1dU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 6U))))) 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                 << 2U)) 
                                             | (((- (IData)(
                                                            (0x1eU 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                 >> 6U))))) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                << 2U)) 
                                            | (((- (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 6U))))) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                                               << 2U)) 
                                           | (((- (IData)(
                                                          (0x20U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 6U))))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                                              << 2U)) 
                                          | (((- (IData)(
                                                         (0x21U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 6U))))) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                             << 2U)) 
                                         | (((- (IData)(
                                                        (0x22U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 6U))))) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any)) 
                                            << 2U)) 
                                        | (((- (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 6U))))) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                           << 2U)) 
                                       | (((- (IData)(
                                                      (0x24U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 6U))))) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                          << 2U)) | 
                                      (((- (IData)(
                                                   (0x25U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 6U))))) 
                                        & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4))) 
                                       << 2U)) | ((
                                                   (- (IData)(
                                                              (0x26U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 6U))))) 
                                                   & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                  << 2U)) 
                                    | (((- (IData)(
                                                   (0x27U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 6U))))) 
                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                       << 2U)) | ((
                                                   (- (IData)(
                                                              (0x28U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 6U))))) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                  << 2U)) 
                                  | (((- (IData)((0x29U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 6U))))) 
                                      << 2U) & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                 << 3U) 
                                                | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                                                   << 2U)))) 
                                 | (4U & (((- (IData)(
                                                      (0x2aU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 6U))))) 
                                           & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                          << 2U))) 
                                | (((- (IData)((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 6U))))) 
                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                   << 2U)) | (((- (IData)(
                                                          (0x2cU 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 6U))))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                              << 2U)) 
                              | (4U & (((- (IData)(
                                                   (0x2dU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 6U))))) 
                                        << 2U) & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                             | (((- (IData)((0x2eU 
                                             == (0x3fU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 6U))))) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                << 2U)) | (4U & (((- (IData)(
                                                             (0x2fU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 6U))))) 
                                                  << 2U) 
                                                 & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    << 1U)))) 
                           | (((- (IData)((0x30U == 
                                           (0x3fU & 
                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                             >> 6U))))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                              << 2U)) | (4U & (((- (IData)(
                                                           (0x31U 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 6U))))) 
                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))) 
                                               << 2U))) 
                         | (((- (IData)((0x32U == (0x3fU 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 6U))))) 
                             & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                                & (0U != ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))) 
                            << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4 
        = ((0xcfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4)) 
           | (((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
               << 4U) & (((((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((0x10U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                               << 4U)) 
                                                                           | (0x10U 
                                                                              & (((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                                << 4U) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                << 1U)))) 
                                                                          | (0x10U 
                                                                             & (((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                                << 4U) 
                                                                                & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                                                                         | (((- (IData)(
                                                                                (4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                             << 4U) 
                                                                            & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 5U) 
                                                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 4U)))) 
                                                                        | (((- (IData)(
                                                                                (5U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                            << 4U) 
                                                                           & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                & (~ 
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 6U))) 
                                                                               << 5U) 
                                                                              | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4))) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 4U)))) 
                                                                       | (((- (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                           << 4U) 
                                                                          & ((0x7fffffe0U 
                                                                              & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 5U) 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 1U))) 
                                                                             | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4)) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 4U)))) 
                                                                      | (((- (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned)) 
                                                                         << 4U)) 
                                                                     | (((- (IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                                        << 4U)) 
                                                                    | (((- (IData)(
                                                                                (0x1dU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                                       << 4U)) 
                                                                   | (((- (IData)(
                                                                                (0x1eU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                      << 4U)) 
                                                                  | (((- (IData)(
                                                                                (9U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                      << 4U) 
                                                                     & (((1U 
                                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                         << 5U) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                           << 4U)))) 
                                                                 | (0xfffffff0U 
                                                                    & (((- (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                        << 4U) 
                                                                       & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                           << 3U) 
                                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                             << 4U))))) 
                                                                | (((- (IData)(
                                                                               (0xbU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                    << 4U) 
                                                                   & (((2U 
                                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                       << 5U) 
                                                                      | ((2U 
                                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                         << 4U)))) 
                                                               | (((- (IData)(
                                                                              (0xcU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                   << 4U) 
                                                                  & (((3U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 5U) 
                                                                     | ((3U 
                                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 4U)))) 
                                                              | ((((- (IData)(
                                                                              (0xdU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                   << 4U) 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 5U) 
                                                                     | ((2U 
                                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 4U))) 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                    << 4U))) 
                                                             | ((((- (IData)(
                                                                             (0xeU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                  << 4U) 
                                                                 & (((3U 
                                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                     << 5U) 
                                                                    | ((3U 
                                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                       << 4U))) 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                   << 4U))) 
                                                            | (((- (IData)(
                                                                           (0xfU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                << 4U) 
                                                               & (((4U 
                                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                   << 5U) 
                                                                  | ((4U 
                                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                     << 4U)))) 
                                                           | (((- (IData)(
                                                                          (0x10U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 0xcU))))) 
                                                               & (5U 
                                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                              << 4U)) 
                                                          | (((- (IData)(
                                                                         (0x12U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 0xcU))))) 
                                                              & (6U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                             << 4U)) 
                                                         | (((- (IData)(
                                                                        (0x11U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 0xcU))))) 
                                                             & (7U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 4U)) 
                                                        | (((- (IData)(
                                                                       (0x13U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 0xcU))))) 
                                                            & (8U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                           << 4U)) 
                                                       | (((- (IData)(
                                                                      (0x14U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 0xcU))))) 
                                                           & (9U 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                          << 4U)) 
                                                      | (((- (IData)(
                                                                     (0x15U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 0xcU))))) 
                                                          & (0xaU 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                         << 4U)) 
                                                     | (((- (IData)(
                                                                    (0x16U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 0xcU))))) 
                                                         & (0xbU 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                        << 4U)) 
                                                    | (((- (IData)(
                                                                   (0x17U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 0xcU))))) 
                                                        & (0xcU 
                                                           == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                       << 4U)) 
                                                   | (((- (IData)(
                                                                  (0x18U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 0xcU))))) 
                                                       << 4U) 
                                                      & ((((0xdU 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                           | (0xeU 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
                                                          << 5U) 
                                                         | (((0xdU 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                             | (0xeU 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 4U)))) 
                                                  | (((- (IData)(
                                                                 (0x19U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0xcU))))) 
                                                      << 4U) 
                                                     & ((0xfffffe0U 
                                                         & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                             >> 4U) 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                               << 5U))) 
                                                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_misp) 
                                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                           << 4U)))) 
                                                 | (((- (IData)(
                                                                (0x1aU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 0xcU))))) 
                                                     << 4U) 
                                                    & ((0x1fffffe0U 
                                                        & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                            >> 3U) 
                                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                              << 5U))) 
                                                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_ataken) 
                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                          << 4U)))) 
                                                | (((- (IData)(
                                                               (0x1bU 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0xcU))))) 
                                                    << 4U) 
                                                   & ((0xffffffe0U 
                                                       & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                           << 3U) 
                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                             << 5U))) 
                                                      | (0xfffffff0U 
                                                         & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                             << 1U) 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                               << 4U)))))) 
                                               | (((- (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0xcU))))) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                  << 4U)) 
                                              | (((- (IData)(
                                                             (0x1dU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 0xcU))))) 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                 << 4U)) 
                                             | (((- (IData)(
                                                            (0x1eU 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                 >> 0xcU))))) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                << 4U)) 
                                            | (((- (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0xcU))))) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                                               << 4U)) 
                                           | (((- (IData)(
                                                          (0x20U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0xcU))))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                                              << 4U)) 
                                          | (((- (IData)(
                                                         (0x21U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0xcU))))) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                             << 4U)) 
                                         | (((- (IData)(
                                                        (0x22U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0xcU))))) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any)) 
                                            << 4U)) 
                                        | (((- (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0xcU))))) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                           << 4U)) 
                                       | (((- (IData)(
                                                      (0x24U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0xcU))))) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                          << 4U)) | 
                                      (((- (IData)(
                                                   (0x25U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 0xcU))))) 
                                        & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4))) 
                                       << 4U)) | ((
                                                   (- (IData)(
                                                              (0x26U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0xcU))))) 
                                                   & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                  << 4U)) 
                                    | (((- (IData)(
                                                   (0x27U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 0xcU))))) 
                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                       << 4U)) | ((
                                                   (- (IData)(
                                                              (0x28U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0xcU))))) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                  << 4U)) 
                                  | (((- (IData)((0x29U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 0xcU))))) 
                                      << 4U) & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                 << 5U) 
                                                | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                                                   << 4U)))) 
                                 | (0x10U & (((- (IData)(
                                                         (0x2aU 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0xcU))))) 
                                              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                             << 4U))) 
                                | (((- (IData)((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 0xcU))))) 
                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                   << 4U)) | (((- (IData)(
                                                          (0x2cU 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0xcU))))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                              << 4U)) 
                              | (0x10U & (((- (IData)(
                                                      (0x2dU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0xcU))))) 
                                           << 4U) & 
                                          ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                           << 2U)))) 
                             | (((- (IData)((0x2eU 
                                             == (0x3fU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 0xcU))))) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                << 4U)) | (0x10U & 
                                           (((- (IData)(
                                                        (0x2fU 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0xcU))))) 
                                             << 4U) 
                                            & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               << 3U)))) 
                           | (((- (IData)((0x30U == 
                                           (0x3fU & 
                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                             >> 0xcU))))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                              << 4U)) | (0x10U & ((
                                                   (- (IData)(
                                                              (0x31U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0xcU))))) 
                                                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))) 
                                                  << 4U))) 
                         | (((- (IData)((0x32U == (0x3fU 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 0xcU))))) 
                             & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                                & (0U != ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))) 
                            << 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4 
        = ((0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4)) 
           | (((- (IData)((1U & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
               << 6U) & (((((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((0x40U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                               << 6U)) 
                                                                           | (0x40U 
                                                                              & (((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                                << 6U) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                << 3U)))) 
                                                                          | (0x40U 
                                                                             & (((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                                << 6U) 
                                                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                << 2U)))) 
                                                                         | (((- (IData)(
                                                                                (4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 6U)))) 
                                                                        | (((- (IData)(
                                                                                (5U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                            << 6U) 
                                                                           & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                & (~ 
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 6U))) 
                                                                               << 7U) 
                                                                              | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4))) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 6U)))) 
                                                                       | (((- (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                           << 6U) 
                                                                          & ((0xffffff80U 
                                                                              & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 7U) 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                << 1U))) 
                                                                             | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_pc4)) 
                                                                                & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 6U)))) 
                                                                      | (((- (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_instr_aligned)) 
                                                                         << 6U)) 
                                                                     | (((- (IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                                        << 6U)) 
                                                                    | (((- (IData)(
                                                                                (0x1dU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                                       << 6U)) 
                                                                   | (((- (IData)(
                                                                                (0x1eU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                      << 6U)) 
                                                                  | (((- (IData)(
                                                                                (9U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                      << 6U) 
                                                                     & (((1U 
                                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                         << 7U) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                           << 6U)))) 
                                                                 | (0xffffffc0U 
                                                                    & (((- (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                        << 6U) 
                                                                       & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                           << 5U) 
                                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                             << 6U))))) 
                                                                | (((- (IData)(
                                                                               (0xbU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                    << 6U) 
                                                                   & (((2U 
                                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                       << 7U) 
                                                                      | ((2U 
                                                                          == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                         << 6U)))) 
                                                               | (((- (IData)(
                                                                              (0xcU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                   << 6U) 
                                                                  & (((3U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 7U) 
                                                                     | ((3U 
                                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 6U)))) 
                                                              | ((((- (IData)(
                                                                              (0xdU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                   << 6U) 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 7U) 
                                                                     | ((2U 
                                                                         == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 6U))) 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                    << 6U))) 
                                                             | ((((- (IData)(
                                                                             (0xeU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                  << 6U) 
                                                                 & (((3U 
                                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                     << 7U) 
                                                                    | ((3U 
                                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                       << 6U))) 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                   << 6U))) 
                                                            | (((- (IData)(
                                                                           (0xfU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                << 6U) 
                                                               & (((4U 
                                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                   << 7U) 
                                                                  | ((4U 
                                                                      == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                     << 6U)))) 
                                                           | (((- (IData)(
                                                                          (0x10U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 0x12U))))) 
                                                               & (5U 
                                                                  == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                              << 6U)) 
                                                          | (((- (IData)(
                                                                         (0x12U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 0x12U))))) 
                                                              & (6U 
                                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                             << 6U)) 
                                                         | (((- (IData)(
                                                                        (0x11U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 0x12U))))) 
                                                             & (7U 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 6U)) 
                                                        | (((- (IData)(
                                                                       (0x13U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 0x12U))))) 
                                                            & (8U 
                                                               == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                           << 6U)) 
                                                       | (((- (IData)(
                                                                      (0x14U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 0x12U))))) 
                                                           & (9U 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                          << 6U)) 
                                                      | (((- (IData)(
                                                                     (0x15U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 0x12U))))) 
                                                          & (0xaU 
                                                             == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                         << 6U)) 
                                                     | (((- (IData)(
                                                                    (0x16U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 0x12U))))) 
                                                         & (0xbU 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                        << 6U)) 
                                                    | (((- (IData)(
                                                                   (0x17U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 0x12U))))) 
                                                        & (0xcU 
                                                           == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                       << 6U)) 
                                                   | (((- (IData)(
                                                                  (0x18U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 0x12U))))) 
                                                       << 6U) 
                                                      & ((((0xdU 
                                                            == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                           | (0xeU 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
                                                          << 7U) 
                                                         | (((0xdU 
                                                              == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                             | (0xeU 
                                                                == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 6U)))) 
                                                  | (((- (IData)(
                                                                 (0x19U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0x12U))))) 
                                                      << 6U) 
                                                     & ((0x3fffff80U 
                                                         & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                             >> 2U) 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                               << 7U))) 
                                                        | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_misp) 
                                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                           << 6U)))) 
                                                 | (((- (IData)(
                                                                (0x1aU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 0x12U))))) 
                                                     << 6U) 
                                                    & ((0x7fffff80U 
                                                        & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                            >> 1U) 
                                                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                              << 7U))) 
                                                       | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_pmu_i0_br_ataken) 
                                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                          << 6U)))) 
                                                | (((- (IData)(
                                                               (0x1bU 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0x12U))))) 
                                                    << 6U) 
                                                   & ((0xffffff80U 
                                                       & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                           << 5U) 
                                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                             << 7U))) 
                                                      | (0xffffffc0U 
                                                         & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                             << 3U) 
                                                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                               << 6U)))))) 
                                               | (((- (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0x12U))))) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                  << 6U)) 
                                              | (((- (IData)(
                                                             (0x1dU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 0x12U))))) 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                 << 6U)) 
                                             | (((- (IData)(
                                                            (0x1eU 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                 >> 0x12U))))) 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                << 6U)) 
                                            | (((- (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0x12U))))) 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                                               << 6U)) 
                                           | (((- (IData)(
                                                          (0x20U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0x12U))))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                                              << 6U)) 
                                          | (((- (IData)(
                                                         (0x21U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0x12U))))) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__lsu_freeze_dc3)) 
                                             << 6U)) 
                                         | (((- (IData)(
                                                        (0x22U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0x12U))))) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_store_stall_any)) 
                                            << 6U)) 
                                        | (((- (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0x12U))))) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                           << 6U)) 
                                       | (((- (IData)(
                                                      (0x24U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0x12U))))) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                          << 6U)) | 
                                      (((- (IData)(
                                                   (0x25U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 0x12U))))) 
                                        & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4))) 
                                       << 6U)) | ((
                                                   (- (IData)(
                                                              (0x26U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0x12U))))) 
                                                   & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                  << 6U)) 
                                    | (((- (IData)(
                                                   (0x27U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 0x12U))))) 
                                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                       << 6U)) | ((
                                                   (- (IData)(
                                                              (0x28U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0x12U))))) 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                  << 6U)) 
                                  | (((- (IData)((0x29U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 0x12U))))) 
                                      << 6U) & (((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                 << 7U) 
                                                | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                                     | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                                                   << 6U)))) 
                                 | (0x40U & (((- (IData)(
                                                         (0x2aU 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0x12U))))) 
                                              & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                             << 6U))) 
                                | (((- (IData)((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 0x12U))))) 
                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                   << 6U)) | (((- (IData)(
                                                          (0x2cU 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0x12U))))) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                              << 6U)) 
                              | (0x40U & (((- (IData)(
                                                      (0x2dU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0x12U))))) 
                                           << 6U) & 
                                          ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                           << 4U)))) 
                             | (((- (IData)((0x2eU 
                                             == (0x3fU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 0x12U))))) 
                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                << 6U)) | (0x40U & 
                                           (((- (IData)(
                                                        (0x2fU 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0x12U))))) 
                                             << 6U) 
                                            & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               << 5U)))) 
                           | (((- (IData)((0x30U == 
                                           (0x3fU & 
                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                             >> 0x12U))))) 
                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                              << 6U)) | (0x40U & ((
                                                   (- (IData)(
                                                              (0x31U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0x12U))))) 
                                                   & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))) 
                                                  << 6U))) 
                         | (((- (IData)((0x32U == (0x3fU 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 0x12U))))) 
                             & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                                & (0U != ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))) 
                            << 6U))));
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__79(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__79\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h73eb39a6__0;
    // Body
    __Vtemp_h73eb39a6__0[0U] = (((((- (IData)((1U & 
                                               ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                   & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0U]) 
                                  | ((- (IData)((1U 
                                                 & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                     >> 1U) 
                                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                     & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[5U] 
                                         << 0x18U) 
                                        | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U] 
                                           >> 8U)))) 
                                 | ((- (IData)((1U 
                                                & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                    >> 2U) 
                                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                    & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
                                        << 0x10U) | 
                                       (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
                                        >> 0x10U)))) 
                                | ((- (IData)((IData)(
                                                      (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                        >> 3U) 
                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                   & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
                                       << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
                                                 >> 0x18U))));
    __Vtemp_h73eb39a6__0[1U] = (((((- (IData)((1U & 
                                               ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                   & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[1U]) 
                                  | ((- (IData)((1U 
                                                 & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                     >> 1U) 
                                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                     & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[6U] 
                                         << 0x18U) 
                                        | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[5U] 
                                           >> 8U)))) 
                                 | ((- (IData)((1U 
                                                & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                    >> 2U) 
                                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                    & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xaU] 
                                        << 0x10U) | 
                                       (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
                                        >> 0x10U)))) 
                                | ((- (IData)((IData)(
                                                      (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                        >> 3U) 
                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                   & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xeU] 
                                       << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
                                                 >> 0x18U))));
    __Vtemp_h73eb39a6__0[2U] = (((((- (IData)((1U & 
                                               ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                   & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[2U]) 
                                  | ((- (IData)((1U 
                                                 & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                     >> 1U) 
                                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                     & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[7U] 
                                         << 0x18U) 
                                        | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[6U] 
                                           >> 8U)))) 
                                 | ((- (IData)((1U 
                                                & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                    >> 2U) 
                                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                    & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xbU] 
                                        << 0x10U) | 
                                       (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xaU] 
                                        >> 0x10U)))) 
                                | ((- (IData)((IData)(
                                                      (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                        >> 3U) 
                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                   & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xfU] 
                                       << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xeU] 
                                                 >> 0x18U))));
    __Vtemp_h73eb39a6__0[3U] = (((((- (IData)((1U & 
                                               ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                   & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[3U]) 
                                  | ((- (IData)((1U 
                                                 & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                     >> 1U) 
                                                    | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                     & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
                                         << 0x18U) 
                                        | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[7U] 
                                           >> 8U)))) 
                                 | ((- (IData)((1U 
                                                & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                    >> 2U) 
                                                   | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                    & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
                                        << 0x10U) | 
                                       (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xbU] 
                                        >> 0x10U)))) 
                                | ((- (IData)((IData)(
                                                      (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                                        >> 3U) 
                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                                   & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0x10U] 
                                       << 8U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xfU] 
                                                 >> 0x18U))));
    vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[0U] = 
        __Vtemp_h73eb39a6__0[0U];
    vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[1U] = 
        __Vtemp_h73eb39a6__0[1U];
    vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[2U] = 
        __Vtemp_h73eb39a6__0[2U];
    vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[3U] = 
        __Vtemp_h73eb39a6__0[3U];
    vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[4U] = 
        (0xffU & (((((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                     & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U]) 
                    | ((- (IData)((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                          >> 1U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                       & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
                           << 0x18U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
                                        >> 8U)))) | 
                   ((- (IData)((1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                       >> 2U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                    & ((vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
                        << 0x10U) | (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
                                     >> 0x10U)))) | 
                  ((- (IData)((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                        >> 3U) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                   & (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0x10U] 
                      >> 0x18U))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_debug_data_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x3ffffffffULL & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_debug_rd_en_ff)
                              ? ((((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                            >> 4U))))) 
                                     & (((QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__swerv_eh1__DOT__ictag_debug_rd_data 
                                                             >> 0x14U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->__PVT__swerv_eh1__DOT__ictag_debug_rd_data 
                                                            << 0xcU) 
                                                           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status) 
                                                               << 4U) 
                                                              | (0U 
                                                                 != 
                                                                 (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq) 
                                                                   & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout)) 
                                                                  & (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_debug_rd_en_ff))))))))))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                              >> 8U))))) 
                                       & (((QData)((IData)(
                                                           vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[0U]))))) 
                                   | ((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                             >> 7U))))) 
                                      & (((QData)((IData)(
                                                          vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[2U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[1U])) 
                                               >> 2U))))) 
                                  | ((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                            >> 6U))))) 
                                     & (((QData)((IData)(
                                                         vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[3U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[3U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[2U])) 
                                              >> 4U))))) 
                                 | ((- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                           >> 5U))))) 
                                    & (((QData)((IData)(
                                                        vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[4U])) 
                                        << 0x3aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[4U])) 
                                         << 0x1aU) 
                                        | ((QData)((IData)(
                                                           vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[3U])) 
                                           >> 6U)))))
                              : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu_ic_debug_rd_data));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_error_f2 
        = ((0xc0U & vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[4U]) 
           | ((0x30U & vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[3U]) 
              | ((0xcU & vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[2U]) 
                 | (3U & vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[1U]))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U] 
        = ((- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))) 
           & vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[0U]);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U] 
        = ((- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))) 
           & ((vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[2U] 
               << 0x1eU) | (vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[1U] 
                            >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U] 
        = ((- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))) 
           & (IData)((((QData)((IData)(((vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[4U] 
                                         << 0x1aU) 
                                        | (vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
                                           >> 6U)))) 
                       << 0x20U) | (QData)((IData)(
                                                   ((vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[2U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U] 
        = ((- (IData)(((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))) 
           & (IData)(((((QData)((IData)(((vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[4U] 
                                          << 0x1aU) 
                                         | (vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
                                            >> 6U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
                                                      << 0x1cU) 
                                                     | (vlSelf->__PVT__swerv_eh1__DOT__ic_rd_data[2U] 
                                                        >> 4U))))) 
                      >> 0x20U)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_error_f2)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parity));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_error_f2)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parity));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_error_f2)
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parity));
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[3U];
    }
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[3U];
    }
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))) {
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U];
    } else {
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[0U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[1U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[2U];
        vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[3U];
    }
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__80(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__80\n"); );
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in 
        = (((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)) 
            << 0x31U) | (((QData)((IData)(((((0U != 
                                              ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr) 
                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_tag_valid))) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)) 
                                            << 0x1fU) 
                                           | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_btb_target_f2))) 
                          << 0x11U) | (QData)((IData)(
                                                      ((0x1ffe0U 
                                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                                           << 1U)) 
                                                       | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr))))));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1);
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0);
}

VL_INLINE_OPT void Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__83(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___multiclk__TOP__rvfpgasim__swervolf__83\n"); );
    // Body
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcommand_regno_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xffffU & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren) 
                       | (((IData)((0x80000U == (0xff080000U 
                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg))) 
                           & (8U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                          & (~ (IData)((0U != (7U & 
                                               (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                >> 8U)))))))
                       ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_din
                       : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout)));
}
