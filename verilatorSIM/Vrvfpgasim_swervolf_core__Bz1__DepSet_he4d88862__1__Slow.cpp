// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_swervolf_core__Bz1.h"

extern const VlUnpacked<CData/*6:0*/, 16> Vrvfpgasim__ConstPool__TABLE_h9edcaeff_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vrvfpgasim__ConstPool__TABLE_h0d3b6ad1_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vrvfpgasim__ConstPool__TABLE_h218ca11c_0;

VL_ATTR_COLD void Vrvfpgasim_swervolf_core__Bz1___settle__TOP__rvfpgasim__swervolf__3(Vrvfpgasim_swervolf_core__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1___settle__TOP__rvfpgasim__swervolf__3\n"); );
    // Init
    CData/*2:0*/ __Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in;
    CData/*2:0*/ __Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in;
    CData/*3:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx3;
    CData/*7:0*/ __Vtableidx4;
    VlWide<3>/*95:0*/ __Vtemp_h1f336ae2__0;
    VlWide<3>/*95:0*/ __Vtemp_ha79e3b5e__0;
    VlWide<4>/*127:0*/ __Vtemp_hdfc4d498__0;
    VlWide<4>/*127:0*/ __Vtemp_h62cb3cc5__0;
    VlWide<3>/*95:0*/ __Vtemp_hf47fb529__0;
    VlWide<3>/*95:0*/ __Vtemp_h2954ed8d__0;
    VlWide<3>/*95:0*/ __Vtemp_h5b2831f5__0;
    VlWide<3>/*95:0*/ __Vtemp_h3f8bbafa__0;
    VlWide<3>/*95:0*/ __Vtemp_h44c56a1a__0;
    VlWide<3>/*95:0*/ __Vtemp_h8f215286__0;
    VlWide<4>/*127:0*/ __Vtemp_h568f474f__0;
    // Body
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mvendorid 
        = (IData)((0x40100000U == (0x48300000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_marchid 
        = (IData)((0x40200000U == (0x48300000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mimpid 
        = (IData)((0x40300000U == (0x44300000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_mdseac 
        = (IData)((0xc0000000U == (0xc1800000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_meihap 
        = (IData)((0xc0800000U == (0xc0800000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dcsr 
        = (IData)((0x43000000U == (0x47100000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dpc 
        = (IData)((0x43100000U == (0x47100000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicawics 
        = (IData)((0x800000U == (0x82b00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad0 
        = (IData)((0x40900000U == (0x41b00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__csr_dicad1 
        = (IData)((0x40a00000U == (0x40b00000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__ps_stall) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_stall_ff)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__presync 
        = (1U & ((((((IData)((0x41900000U == (0x41900000U 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                     | (IData)((0x5000000U == (0x7600000U 
                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                    | (IData)((0x200000U == (0x7e00000U 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                   | (IData)((0x80400000U == (0x81e00000U 
                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                  | (IData)((0x80200000U == (0x81b00000U 
                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                 | (IData)((0x8200000U == (0xbe00000U 
                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__valid_e1 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_valid_e1) 
           & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__flush_lower_ff)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r 
        = ((0x7c00U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                       >> 5U)) | ((0x3e0U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                             >> 0xfU)) 
                                  | (0x1fU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                              >> 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_dc5_dc4 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
            >> 3U) == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc4 
                       >> 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_dc5_dc2 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
            >> 3U) == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                       >> 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw 
        = (((QData)((IData)((((IData)((((0U != (0x44U 
                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)) 
                                        | (0x10U == 
                                           (0x2000010U 
                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                       | (0x10U == 
                                          (0x30U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((((((((((((((IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0x6004U 
                                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                           | (IData)(
                                                                     (0x800U 
                                                                      == 
                                                                      (0x2804U 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                          | (IData)(
                                                                    (0x82000U 
                                                                     == 
                                                                     (0x82004U 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                         | (IData)(
                                                                   (0x400U 
                                                                    == 
                                                                    (0x2404U 
                                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                        | (IData)(
                                                                  (0x42000U 
                                                                   == 
                                                                   (0x42004U 
                                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                       | (IData)(
                                                                 (0x200U 
                                                                  == 
                                                                  (0x2204U 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                      | (IData)(
                                                                (0x22000U 
                                                                 == 
                                                                 (0x22004U 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                     | (IData)(
                                                               (0x100U 
                                                                == 
                                                                (0x2104U 
                                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                    | (IData)(
                                                              (0x12000U 
                                                               == 
                                                               (0x12004U 
                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                   | (IData)(
                                                             (0x80U 
                                                              == 
                                                              (0x2084U 
                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                  | (IData)(
                                                            (0xa000U 
                                                             == 
                                                             (0xa004U 
                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                 | (IData)(
                                                           (0U 
                                                            == 
                                                            (0x18U 
                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x44U 
                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & (((IData)(
                                                           (0x20U 
                                                            == 
                                                            (0x34U 
                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                   | (IData)(
                                                             (0x20U 
                                                              == 
                                                              (0x64U 
                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & (((((IData)(
                                                                (4U 
                                                                 == 
                                                                 (0x1cU 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                        | (IData)(
                                                                  (0x2010U 
                                                                   == 
                                                                   (0x2034U 
                                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                       | (IData)(
                                                                 (0x50U 
                                                                  == 
                                                                  (0x3050U 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                      | (IData)(
                                                                (0x10U 
                                                                 == 
                                                                 (0x1034U 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0x24U 
                                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                          | (IData)(
                                                                    (0x24U 
                                                                     == 
                                                                     (0x24U 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                         << 0x1bU) 
                                                        | (0xf8000000U 
                                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                              << 0x17U)))) 
                                                    | (((IData)(
                                                                (0x1010U 
                                                                 == 
                                                                 (0x3034U 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                        << 0x1aU) 
                                                       | ((0x2000000U 
                                                           & (((IData)(
                                                                       (0x28U 
                                                                        == 
                                                                        (0x28U 
                                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                               | (IData)(
                                                                         (0x14U 
                                                                          == 
                                                                          (0x14U 
                                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & (((IData)(
                                                                          (4U 
                                                                           == 
                                                                           (0x2cU 
                                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                  | (IData)(
                                                                            (0x28U 
                                                                             == 
                                                                             (0x28U 
                                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                 << 0x18U)) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          == 
                                                                          (0x34U 
                                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                 << 0x17U) 
                                                                | (((IData)(
                                                                            (0x20U 
                                                                             == 
                                                                             (0x70U 
                                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                    << 0x16U) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                == 
                                                                                (0x54U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                       << 0x15U) 
                                                                      | ((0x100000U 
                                                                          & ((((IData)(
                                                                                (0x10U 
                                                                                == 
                                                                                (0x7030U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                               | (IData)(
                                                                                (4U 
                                                                                == 
                                                                                (0x2cU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                              | (IData)(
                                                                                (0x10U 
                                                                                == 
                                                                                (0x42007054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & (((((IData)(
                                                                                (0x40000030U 
                                                                                == 
                                                                                (0x40001074U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                | (IData)(
                                                                                (0x2010U 
                                                                                == 
                                                                                (0x2006054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x2010U 
                                                                                == 
                                                                                (0x6034U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x54U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & (((IData)(
                                                                                (0x7000U 
                                                                                == 
                                                                                (0x7024U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                | (IData)(
                                                                                (0x7000U 
                                                                                == 
                                                                                (0x2007044U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((((((((((((IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x48U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                | (IData)(
                                                                                (0x6010U 
                                                                                == 
                                                                                (0x2007014U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (0x34U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x50U 
                                                                                == 
                                                                                (0x1050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x2050U 
                                                                                == 
                                                                                (0x2050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x6000U 
                                                                                == 
                                                                                (0x7024U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0xd0U 
                                                                                == 
                                                                                (0xd0U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x150U 
                                                                                == 
                                                                                (0x150U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x250U 
                                                                                == 
                                                                                (0x250U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x450U 
                                                                                == 
                                                                                (0x450U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x850U 
                                                                                == 
                                                                                (0x850U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(
                                                                                (0x4010U 
                                                                                == 
                                                                                (0x2007014U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                | (IData)(
                                                                                (0x4010U 
                                                                                == 
                                                                                (0x7034U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(
                                                                                (0x1010U 
                                                                                == 
                                                                                (0x2007054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0x40001010U 
                                                                                == 
                                                                                (0x40003054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0x5010U 
                                                                                == 
                                                                                (0x42007054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(
                                                                                (0x2010U 
                                                                                == 
                                                                                (0x2006054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                | (IData)(
                                                                                (0x2010U 
                                                                                == 
                                                                                (0x6034U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x7024U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                | (IData)(
                                                                                (0x2040U 
                                                                                == 
                                                                                (0x2054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x4000U 
                                                                                == 
                                                                                (0x4030U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x2007044U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x2005020U 
                                                                                == 
                                                                                (0x2005064U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x54U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x5054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0x1040U 
                                                                                == 
                                                                                (0x5054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0x5020U 
                                                                                == 
                                                                                (0x5034U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0x4020U 
                                                                                == 
                                                                                (0x5034U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0x44U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x1054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x2050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((((((IData)(
                                                                                (0x2050U 
                                                                                == 
                                                                                (0x2050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                | (IData)(
                                                                                (0xd0U 
                                                                                == 
                                                                                (0xd0U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x150U 
                                                                                == 
                                                                                (0x150U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x250U 
                                                                                == 
                                                                                (0x250U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x450U 
                                                                                == 
                                                                                (0x450U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x850U 
                                                                                == 
                                                                                (0x850U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((((IData)(
                                                                                (0xb050U 
                                                                                == 
                                                                                (0xb050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                | (IData)(
                                                                                (0x13050U 
                                                                                == 
                                                                                (0x13050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x23050U 
                                                                                == 
                                                                                (0x23050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x43050U 
                                                                                == 
                                                                                (0x43050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x83050U 
                                                                                == 
                                                                                (0x83050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))))))))))))))))))))))))))))))))))))) 
            << 0x12U) | (QData)((IData)(((0x20000U 
                                          & ((((((IData)(
                                                         (0x8050U 
                                                          == 
                                                          (0x9050U 
                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                 | (IData)(
                                                           (0x10050U 
                                                            == 
                                                            (0x11050U 
                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                | (IData)(
                                                          (0x20050U 
                                                           == 
                                                           (0x21050U 
                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                               | (IData)(
                                                         (0x40050U 
                                                          == 
                                                          (0x41050U 
                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                              | (IData)(
                                                        (0x80050U 
                                                         == 
                                                         (0x81050U 
                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                             << 0x11U)) 
                                         | (((IData)(
                                                     (0x1050U 
                                                      == 
                                                      (0x3050U 
                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                             << 0x10U) 
                                            | ((0x8000U 
                                                & (((((((IData)(
                                                                (0x4050U 
                                                                 == 
                                                                 (0x6050U 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                        | (IData)(
                                                                  (0xc050U 
                                                                   == 
                                                                   (0xc050U 
                                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                       | (IData)(
                                                                 (0x14050U 
                                                                  == 
                                                                  (0x14050U 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                      | (IData)(
                                                                (0x24050U 
                                                                 == 
                                                                 (0x24050U 
                                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                     | (IData)(
                                                               (0x44050U 
                                                                == 
                                                                (0x44050U 
                                                                 & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                    | (IData)(
                                                              (0x84050U 
                                                               == 
                                                               (0x84050U 
                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                   << 0xfU)) 
                                               | ((0x4000U 
                                                   & (((((((((((((IData)(
                                                                         (8U 
                                                                          == 
                                                                          (0x28U 
                                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                 | (IData)(
                                                                           (0x2004020U 
                                                                            == 
                                                                            (0x2004064U 
                                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                | (IData)(
                                                                          (0xd0U 
                                                                           == 
                                                                           (0x20d0U 
                                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                               | (IData)(
                                                                         (0x150U 
                                                                          == 
                                                                          (0x2150U 
                                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                              | (IData)(
                                                                        (0x250U 
                                                                         == 
                                                                         (0x2250U 
                                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                             | (IData)(
                                                                       (0x450U 
                                                                        == 
                                                                        (0x2450U 
                                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                            | (IData)(
                                                                      (0x850U 
                                                                       == 
                                                                       (0x2850U 
                                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                           | (IData)(
                                                                     (0xa050U 
                                                                      == 
                                                                      (0xa050U 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                          | (IData)(
                                                                    (0x12050U 
                                                                     == 
                                                                     (0x12050U 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                         | (IData)(
                                                                   (0x22050U 
                                                                    == 
                                                                    (0x22050U 
                                                                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                        | (IData)(
                                                                  (0x42050U 
                                                                   == 
                                                                   (0x42050U 
                                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                       | (IData)(
                                                                 (0x82050U 
                                                                  == 
                                                                  (0x82050U 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                      << 0xeU)) 
                                                  | ((0x2000U 
                                                      & ((((((((((((((IData)(
                                                                             (0x1008U 
                                                                              == 
                                                                              (0x1028U 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                     | (IData)(
                                                                               (0x50U 
                                                                                == 
                                                                                (0x403050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                    | (IData)(
                                                                              (0x2004020U 
                                                                               == 
                                                                               (0x2004064U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                   | (IData)(
                                                                             (0xd0U 
                                                                              == 
                                                                              (0x20d0U 
                                                                               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                  | (IData)(
                                                                            (0x150U 
                                                                             == 
                                                                             (0x2150U 
                                                                              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                 | (IData)(
                                                                           (0x250U 
                                                                            == 
                                                                            (0x2250U 
                                                                             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                | (IData)(
                                                                          (0x450U 
                                                                           == 
                                                                           (0x2450U 
                                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                               | (IData)(
                                                                         (0x850U 
                                                                          == 
                                                                          (0x2850U 
                                                                           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                              | (IData)(
                                                                        (0xa050U 
                                                                         == 
                                                                         (0xa050U 
                                                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                             | (IData)(
                                                                       (0x12050U 
                                                                        == 
                                                                        (0x12050U 
                                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                            | (IData)(
                                                                      (0x22050U 
                                                                       == 
                                                                       (0x22050U 
                                                                        & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                           | (IData)(
                                                                     (0x42050U 
                                                                      == 
                                                                      (0x42050U 
                                                                       & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                          | (IData)(
                                                                    (0x82050U 
                                                                     == 
                                                                     (0x82050U 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                         << 0xdU)) 
                                                     | (((IData)(
                                                                 (0x100050U 
                                                                  == 
                                                                  (0x503050U 
                                                                   & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                         << 0xcU) 
                                                        | (((IData)(
                                                                    (0x50U 
                                                                     == 
                                                                     (0x303050U 
                                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                            << 0xbU) 
                                                           | (((IData)(
                                                                       (0x20000050U 
                                                                        == 
                                                                        (0x20003050U 
                                                                         & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                               << 0xaU) 
                                                              | (((IData)(
                                                                          (0x2000030U 
                                                                           == 
                                                                           (0x2004074U 
                                                                            & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                  << 9U) 
                                                                 | ((0x100U 
                                                                     & (((IData)(
                                                                                (0x2002030U 
                                                                                == 
                                                                                (0x2007074U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                         | (IData)(
                                                                                (0x2001010U 
                                                                                == 
                                                                                (0x2007054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                        << 8U)) 
                                                                    | (((IData)(
                                                                                (0x2001010U 
                                                                                == 
                                                                                (0x2007054U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                        << 7U) 
                                                                       | (((IData)(
                                                                                (0x2000030U 
                                                                                == 
                                                                                (0x2007034U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                           << 6U) 
                                                                          | (((IData)(
                                                                                (0x2004020U 
                                                                                == 
                                                                                (0x2004064U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                              << 5U) 
                                                                             | (((IData)(
                                                                                (0x2006020U 
                                                                                == 
                                                                                (0x2006064U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0x1008U 
                                                                                == 
                                                                                (0x1028U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (((((IData)(
                                                                                (0x10400010U 
                                                                                == 
                                                                                (0x10403010U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x10U 
                                                                                == 
                                                                                (0x2000050U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x10U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((((((((((((((((((((IData)(
                                                                                (0x30200073U 
                                                                                == 
                                                                                (0xffffcfffU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0))) 
                                                                                | (IData)(
                                                                                (0x10500073U 
                                                                                == 
                                                                                (0xffffcfffU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0xffefcfbfU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x13U 
                                                                                == 
                                                                                (0xfe00005bU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0xbe00704fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x5013U 
                                                                                == 
                                                                                (0xbe00705bU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0xfc00007bU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x63U 
                                                                                == 
                                                                                (0x707bU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x4063U 
                                                                                == 
                                                                                (0x407fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x13U 
                                                                                == 
                                                                                (0x107bU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x603fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x1073U 
                                                                                == 
                                                                                (0x107fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xffffefffU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0xfU 
                                                                                == 
                                                                                (0xf00fffffU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x2073U 
                                                                                == 
                                                                                (0x207fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x207fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x2013U 
                                                                                == 
                                                                                (0x207bU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x505fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))) 
                                                                                | (IData)(
                                                                                (0x17U 
                                                                                == 
                                                                                (0x5fU 
                                                                                & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)))))))))))))))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_imm 
        = ((0x80000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                            >> 0x15U)))));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_push_pulse 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push) 
           & (~ (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__rf_push_q)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr5 
        = ((0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_count)) 
           & (~ (IData)((0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__block_cnt)))));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr7 
        = ((0U != (((((((((((((((vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U] | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [2U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [5U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                            [6U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [7U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                          [8U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                         [9U]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                        [0xaU]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                       [0xbU]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                      [0xcU]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                     [0xdU]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                    [0xeU]) | vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0xfU])) | (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_overrun));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr6 
        = (((0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tf_count)) 
            & (~ (IData)((0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__block_cnt))))) 
           & (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__tstate)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ti_int 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
            & (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__counter_t))) 
           & (0U != (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in 
        = (1U & (~ (((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                       >> 7U) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                 >> 8U)) | ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                             >> 0x11U) 
                                            & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                               >> 8U))) 
                    | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                       >> 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0xcU) | (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                               >> 3U) & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                         >> 0xbU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                  >> 2U) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                            >> 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_sync_qual 
        = (1U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                   >> 2U) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 3U))) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                            >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns 
        = (1U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 7U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                             & (0U == (0x210U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))))) 
                 & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 3U) & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 3U) & (~ (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                               >> 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted 
        = (1U & (((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                   >> 0x11U) & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                >> 8U)) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                           >> 2U)));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0U] 
        = ((0xfffffffdU & vlSelf->__PVT__axi_intercon__DOT__masters_req[0U]) 
           | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                  >> 2U) & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_path_final 
        = (0x7fffffffU & ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))
                           ? vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__flush_lower_ff__dout
                           : ((1U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout)
                               ? (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout 
                                  >> 1U) : (IData)(
                                                   (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e2_ff__dout 
                                                    >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_err_wb 
        = (IData)((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 2U) & (0U != (0x600U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc3 
        = (0xffU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc3) 
                    << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                  >> 3U) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                               >> 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
        = ((0xffff8001U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U]) 
           | (0xfffffffeU & ((0x7fc0U & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U]) 
                             | (((1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout 
                                         | (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e2_ff__dout)) 
                                        & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                              >> 2U))))
                                  ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1)
                                  : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4)) 
                                << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_wb 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 5U) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                               >> 0xeU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff 
        = (((((0x300U == (0xfffU & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[0U] 
                                    >> 0x13U))) | (0x304U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[0U] 
                                                       >> 0x13U)))) 
             & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U]) 
            & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 0x18U)) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4_raw 
        = (IData)((0x4800000000ULL == (0x4800000000ULL 
                                       & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                  >> 1U) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                               >> 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod 
        = (IData)((((0x1000001U == (0x1000001U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U])) 
                    & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                          >> 1U))) & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                         >> 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4_raw 
        = (IData)((0x4000000000ULL == (0x4800000000ULL 
                                       & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_error_dc4ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_dc5_dc3 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5 
            >> 3U) == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3 
                       >> 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc5 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 1U) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                            & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc5)))));
    vlSelf->__PVT__syscon__DOT__version = (0x80000700U 
                                           | (0xffU 
                                              & vlSelf->__PVT__syscon__DOT__version));
    vlSelf->__PVT__spi__DOT__wfifo__DOT__rp_p1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__rp)));
    vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp_p1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp)));
    vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__enable 
        = ((0xffffffffff000000ULL & vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__enable) 
           | (IData)((IData)((0xfbfdfeU | (((IData)(vlSelf->__PVT__syscon__DOT__Enables_Reg) 
                                            << 0x10U) 
                                           | (((IData)(vlSelf->__PVT__syscon__DOT__Enables_Reg) 
                                               << 8U) 
                                              | (IData)(vlSelf->__PVT__syscon__DOT__Enables_Reg)))))));
    vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__enable 
        = ((0xffff000000ffffffULL & vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__enable) 
           | ((QData)((IData)((0xdfeff7U | (((IData)(vlSelf->__PVT__syscon__DOT__Enables_Reg) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->__PVT__syscon__DOT__Enables_Reg) 
                                                << 8U) 
                                               | (IData)(vlSelf->__PVT__syscon__DOT__Enables_Reg)))))) 
              << 0x18U));
    vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__enable 
        = ((0xffffffffffffULL & vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__enable) 
           | ((QData)((IData)((0x7fbfU | (((IData)(vlSelf->__PVT__syscon__DOT__Enables_Reg) 
                                           << 8U) | (IData)(vlSelf->__PVT__syscon__DOT__Enables_Reg))))) 
              << 0x30U));
    __Vtableidx1 = (0xfU & (vlSelf->__PVT__syscon__DOT__Digits_Reg 
                            >> (0x1cU & (vlSelf->__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q 
                                         >> 0xfU))));
    vlSelf->__PVT__Digits_Bits = Vrvfpgasim__ConstPool__TABLE_h9edcaeff_0
        [__Vtableidx1];
    vlSelf->__PVT__spi__DOT__wfempty = (((IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__wp) 
                                         == (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__rp)) 
                                        & (~ (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__gb)));
    vlSelf->__PVT__spi__DOT__wffull = (((IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__wp) 
                                        == (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__rp)) 
                                       & (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__gb));
    vlSelf->__PVT__spi2__DOT__wfempty = (((IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp) 
                                          == (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp)) 
                                         & (~ (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__gb)));
    vlSelf->__PVT__spi2__DOT__wffull = (((IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__wp) 
                                         == (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__rp)) 
                                        & (IData)(vlSelf->__PVT__spi2__DOT__wfifo__DOT__gb));
    vlSelf->__PVT__spi__DOT__espr = ((0xcU & ((IData)(vlSelf->__PVT__spi__DOT__sper) 
                                              << 2U)) 
                                     | (3U & (IData)(vlSelf->__PVT__spi__DOT__spcr)));
    vlSelf->__PVT__spi2__DOT__espr = ((0xcU & ((IData)(vlSelf->__PVT__spi2__DOT__sper) 
                                               << 2U)) 
                                      | (3U & (IData)(vlSelf->__PVT__spi2__DOT__spcr)));
    vlSelf->__PVT__uart16550_0__DOT__we_o = ((((IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_we_is) 
                                               & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_stb_is)) 
                                              & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_cyc_is)) 
                                             & (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wre));
    __Vtableidx3 = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__block_value 
        = Vrvfpgasim__ConstPool__TABLE_h0d3b6ad1_0[__Vtableidx3];
    __Vtableidx4 = vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr;
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__receiver__DOT__toc_value 
        = Vrvfpgasim__ConstPool__TABLE_h218ca11c_0[__Vtableidx4];
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->__PVT__gpio_module__DOT__wb_dat = ((8U 
                                                & (IData)(vlSelf->__PVT__wb_adr))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__wb_adr))
                                                    ? vlSelf->__PVT__gpio_module__DOT__rgpio_in
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__wb_adr))
                                                     ? vlSelf->__PVT__gpio_module__DOT__rgpio_in
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__wb_adr))
                                                      ? vlSelf->__PVT__gpio_module__DOT__rgpio_nec
                                                      : vlSelf->__PVT__gpio_module__DOT__rgpio_eclk)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__wb_adr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__wb_adr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__wb_adr))
                                                      ? vlSelf->__PVT__gpio_module__DOT__rgpio_ints
                                                      : (IData)(vlSelf->__PVT__gpio_module__DOT__rgpio_ctrl))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__wb_adr))
                                                      ? vlSelf->__PVT__gpio_module__DOT__rgpio_aux
                                                      : vlSelf->__PVT__gpio_module__DOT__rgpio_ptrig))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__wb_adr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__wb_adr))
                                                      ? vlSelf->__PVT__gpio_module__DOT__rgpio_inte
                                                      : vlSelf->__PVT__gpio_module__DOT__rgpio_oe)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__wb_adr))
                                                      ? vlSelf->__PVT__gpio_module__DOT__rgpio_out
                                                      : vlSelf->__PVT__gpio_module__DOT__rgpio_in))));
    vlSelf->__Vcellinp__spi__adr_i = ((1U & (IData)(vlSelf->__PVT__wb_adr))
                                       ? 0U : (7U & 
                                               ((IData)(vlSelf->__PVT__wb_adr) 
                                                >> 1U)));
    vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x7cU & (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | (((0x1400U == (0xffffffc0U & ((IData)(vlSelf->__PVT__wb_adr) 
                                           << 2U))) 
               << 1U) | (0x2000U == (0xfffff000U & 
                                     ((IData)(vlSelf->__PVT__wb_adr) 
                                      << 2U)))));
    vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x73U & (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | (((0x1100U == (0xffffffc0U & ((IData)(vlSelf->__PVT__wb_adr) 
                                           << 2U))) 
               << 3U) | ((0x1200U == (0xffffffc0U & 
                                      ((IData)(vlSelf->__PVT__wb_adr) 
                                       << 2U))) << 2U)));
    vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x4fU & (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | (((0x1000U == (0xffffffc0U & ((IData)(vlSelf->__PVT__wb_adr) 
                                           << 2U))) 
               << 5U) | ((0x1040U == (0xffffffc0U & 
                                      ((IData)(vlSelf->__PVT__wb_adr) 
                                       << 2U))) << 4U)));
    vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = ((0x3fU & (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match)) 
           | ((0U == (0xfffff000U & ((IData)(vlSelf->__PVT__wb_adr) 
                                     << 2U))) << 6U));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[0U] 
        = (2U | ((1U & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[0U]) 
                 | ((IData)(vlSelf->__PVT__io_rdata) 
                    << 4U)));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[1U] 
        = ((1U & ((IData)(vlSelf->__PVT__io_rdata) 
                  >> 0x1cU)) | ((0xeU & ((IData)(vlSelf->__PVT__io_rdata) 
                                         >> 0x1cU)) 
                                | ((IData)((vlSelf->__PVT__io_rdata 
                                            >> 0x20U)) 
                                   << 4U)));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xfffff800U & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | ((1U & ((IData)((vlSelf->__PVT__io_rdata 
                              >> 0x20U)) >> 0x1cU)) 
              | (((IData)(vlSelf->__PVT__io_rvalid) 
                  << 0xaU) | (((IData)(vlSelf->__PVT__io_rid) 
                               << 4U) | (0xeU & ((IData)(
                                                         (vlSelf->__PVT__io_rdata 
                                                          >> 0x20U)) 
                                                 >> 0x1cU))))));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xff000fffU & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (0xfffff000U & ((((IData)(vlSelf->__PVT__io_awready) 
                               << 0x17U) | ((IData)(vlSelf->__PVT__io_arready) 
                                            << 0x16U)) 
                             | (((IData)(vlSelf->__PVT__io_wready) 
                                 << 0x15U) | (((IData)(vlSelf->__PVT__io_bvalid) 
                                               << 0x14U) 
                                              | ((IData)(vlSelf->__PVT__io_bid) 
                                                 << 0xeU))))));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = (0x2000000U | ((0x1ffffffU & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U]) 
                         | ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata) 
                            << 0x1cU)));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[3U] 
        = ((0x1ffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata) 
                          >> 4U)) | ((0xe000000U & 
                                      ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata) 
                                       >> 4U)) | ((IData)(
                                                          (vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata 
                                                           >> 0x20U)) 
                                                  << 0x1cU)));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[4U] 
        = ((0x1ffffffU & ((IData)((vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata 
                                   >> 0x20U)) >> 4U)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rid) 
               << 0x1cU) | (0xe000000U & ((IData)((vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rdata 
                                                   >> 0x20U)) 
                                          >> 4U))));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[5U] 
        = ((0xfff8U & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[5U]) 
           | (0xffffU & ((0x1fffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rvalid) 
                                        << 2U)) | (0x1ffffffU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_rid) 
                                                      >> 4U)))));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[5U] 
        = ((0xfU & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[5U]) 
           | (0xfff0U & ((((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_awready) 
                           << 0xfU) | ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_arready) 
                                       << 0xeU)) | 
                         (((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_wready) 
                           << 0xdU) | (((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bvalid) 
                                        << 0xcU) | 
                                       ((IData)(vlSymsp->TOP__rvfpgasim__ram.__PVT__o_bid) 
                                        << 6U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset_reg__DOT__din_new 
        = ((~ (((IData)((0x4040000000ULL == (0x1fc40000000ULL 
                                             & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
               & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))) 
           & ((((IData)((0x4000000008ULL == (0x1fc00000008ULL 
                                             & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
               & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0 
        = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0xf400000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0 
        = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0xe400000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren 
        = ((IData)(((0x4000000000ULL == (0x1fc00000000ULL 
                                         & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en))) 
           & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren 
        = ((IData)(((0x5c00000000ULL == (0x1fc00000000ULL 
                                         & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en))) 
           & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren 
        = (((IData)(((0xe000000000ULL == (0x1fc00000000ULL 
                                          & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                     & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en))) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0 
        = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0xf000000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] = 0x3020100U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] = 0x7060504U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
        = (0xffff08U | (0xff000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] = 0x3020100U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] = 0x7060504U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
        = (0xffff08U | (0xff000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[1U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[1U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[2U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[2U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[3U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[3U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[4U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[4U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[5U] 
        = vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[5U];
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U] 
        = ((0xfe000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U]) 
           | (0x1ffffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[6U]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
        = ((0x7ffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U]) 
           | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[7U] 
               << 0x12U) | (0x3f800U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[6U] 
                                        >> 0xeU))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x15U] 
        = ((0x7ffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[7U] 
                      >> 0xeU)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[8U] 
                                    << 0x12U) | (0x3f800U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[7U] 
                                                    >> 0xeU))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
        = ((0x7ffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[8U] 
                      >> 0xeU)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[9U] 
                                    << 0x12U) | (0x3f800U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[8U] 
                                                    >> 0xeU))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x17U] 
        = ((0x7ffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[9U] 
                      >> 0xeU)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xaU] 
                                    << 0x12U) | (0x3f800U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[9U] 
                                                    >> 0xeU))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x18U] 
        = ((0x7ffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xaU] 
                      >> 0xeU)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xbU] 
                                    << 0x12U) | (0x3f800U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xaU] 
                                                    >> 0xeU))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x19U] 
        = ((0x7ffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xbU] 
                      >> 0xeU)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xcU] 
                                    << 0x12U) | (0x3f800U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xbU] 
                                                    >> 0xeU))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1aU] 
        = ((0x7ffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xcU] 
                      >> 0xeU)) | (0xfffff800U & ((
                                                   vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
                                                   << 0x12U) 
                                                  | (0x3f800U 
                                                     & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xcU] 
                                                        >> 0xeU)))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU] 
        = ((0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU]) 
           | (0xfU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
                      >> 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U] 
        = ((0x1ffffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[6U]) 
           | (0xfe000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[7U] 
        = (((0x1ffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x15U] 
                           << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x14U] 
                                        >> 0x12U)) 
           | (0xfe000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x15U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[8U] 
        = (((0x1ffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x16U] 
                           << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x15U] 
                                        >> 0x12U)) 
           | (0xfe000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x16U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[9U] 
        = (((0x1ffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x17U] 
                           << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x16U] 
                                        >> 0x12U)) 
           | (0xfe000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x17U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xaU] 
        = (((0x1ffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x18U] 
                           << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x17U] 
                                        >> 0x12U)) 
           | (0xfe000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x18U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xbU] 
        = (((0x1ffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x19U] 
                           << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x18U] 
                                        >> 0x12U)) 
           | (0xfe000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x19U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xcU] 
        = (((0x1ffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1aU] 
                           << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x19U] 
                                        >> 0x12U)) 
           | (0xfe000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1aU] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
        = ((0xfffc0000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU]) 
           | (0x3ffffU & ((0x1ffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1bU] 
                                         << 0xeU)) 
                          | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1aU] 
                             >> 0x12U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU] 
        = ((0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1bU]) 
           | (0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1bU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1cU] 
        = ((0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1cU]) 
           | (0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1cU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1dU] 
        = ((0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1dU]) 
           | (0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1dU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1eU] 
        = ((0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1eU]) 
           | (0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1eU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x1fU] 
        = ((0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1fU]) 
           | (0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x1fU]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x20U] 
        = ((0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x20U]) 
           | (0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x20U]));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
        = ((0xe0000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U]) 
           | ((0xfU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U]) 
              | (0x1ffffff0U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U])));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
        = ((0x3ffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xdU]) 
           | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x29U] 
               << 0x1cU) | (0xffc0000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x28U] 
                                          >> 4U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xeU] 
        = ((0x3ffffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x29U] 
                        >> 4U)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2aU] 
                                    << 0x1cU) | (0xffc0000U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x29U] 
                                                    >> 4U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
        = ((0x3ffffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2aU] 
                        >> 4U)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2bU] 
                                    << 0x1cU) | (0xffc0000U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2aU] 
                                                    >> 4U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x10U] 
        = ((0x3ffffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2bU] 
                        >> 4U)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2cU] 
                                    << 0x1cU) | (0xffc0000U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2bU] 
                                                    >> 4U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x11U] 
        = ((0x3ffffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2cU] 
                        >> 4U)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2dU] 
                                    << 0x1cU) | (0xffc0000U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2cU] 
                                                    >> 4U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x12U] 
        = ((0x3ffffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2dU] 
                        >> 4U)) | ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2eU] 
                                    << 0x1cU) | (0xffc0000U 
                                                 & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2dU] 
                                                    >> 4U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x13U] 
        = ((0x3ffffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2eU] 
                        >> 4U)) | (0xfffc0000U & ((
                                                   vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2fU] 
                                                   << 0x1cU) 
                                                  | (0xffc0000U 
                                                     & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2eU] 
                                                        >> 4U)))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
        = ((0xfffff800U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x14U]) 
           | (0x7ffU & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2fU] 
                        >> 4U)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
        = ((0x1fffffffU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x21U]) 
           | (0xe0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2fU] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x22U] 
        = (((0x1fffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x30U] 
                            << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x2fU] 
                                         >> 0x12U)) 
           | (0xe0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x30U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x23U] 
        = (((0x1fffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x31U] 
                            << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x30U] 
                                         >> 0x12U)) 
           | (0xe0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x31U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x24U] 
        = (((0x1fffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x32U] 
                            << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x31U] 
                                         >> 0x12U)) 
           | (0xe0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x32U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x25U] 
        = (((0x1fffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x33U] 
                            << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x32U] 
                                         >> 0x12U)) 
           | (0xe0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x33U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x26U] 
        = (((0x1fffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x34U] 
                            << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x33U] 
                                         >> 0x12U)) 
           | (0xe0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x34U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x27U] 
        = (((0x1fffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x35U] 
                            << 0xeU)) | (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x34U] 
                                         >> 0x12U)) 
           | (0xe0000000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x35U] 
                             << 0xeU)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__mst_reqs[0x28U] 
        = (0x3fffffU & ((0x1fffc000U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U] 
                                        << 0xeU)) | 
                        (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x35U] 
                         >> 0x12U)));
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        if ((0x40000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
            } else {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
            }
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
        }
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
        if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
        }
    }
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        if ((0x20000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
            } else {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
            }
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
        }
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
        if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
        }
    }
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        if ((0x100U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
            } else {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
            }
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
        }
    } else {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
        if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
        } else {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x40000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU])) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x20000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U])) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x100U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U])) {
            vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x40000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
            }
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x20000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
            }
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x100U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
            }
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xfU] 
                     >> 0x16U));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x24U] 
                     >> 1U));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((0U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x38U] 
                     >> 0xcU));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x40000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            }
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x20000000U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            }
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((0x100U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U])) {
            if ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            }
        }
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0xdU] 
            >> 0x13U) & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x21U] 
            >> 0x1eU) & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x36U] 
            >> 9U) & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x12U] 
            >> 2U) & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x26U] 
            >> 0xdU) & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__slv_reqs[0x3aU] 
            >> 0x18U) & (4U != (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__0__KET____DOT__dccm_bank__CLK 
        = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk));
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__1__KET____DOT__dccm_bank__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk) 
                 >> 1U));
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__2__KET____DOT__dccm_bank__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk) 
                 >> 2U));
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__3__KET____DOT__dccm_bank__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk) 
                 >> 3U));
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__4__KET____DOT__dccm_bank__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk) 
                 >> 4U));
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__5__KET____DOT__dccm_bank__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk) 
                 >> 5U));
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__6__KET____DOT__dccm_bank__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk) 
                 >> 6U));
    vlSelf->swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__7__KET____DOT__dccm_bank__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_clk) 
                 >> 7U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 1U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 2U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 3U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 4U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 5U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 6U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 7U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 8U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 9U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 0xaU));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 0xbU));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 0xcU));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 0xdU));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 0xeU));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_way_clk) 
                 >> 0xfU));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK 
        = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_clk));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_clk) 
                 >> 1U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_clk) 
                 >> 2U));
    vlSelf->swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_clk) 
                 >> 3U));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rda_int 
        = ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
           & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rf_count) 
              >= (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__trigger_level)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__rls_int 
        = (IData)((((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
                    >> 2U) & (0U != (0x1eU & (IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr)))));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__thre_int 
        = (1U & (((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__ier) 
                  >> 1U) & ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr) 
                            >> 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip_ns 
        = (((((0U != (0x7ffffffU & (((IData)(1U) << 
                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdccmect 
                                      >> 0x1bU)) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdccmect))) 
              | (0U != (0x7ffffffU & (((IData)(1U) 
                                       << (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect 
                                           >> 0x1bU)) 
                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect)))) 
             | (0U != (0x7ffffffU & (((IData)(1U) << 
                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect 
                                       >> 0x1bU)) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect)))) 
            << 5U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns) 
                       << 4U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns) 
                                  << 3U) | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__mexintpend) 
                                             << 2U) 
                                            | ((2U 
                                                & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                   >> 3U)) 
                                               | (1U 
                                                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip)))))));
    vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              (3U 
                                                                               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_wr_parity)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff))));
    vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[1U] = 
        (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff 
                   >> 0x20U)) << 2U) | (IData)(((((QData)((IData)(
                                                                  (3U 
                                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_wr_parity)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff))) 
                                                >> 0x20U)));
    vlSelf->__PVT__swerv_eh1__DOT__ic_wr_data[2U] = 
        ((0xcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_wr_parity)) 
         | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_rdata_ff 
                     >> 0x20U)) >> 0x1eU));
    vlSelf->io_data__out = ((((((((((((((((((((((((
                                                   ((((((((1U 
                                                           & (vlSelf->io_data__out__out32 
                                                              & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)) 
                                                          | (2U 
                                                             & (vlSelf->io_data__out__out33 
                                                                & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                         | (4U 
                                                            & (vlSelf->io_data__out__out34 
                                                               & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                        | (8U 
                                                           & (vlSelf->io_data__out__out35 
                                                              & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                       | (0x10U 
                                                          & (vlSelf->io_data__out__out36 
                                                             & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                      | (0x20U 
                                                         & (vlSelf->io_data__out__out37 
                                                            & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                     | (0x40U 
                                                        & (vlSelf->io_data__out__out38 
                                                           & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                    | (0x80U 
                                                       & (vlSelf->io_data__out__out39 
                                                          & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                   | (0x100U 
                                                      & (vlSelf->io_data__out__out40 
                                                         & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                  | (0x200U 
                                                     & (vlSelf->io_data__out__out41 
                                                        & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                 | (0x400U 
                                                    & (vlSelf->io_data__out__out42 
                                                       & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                                | (0x800U 
                                                   & (vlSelf->io_data__out__out43 
                                                      & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                               | (0x1000U 
                                                  & (vlSelf->io_data__out__out44 
                                                     & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                              | (0x2000U 
                                                 & (vlSelf->io_data__out__out45 
                                                    & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                             | (0x4000U 
                                                & (vlSelf->io_data__out__out46 
                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                            | (0x8000U 
                                               & (vlSelf->io_data__out__out47 
                                                  & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                           | (0x10000U 
                                              & (vlSelf->io_data__out__out48 
                                                 & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                          | (0x20000U 
                                             & (vlSelf->io_data__out__out49 
                                                & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                         | (0x40000U 
                                            & (vlSelf->io_data__out__out50 
                                               & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                        | (0x80000U 
                                           & (vlSelf->io_data__out__out51 
                                              & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                       | (0x100000U 
                                          & (vlSelf->io_data__out__out52 
                                             & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                      | (0x200000U 
                                         & (vlSelf->io_data__out__out53 
                                            & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                     | (0x400000U & 
                                        (vlSelf->io_data__out__out54 
                                         & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                    | (0x800000U & 
                                       (vlSelf->io_data__out__out55 
                                        & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                   | (0x1000000U & 
                                      (vlSelf->io_data__out__out56 
                                       & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                  | (0x2000000U & (vlSelf->io_data__out__out57 
                                                   & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                 | (0x4000000U & (vlSelf->io_data__out__out58 
                                                  & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                                | (0x8000000U & (vlSelf->io_data__out__out59 
                                                 & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                               | (0x10000000U & (vlSelf->io_data__out__out60 
                                                 & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                              | (0x20000000U & (vlSelf->io_data__out__out61 
                                                & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                             | (0x40000000U & (vlSelf->io_data__out__out62 
                                               & vlSelf->__PVT__gpio_module__DOT__rgpio_oe))) 
                            | (0x80000000U & (vlSelf->io_data__out__out63 
                                              & vlSelf->__PVT__gpio_module__DOT__rgpio_oe)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((0x100U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_we))
                    ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                    : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intpriority_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x100U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_we))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__intenable_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__DOT____Vcellinp__dffs__din 
        = (3U & ((0x100U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_we))
                  ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__picm_wr_data_ff
                  : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__gw_config_ff__dout)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status = 0U;
    if ((0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U]);
    }
    if ((1U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 3U));
    }
    if ((2U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 6U));
    }
    if ((3U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 9U));
    }
    if ((4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0xcU));
    }
    if ((5U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0xfU));
    }
    if ((6U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0x12U));
    }
    if ((7U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0x15U));
    }
    if ((8U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0x18U));
    }
    if ((9U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                     >> 0x1bU));
    }
    if ((0xaU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                      << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[0U] 
                                >> 0x1eU)));
    }
    if ((0xbU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 1U));
    }
    if ((0xcU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 4U));
    }
    if ((0xdU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 7U));
    }
    if ((0xeU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0xaU));
    }
    if ((0xfU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0xdU));
    }
    if ((0x10U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0x10U));
    }
    if ((0x11U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0x13U));
    }
    if ((0x12U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0x16U));
    }
    if ((0x13U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0x19U));
    }
    if ((0x14U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                     >> 0x1cU));
    }
    if ((0x15U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                      << 1U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[1U] 
                                >> 0x1fU)));
    }
    if ((0x16U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 2U));
    }
    if ((0x17U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 5U));
    }
    if ((0x18U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 8U));
    }
    if ((0x19U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0xbU));
    }
    if ((0x1aU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0xeU));
    }
    if ((0x1bU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0x11U));
    }
    if ((0x1cU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0x14U));
    }
    if ((0x1dU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0x17U));
    }
    if ((0x1eU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
                     >> 0x1aU));
    }
    if ((0x1fU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[2U] 
               >> 0x1dU);
    }
    if ((0x20U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U]);
    }
    if ((0x21U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 3U));
    }
    if ((0x22U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 6U));
    }
    if ((0x23U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 9U));
    }
    if ((0x24U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0xcU));
    }
    if ((0x25U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0xfU));
    }
    if ((0x26U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0x12U));
    }
    if ((0x27U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0x15U));
    }
    if ((0x28U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0x18U));
    }
    if ((0x29U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                     >> 0x1bU));
    }
    if ((0x2aU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                      << 2U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[3U] 
                                >> 0x1eU)));
    }
    if ((0x2bU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 1U));
    }
    if ((0x2cU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 4U));
    }
    if ((0x2dU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 7U));
    }
    if ((0x2eU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0xaU));
    }
    if ((0x2fU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0xdU));
    }
    if ((0x30U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0x10U));
    }
    if ((0x31U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0x13U));
    }
    if ((0x32U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0x16U));
    }
    if ((0x33U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0x19U));
    }
    if ((0x34U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                     >> 0x1cU));
    }
    if ((0x35U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                      << 1U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[4U] 
                                >> 0x1fU)));
    }
    if ((0x36U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 2U));
    }
    if ((0x37U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 5U));
    }
    if ((0x38U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 8U));
    }
    if ((0x39U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0xbU));
    }
    if ((0x3aU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0xeU));
    }
    if ((0x3bU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0x11U));
    }
    if ((0x3cU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0x14U));
    }
    if ((0x3dU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0x17U));
    }
    if ((0x3eU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
                     >> 0x1aU));
    }
    if ((0x3fU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status 
            = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_out[5U] 
               >> 0x1dU);
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pred_correct_npc_e2 
        = ((0x7ffff000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pred_correct_npc_e2) 
           | (0xfffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__last_pc_e2 
                        + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2brpcff__dout))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__ibradder_correct__DOT__cout 
        = (1U & (((0xfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__last_pc_e2) 
                  + (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2brpcff__dout)) 
                 >> 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_eff 
        = ((IData)((0xaU == (0xaU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout))))
            ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_c__DOT__dout_temp 
                << 1U) | (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz 
        = ((0xbU >= (0xfU & ((IData)(3U) * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))))
            ? (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz) 
                     >> (0xfU & ((IData)(3U) * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)))))
            : 0U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_sz 
        = ((0xbU >= (0xfU & ((IData)(3U) * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))))
            ? (7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz) 
                     >> (0xfU & ((IData)(3U) * (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))))
            : 0U);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__add 
        = (1U & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff 
                           >> 0x20U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__rem_correct)) 
                 ^ (IData)((6U == (6U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_incr 
        = (((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3h)) 
              << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3))) 
            + (QData)((IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb) 
                                     >> 1U))))) + (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_incr 
        = (((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4h)) 
              << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4))) 
            + (QData)((IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb) 
                                     >> 3U))))) + (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb) 
                                                                      >> 2U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_incr 
        = (((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5h)) 
              << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5))) 
            + (QData)((IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb) 
                                     >> 5U))))) + (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb) 
                                                                      >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_incr 
        = (((((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6h)) 
              << 0x20U) | (QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6))) 
            + (QData)((IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb) 
                                     >> 7U))))) + (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_wb) 
                                                                      >> 6U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_cls 
        = (((((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__short_dividend 
                          >> 0x20U))) & (0U != (0xffU 
                                                & (IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__short_dividend 
                                                           >> 0x18U))))) 
             | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__short_dividend 
                         >> 0x20U)) & (0x1ffU != (0x1ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__short_dividend 
                                                             >> 0x17U)))))) 
            << 2U) | (((((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__short_dividend 
                                     >> 0x20U))) & 
                         (0U != (0xffU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__short_dividend 
                                                  >> 0x10U))))) 
                        | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__short_dividend 
                                    >> 0x20U)) & (0xffU 
                                                  != 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__short_dividend 
                                                              >> 0xfU)))))) 
                       << 1U) | (((~ (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__short_dividend 
                                              >> 0x20U))) 
                                  & (0U != (0xffU & (IData)(
                                                            (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__short_dividend 
                                                             >> 8U))))) 
                                 | ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__short_dividend 
                                             >> 0x20U)) 
                                    & (0xffU != (0xffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__short_dividend 
                                                            >> 7U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr 
        = (3U & (((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                   << 5U))) ? 0U : 
                  (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
                   (((IData)(1U) + (0x7fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                             << 5U))) 
                    >> 5U)] << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                     << 5U))))) 
                 | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
                    (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr))] 
                    >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                 << 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
        = ((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
                  (3U & (((IData)(2U) + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                         << 5U)) >> 5U))] 
                  >> (0x1fU & ((IData)(2U) + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                              << 5U)))))
            ? (((0U == (0x1fU & ((IData)(0x20U) + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                   << 6U))))
                 ? 0U : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                         (((IData)(0x1fU) + (0xffU 
                                             & ((IData)(0x20U) 
                                                + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                   << 6U)))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                   << 6U)))))) 
               | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                  (7U & (((IData)(0x20U) + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                            << 6U)) 
                         >> 5U))] >> (0x1fU & ((IData)(0x20U) 
                                               + ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                  << 6U)))))
            : (((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                 << 6U))) ? 0U : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                        << 6U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                                       << 6U))))) 
               | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                  (6U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                         << 1U))] >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                               << 6U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_addr 
        = (((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                             << 5U))) ? 0U : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
                                              (((IData)(0x1fU) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                      << 5U))))) 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[
              (3U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))] 
              >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                           << 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[2U] 
        = ((0x1fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[2U]) 
           | (0xe0000000U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[2U] 
                              << 0x1fU) | (0x60000000U 
                                           & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[1U] 
                                              >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[3U] 
        = (0xfffffffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[2U] 
                         >> 1U));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
            & ((0U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
            & ((1U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
            & ((2U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
            & ((3U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
            & ((4U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
            & ((5U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
            & ((6U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
            & ((7U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
               & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__0__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 1U) & ((0U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 1U) & ((1U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 1U) & ((2U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 1U) & ((3U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 1U) & ((4U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 1U) & ((5U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 1U) & ((6U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 1U) & ((7U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__1__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 2U) & ((0U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 2U) & ((1U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 2U) & ((2U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 2U) & ((3U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 2U) & ((4U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 2U) & ((5U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 2U) & ((6U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 2U) & ((7U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__2__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 3U) & ((0U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 3U) & ((1U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 3U) & ((2U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 3U) & ((3U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 3U) & ((4U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 3U) & ((5U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 3U) & ((6U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 3U) & ((7U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__3__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 4U) & ((0U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 4U) & ((1U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 4U) & ((2U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 4U) & ((3U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 4U) & ((4U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 4U) & ((5U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 4U) & ((6U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 4U) & ((7U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__4__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 5U) & ((0U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 5U) & ((1U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 5U) & ((2U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 5U) & ((3U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 5U) & ((4U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 5U) & ((5U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 5U) & ((6U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 5U) & ((7U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__5__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 6U) & ((0U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 6U) & ((1U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 6U) & ((2U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 6U) & ((3U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 6U) & ((4U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 6U) & ((5U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 6U) & ((6U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 6U) & ((7U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__6__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 7U) & ((0U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__0__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 7U) & ((1U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__1__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 7U) & ((2U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__2__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 7U) & ((3U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__3__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 7U) & ((4U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__4__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 7U) & ((5U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__5__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 7U) & ((6U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__6__KET____DOT__ic_way_status__dout));
    vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clken) 
             >> 7U) & ((7U == (7U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__status_wr_addr_ff__dout))) 
                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_wr_en_ff)))
            ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_ff)
            : (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__CLK_GRP_WAY_STATUS__BRA__7__KET____DOT__WAY_STATUS__BRA__7__KET____DOT__ic_way_status__dout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2)) 
           | (1U & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__use_mp_way))
                     ? ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                        >> 3U) : (0U != (0xfU & (((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2)) 
                                                 & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__btb_lru_ff__dout) 
                                                    >> 0xcU)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2)) 
           | (2U & (((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__use_mp_way))
                      ? ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                         >> 3U) : (0U != (0xfU & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2)) 
                                                  & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__btb_lru_ff__dout) 
                                                     >> 8U))))) 
                    << 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2)) 
           | (4U & (((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__use_mp_way))
                      ? ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                         >> 3U) : (0U != (0xfU & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2)) 
                                                  & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__btb_lru_ff__dout) 
                                                     >> 4U))))) 
                    << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2)) 
           | (8U & (((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__use_mp_way))
                      ? ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                         >> 3U) : (0U != (0xfU & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2)) 
                                                  & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__btb_lru_ff__dout))))) 
                    << 3U)));
    __Vtemp_h1f336ae2__0[0U] = (IData)((QData)((IData)(
                                                       vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[0U])));
    __Vtemp_h1f336ae2__0[1U] = ((vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[1U] 
                                 << 2U) | (IData)(((QData)((IData)(
                                                                   vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[0U])) 
                                                   >> 0x20U)));
    __Vtemp_h1f336ae2__0[2U] = (vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[1U] 
                                >> 0x1eU);
    VL_EXTEND_WW(68,66, __Vtemp_ha79e3b5e__0, __Vtemp_h1f336ae2__0);
    __Vtemp_hdfc4d498__0[0U] = __Vtemp_ha79e3b5e__0[0U];
    __Vtemp_hdfc4d498__0[1U] = __Vtemp_ha79e3b5e__0[1U];
    __Vtemp_hdfc4d498__0[2U] = ((vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[2U] 
                                 << 4U) | __Vtemp_ha79e3b5e__0[2U]);
    __Vtemp_hdfc4d498__0[3U] = (vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[2U] 
                                >> 0x1cU);
    VL_EXTEND_WW(102,100, __Vtemp_h62cb3cc5__0, __Vtemp_hdfc4d498__0);
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U] 
        = __Vtemp_h62cb3cc5__0[0U];
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U] 
        = __Vtemp_h62cb3cc5__0[1U];
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U] 
        = __Vtemp_h62cb3cc5__0[2U];
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U] 
        = (((IData)((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[3U]))) 
            << 6U) | __Vtemp_h62cb3cc5__0[3U]);
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U] 
        = (((IData)((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[3U]))) 
            >> 0x1aU) | ((IData)(((QData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__ic_premux_data[3U])) 
                                  >> 0x20U)) << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__pcout 
        = ((0xfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__pcout) 
           | (0x7ffff000U & (((0xfffff000U & (((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                                >> 0xbU) 
                                                               ^ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__ibradder__DOT__cout)))))) 
                                               << 0xcU) 
                                              & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout)) 
                              | (((- (IData)(((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                  >> 0xbU)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__ibradder__DOT__cout)))) 
                                  & ((IData)(1U) + 
                                     (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout 
                                      >> 0xcU))) << 0xcU)) 
                             | (((- (IData)((IData)(
                                                    (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                      >> 0xbU) 
                                                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__ibradder__DOT__cout)))))) 
                                 & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout 
                                     >> 0xcU) - (IData)(1U))) 
                                << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__pcout 
        = ((0xfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__pcout) 
           | (0x7ffff000U & (((0xfffff000U & (((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                                >> 0xbU) 
                                                               ^ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__ibradder__DOT__cout)))))) 
                                               << 0xcU) 
                                              & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout)) 
                              | (((- (IData)(((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                  >> 0xbU)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__ibradder__DOT__cout)))) 
                                  & ((IData)(1U) + 
                                     (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout 
                                      >> 0xcU))) << 0xcU)) 
                             | (((- (IData)((IData)(
                                                    (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout) 
                                                      >> 0xbU) 
                                                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__ibradder__DOT__cout)))))) 
                                 & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout 
                                     >> 0xcU) - (IData)(1U))) 
                                << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out = 0U;
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg));
    }
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                     >> 1U));
    }
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                     >> 2U));
    }
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                     >> 3U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                     >> 4U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                     >> 5U));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                     >> 6U));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                     >> 7U));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_rd_out 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intenable_reg) 
                     >> 8U));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_data_any 
        = (((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                             << 5U))) ? 0U : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[
                                              (((IData)(0x1fU) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                                                      << 5U))))) 
           | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data[
              (7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))] 
              >> (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                           << 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__aout 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__a_ff 
            + vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__bm) 
           + (IData)((QData)((IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout 
                                            >> 7U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__aout 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__a_ff 
            + vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__bm) 
           + (IData)((QData)((IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout 
                                            >> 7U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                 >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
    if ((8U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
        } else if ((2U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 = 0U;
        } else if ((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1 
                = (IData)((0x10000U == (0x17000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg)));
        }
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned 
        = (((IData)(((0x20000U == (0xe0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg)) 
                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg)) 
            | (IData)(((0x40000U == (0xe0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg)) 
                       & (0U != (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg))))) 
           | (IData)(((0x60000U == (0xe0000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg)) 
                      & (0U != (7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_any 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld) 
                 >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_any 
        = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                                        << 4U))) ? 0U
                        : (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[
                           (((IData)(0xfU) + (0x7fU 
                                              & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                                                 << 4U))) 
                            >> 5U)] << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                                            << 4U))))) 
                      | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[
                         (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                                >> 1U))] >> (0x1fU 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr) 
                                                << 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = (1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                  ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 2U)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending) 
                                & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we) 
                                      >> 1U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = (1U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                   >> 1U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 4U)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending) 
                                        & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we) 
                                              >> 2U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = (1U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                   >> 2U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 6U)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending) 
                                        & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we) 
                                              >> 3U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = (1U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                   >> 3U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 8U)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending) 
                                        & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we) 
                                              >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = (1U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                   >> 4U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0xaU)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending) 
                                          & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we) 
                                                >> 5U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = (1U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                   >> 5U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0xcU)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending) 
                                          & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we) 
                                                >> 6U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = (1U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                   >> 6U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0xeU)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending) 
                                          & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we) 
                                                >> 7U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending_in 
        = (1U & ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                   >> 7U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 0x10U)) | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending) 
                                           & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_clear_reg_we) 
                                                 >> 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out = 0U;
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg);
    }
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 2U));
    }
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 4U));
    }
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 6U));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 8U));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 0xaU));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 0xcU));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 0xeU));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_rd_out 
            = (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                     >> 0x10U));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0x1fdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw)) 
           | (2U & (((8U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg)
                      ? (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                          ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                             >> 2U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__1__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
                      : ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                         ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                            >> 2U))) << 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0x1fbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw)) 
           | (4U & (((0x20U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg)
                      ? ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                           >> 1U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                     >> 4U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__2__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
                      : (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                          >> 1U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                    >> 4U))) << 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0x1f7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw)) 
           | (8U & (((0x80U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg)
                      ? ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                           >> 2U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                     >> 6U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__3__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
                      : (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                          >> 2U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                    >> 6U))) << 3U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0x1efU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw)) 
           | (0x10U & (((0x200U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg)
                         ? ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                              >> 3U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 8U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__4__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
                         : (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                             >> 3U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                       >> 8U))) << 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0x1dfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw)) 
           | (0x20U & (((0x800U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg)
                         ? ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                              >> 4U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 0xaU)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__5__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
                         : (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                             >> 4U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                       >> 0xaU))) << 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0x1bfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw)) 
           | (0x40U & (((0x2000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg)
                         ? ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                              >> 5U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 0xcU)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__6__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
                         : (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                             >> 5U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                       >> 0xcU))) << 6U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0x17fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw)) 
           | (0x80U & (((0x8000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg)
                         ? ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                              >> 6U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 0xeU)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__7__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
                         : (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                             >> 6U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                       >> 0xeU))) << 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw 
        = ((0xffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__extintsrc_req_gw)) 
           | (0x100U & (((0x20000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg)
                          ? ((((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                               >> 7U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                         >> 0x10U)) 
                             | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__SETREG__BRA__8__KET____DOT__NON_ZERO_INT__DOT__config_gw_inst__DOT__gw_int_pending))
                          : (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__sync_inst__dout) 
                              >> 7U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__gw_config_reg 
                                        >> 0x10U))) 
                        << 8U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_addr_in_pic_any 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                 >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out = 0U;
    if ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg));
    }
    if ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                               >> 4U)));
    }
    if ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                               >> 8U)));
    }
    if ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                               >> 0xcU)));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                               >> 0x10U)));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                               >> 0x14U)));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                               >> 0x18U)));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                               >> 0x1cU)));
    }
    if ((0x100U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_re))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_rd_out 
            = (0xfU & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                               >> 0x20U)));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv 
        = ((0xffffffff0ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv) 
           | (IData)((IData)((0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                                       ? (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg))
                                       : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv 
        = ((0xfffffff0fULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv) 
           | ((QData)((IData)((0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                                        ? (~ (IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                                                      >> 4U)))
                                        : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                                                   >> 4U)))))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv 
        = ((0xffffff0ffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv) 
           | ((QData)((IData)((0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                                        ? (~ (IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                                                      >> 8U)))
                                        : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                                                   >> 8U)))))) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv 
        = ((0xfffff0fffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv) 
           | ((QData)((IData)((0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                                        ? (~ (IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                                                      >> 0xcU)))
                                        : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                                                   >> 0xcU)))))) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv 
        = ((0xffff0ffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv) 
           | ((QData)((IData)((0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                                        ? (~ (IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                                                      >> 0x10U)))
                                        : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                                                   >> 0x10U)))))) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv 
        = ((0xfff0fffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv) 
           | ((QData)((IData)((0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                                        ? (~ (IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                                                      >> 0x14U)))
                                        : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                                                   >> 0x14U)))))) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv 
        = ((0xff0ffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv) 
           | ((QData)((IData)((0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                                        ? (~ (IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                                                      >> 0x18U)))
                                        : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                                                   >> 0x18U)))))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv 
        = ((0xf0fffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv) 
           | ((QData)((IData)((0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                                        ? (~ (IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                                                      >> 0x1cU)))
                                        : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                                                   >> 0x1cU)))))) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv 
        = ((0xffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg_inv) 
           | ((QData)((IData)((0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                                        ? (~ (IData)(
                                                     (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                                                      >> 0x20U)))
                                        : (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__intpriority_reg 
                                                   >> 0x20U)))))) 
              << 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq = 0U;
    if ((0U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      << 3U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        << 2U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U]))));
    }
    if ((1U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      << 2U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        << 1U)) | (
                                                   (2U 
                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U]) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 1U)))));
    }
    if ((2U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      << 1U)) | ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U]) 
                                 | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                           >> 1U)) 
                                    | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 2U)))));
    }
    if ((3U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U]) 
               | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                         >> 1U)) | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                           >> 2U)) 
                                    | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                             >> 3U)))));
    }
    if ((4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 1U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 2U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 4U)))));
    }
    if ((5U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 2U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 3U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 5U)))));
    }
    if ((6U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 3U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 4U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       >> 5U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 6U)))));
    }
    if ((7U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 4U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 5U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 7U)))));
    }
    if ((8U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 5U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 6U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       >> 7U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 8U)))));
    }
    if ((9U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 6U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 7U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       >> 8U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 9U)))));
    }
    if ((0xaU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 7U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 8U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       >> 9U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 0xaU)))));
    }
    if ((0xbU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 8U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 9U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                                       >> 0xaU)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                         >> 0xbU)))));
    }
    if ((0xcU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 9U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                        >> 0xaU)) | 
                                 ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                           >> 0xcU)))));
    }
    if ((0xdU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0xaU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0xbU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                             >> 0xcU)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                               >> 0xdU)))));
    }
    if ((0xeU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0xbU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0xcU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                             >> 0xdU)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                               >> 0xeU)))));
    }
    if ((0xfU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0xcU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0xdU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                             >> 0xeU)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                               >> 0xfU)))));
    }
    if ((0x10U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0xdU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0xeU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                             >> 0xfU)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                               >> 0x10U)))));
    }
    if ((0x11U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0xeU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0xfU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                             >> 0x10U)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                               >> 0x11U)))));
    }
    if ((0x12U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0xfU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                          >> 0x10U)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                             >> 0x11U)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                               >> 0x12U)))));
    }
    if ((0x13U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x10U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x11U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x12U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x13U)))));
    }
    if ((0x14U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x11U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x12U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x13U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x14U)))));
    }
    if ((0x15U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x12U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x13U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x14U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x15U)))));
    }
    if ((0x16U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x13U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x14U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x15U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x16U)))));
    }
    if ((0x17U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x14U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x15U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x16U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x17U)))));
    }
    if ((0x18U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x15U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x16U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x17U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x18U)))));
    }
    if ((0x19U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x16U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x17U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x18U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x19U)))));
    }
    if ((0x1aU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x17U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x18U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x19U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x1aU)))));
    }
    if ((0x1bU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x18U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x19U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x1aU)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x1bU)))));
    }
    if ((0x1cU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x19U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x1aU)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x1bU)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x1cU)))));
    }
    if ((0x1dU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x1aU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x1bU)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x1cU)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x1dU)))));
    }
    if ((0x1eU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x1bU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x1cU)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x1dU)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                                >> 0x1eU)))));
    }
    if ((0x1fU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[6U] 
                      >> 0x1cU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[4U] 
                                           >> 0x1dU)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[2U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[0U] 
                                          >> 0x1fU))));
    }
    if ((0x20U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      << 3U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        << 2U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U]))));
    }
    if ((0x21U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      << 2U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        << 1U)) | (
                                                   (2U 
                                                    & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U]) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 1U)))));
    }
    if ((0x22U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      << 1U)) | ((4U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U]) 
                                 | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                           >> 1U)) 
                                    | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 2U)))));
    }
    if ((0x23U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U]) 
               | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                         >> 1U)) | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                           >> 2U)) 
                                    | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                             >> 3U)))));
    }
    if ((0x24U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 1U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 2U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 4U)))));
    }
    if ((0x25U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 2U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 3U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       >> 4U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 5U)))));
    }
    if ((0x26U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 3U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 4U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       >> 5U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 6U)))));
    }
    if ((0x27U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 4U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 5U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 7U)))));
    }
    if ((0x28U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 5U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 6U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       >> 7U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 8U)))));
    }
    if ((0x29U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 6U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 7U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       >> 8U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 9U)))));
    }
    if ((0x2aU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 7U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 8U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       >> 9U)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 0xaU)))));
    }
    if ((0x2bU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 8U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 9U)) | (
                                                   (2U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                                       >> 0xaU)) 
                                                   | (1U 
                                                      & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                         >> 0xbU)))));
    }
    if ((0x2cU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 9U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                        >> 0xaU)) | 
                                 ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                           >> 0xcU)))));
    }
    if ((0x2dU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0xaU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0xbU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                             >> 0xcU)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                               >> 0xdU)))));
    }
    if ((0x2eU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0xbU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0xcU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                             >> 0xdU)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                               >> 0xeU)))));
    }
    if ((0x2fU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0xcU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0xdU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                             >> 0xeU)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                               >> 0xfU)))));
    }
    if ((0x30U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0xdU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0xeU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                             >> 0xfU)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                               >> 0x10U)))));
    }
    if ((0x31U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0xeU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0xfU)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                             >> 0x10U)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                               >> 0x11U)))));
    }
    if ((0x32U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0xfU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                          >> 0x10U)) 
                                   | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                             >> 0x11U)) 
                                      | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                               >> 0x12U)))));
    }
    if ((0x33U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x10U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x11U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x12U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x13U)))));
    }
    if ((0x34U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x11U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x12U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x13U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x14U)))));
    }
    if ((0x35U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x12U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x13U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x14U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x15U)))));
    }
    if ((0x36U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x13U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x14U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x15U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x16U)))));
    }
    if ((0x37U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x14U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x15U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x16U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x17U)))));
    }
    if ((0x38U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x15U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x16U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x17U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x18U)))));
    }
    if ((0x39U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x16U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x17U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x18U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x19U)))));
    }
    if ((0x3aU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x17U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x18U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x19U)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x1aU)))));
    }
    if ((0x3bU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x18U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x19U)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x1aU)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x1bU)))));
    }
    if ((0x3cU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x19U)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x1aU)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x1bU)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x1cU)))));
    }
    if ((0x3dU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x1aU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x1bU)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x1cU)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x1dU)))));
    }
    if ((0x3eU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x1bU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x1cU)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x1dU)) 
                                       | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                                >> 0x1eU)))));
    }
    if ((0x3fU == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__tag_addr_ff__dout))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq 
            = ((8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[7U] 
                      >> 0x1cU)) | ((4U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[5U] 
                                           >> 0x1dU)) 
                                    | ((2U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[3U] 
                                              >> 0x1eU)) 
                                       | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_out[1U] 
                                          >> 0x1fU))));
    }
    if (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_tag 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_tag;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_size;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_addr;
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_tag 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_tag;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_size;
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr 
            = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_addr;
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br0_hashed_wb 
        = ((0xcU & ((0x3ffffffcU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                    >> 2U)) ^ (8U & 
                                               ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                                >> 3U)))) 
           | (3U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                     >> 9U) ^ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                               >> 2U))));
    __Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in 
        = ((6U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                  >> 6U)) | (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt)));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
        = ((0x7fU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
           | ((IData)((7U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
              << 7U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
        = ((0xbfU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
           | ((IData)((6U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
              << 6U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
        = ((0xdfU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
           | ((IData)((5U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
              << 5U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
        = ((0xefU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
           | ((IData)((4U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
              << 4U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
        = ((0xf7U & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
           | ((IData)((3U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
              << 3U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
        = ((0xfbU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
           | ((IData)((2U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
              << 2U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
        = ((0xfdU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
           | ((IData)((1U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))) 
              << 1U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout 
        = ((0xfeU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout)) 
           | (IData)((0U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__in))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en2 
        = ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                             >> 0xfU)))) & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__12__Vfuncout));
    if ((IData)((0U != (0x1800U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt))))) {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_error_addr_wb 
            = (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                     >> 9U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_way_wb 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                     >> 1U));
    } else {
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_error_addr_wb 
            = (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                     >> 9U));
        vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_way_wb 
            = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                     >> 1U));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_all_banks_error_wb 
        = (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                  >> 0xbU) | ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                                  >> 0xcU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                               >> 0xbU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_bank_wb 
        = (3U & ((IData)((0U != (0x1800U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt))))
                  ? ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt) 
                     >> 7U) : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                               >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_error_wb 
        = (1U & (IData)(((0U != (0x1800U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br0_wb_pkt))) 
                         | (0U != (0x1800U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__br1_hashed_wb 
        = ((0xcU & ((0x3ffffffcU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                    >> 2U)) ^ (8U & 
                                               ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                                                >> 3U)))) 
           | (3U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                     >> 9U) ^ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                               >> 2U))));
    __Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in 
        = ((6U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                  >> 6U)) | (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt)));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
        = ((0x7fU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
           | ((IData)((7U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
              << 7U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
        = ((0xbfU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
           | ((IData)((6U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
              << 6U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
        = ((0xdfU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
           | ((IData)((5U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
              << 5U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
        = ((0xefU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
           | ((IData)((4U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
              << 4U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
        = ((0xf7U & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
           | ((IData)((3U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
              << 3U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
        = ((0xfbU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
           | ((IData)((2U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
              << 2U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
        = ((0xfdU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
           | ((IData)((1U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))) 
              << 1U));
    vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout 
        = ((0xfeU & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout)) 
           | (IData)((0U == (IData)(__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__in))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_wr_en1 
        = ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_br1_wb_pkt) 
                             >> 0xfU)))) & (IData)(vlSelf->__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__decode3_8__11__Vfuncout));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata 
        = ((((- (IData)((0U == (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                      >> 0x14U))))) 
             & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
                 << 0x18U) | ((0xff0000U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
                                             << 8U)) 
                                 | (0xffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg))))) 
            | ((- (IData)((1U == (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                        >> 0x14U))))) 
               & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
                   << 0x10U) | (0xffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg)))) 
           | ((- (IData)((2U == (3U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                       >> 0x14U))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type 
        = ((2U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                   >> 0x18U)) ? 2U : (0U == (0xfU & 
                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                              >> 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr 
        = (((2U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                    >> 0x18U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg
             : (0xffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg)) 
           + ((2U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                      >> 0x18U)) ? (0xfU & ((IData)(1U) 
                                            << (3U 
                                                & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                   >> 0x14U))))
               : 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
        = ((2U == (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                   >> 0x18U)) ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg
            : (0xfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg));
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid 
        = ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_vld) 
             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data_vld)) 
            | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_vld)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_fifo_ready));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_mem_write 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write) 
                 >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_done 
        = (1U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid) 
                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg)) 
                  >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)) 
                 & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write) 
                      | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid)) 
                     >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr)) 
                    | (0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                                    >> (7U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtr) 
                                              << 1U))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req 
        = (1U & ((((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid) 
                     >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)) 
                    & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_rpend) 
                          >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))) 
                   & (~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done) 
                         >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))) 
                  & (~ (IData)((0U != (3U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                                             >> (7U 
                                                 & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                    << 1U)))))))) 
                 & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write) 
                        >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
                    | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid) 
                       >> (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw) 
           | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            >> 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            >> 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            >> 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            >> 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            >> 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                   + (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            >> 7U))));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    __Vtemp_hf47fb529__0[0U] = 0xeb72ac7bU;
    __Vtemp_hf47fb529__0[1U] = 0x2846ac7aU;
    __Vtemp_hf47fb529__0[2U] = (3U | (0x3cU & ((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o) 
                                               >> 6U)));
    VL_EXTEND_WW(71,70, __Vtemp_h2954ed8d__0, __Vtemp_hf47fb529__0);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = ((3U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
           | (__Vtemp_h2954ed8d__0[0U] << 2U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
        = ((__Vtemp_h2954ed8d__0[0U] >> 0x1eU) | (__Vtemp_h2954ed8d__0[1U] 
                                                  << 2U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xffe00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffffU & ((__Vtemp_h2954ed8d__0[1U] 
                           >> 0x1eU) | (__Vtemp_h2954ed8d__0[2U] 
                                        << 2U))));
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                  << 1U));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    __Vtemp_h5b2831f5__0[0U] = 0xeb72ac7bU;
    __Vtemp_h5b2831f5__0[1U] = 0x2846ac7aU;
    __Vtemp_h5b2831f5__0[2U] = (3U | (0x3cU & ((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o) 
                                               >> 6U)));
    VL_EXTEND_WW(71,70, __Vtemp_h3f8bbafa__0, __Vtemp_h5b2831f5__0);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = ((3U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
           | (__Vtemp_h3f8bbafa__0[0U] << 2U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
        = ((__Vtemp_h3f8bbafa__0[0U] >> 0x1eU) | (__Vtemp_h3f8bbafa__0[1U] 
                                                  << 2U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xffe00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffffU & ((__Vtemp_h3f8bbafa__0[1U] 
                           >> 0x1eU) | (__Vtemp_h3f8bbafa__0[2U] 
                                        << 2U))));
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                  << 1U));
    }
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] = 0U;
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0xfff00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
    __Vtemp_h44c56a1a__0[0U] = 0xeb72ac7bU;
    __Vtemp_h44c56a1a__0[1U] = 0x2846ac7aU;
    __Vtemp_h44c56a1a__0[2U] = (3U | (0x3cU & ((IData)(vlSelf->axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o) 
                                               >> 6U)));
    VL_EXTEND_WW(71,70, __Vtemp_h8f215286__0, __Vtemp_h44c56a1a__0);
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
        = ((3U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
           | (__Vtemp_h8f215286__0[0U] << 2U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[1U] 
        = ((__Vtemp_h8f215286__0[0U] >> 0x1eU) | (__Vtemp_h8f215286__0[1U] 
                                                  << 2U));
    vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = ((0xffe00U & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]) 
           | (0xfffffU & ((__Vtemp_h8f215286__0[1U] 
                           >> 0x1eU) | (__Vtemp_h8f215286__0[2U] 
                                        << 2U))));
    if (vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__r_busy_q) {
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x100U | vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[2U]);
        vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U] 
            = ((0xfffffffdU & vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp[0U]) 
               | ((0U == (0xffU & (IData)(vlSelf->__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q))) 
                  << 1U));
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq 
        = ((IData)((0x40000000U == (0xc0000000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg))) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail 
        = (1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                  >> 1U) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn))));
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
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
           & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg);
    vlSelf->__PVT__swerv_eh1__DOT__core_rst_l = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn) 
                                                 & (~ 
                                                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                                     >> 1U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffffffffcULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | (IData)((IData)((((2U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                               << 1U) | (1U == (0x3fU 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffffffff3ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((4U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (3U == (0x3fU 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fffffffcfULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((6U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (5U == (0x3fU 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fffffff3fULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((8U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (7U == (0x3fU 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffffffcffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((0xaU == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (9U == (0x3fU 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffffff3ffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((0xcU == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (0xbU == (0x3fU 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fffffcfffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((0xeU == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (0xdU == (0x3fU 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fffff3fffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((0x10U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (0xfU == (0x3fU 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffffcffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((0x12U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (0x11U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffff3ffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((0x14U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (0x13U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fffcfffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((0x16U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (0x15U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fff3fffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((0x18U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (0x17U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 0x16U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ffcffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((0x1aU == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (0x19U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7ff3ffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((0x1cU == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (0x1bU == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7fcfffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((0x1eU == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (0x1dU == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7f3fffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((0x20U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (0x1fU == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x7cffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((0x22U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (0x21U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x73ffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((0x24U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (0x23U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 0x22U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x4fffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((((0x26U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))) 
                                << 1U) | (0x25U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check)))))) 
              << 0x24U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask 
        = ((0x3fffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__error_mask) 
           | ((QData)((IData)((0x27U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__ecc_check))))) 
              << 0x26U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffffffffcULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | (IData)((IData)((((2U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                               << 1U) | (1U == (0x3fU 
                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffffffff3ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((4U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (3U == (0x3fU 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fffffffcfULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((6U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (5U == (0x3fU 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fffffff3fULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((8U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (7U == (0x3fU 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffffffcffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((0xaU == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (9U == (0x3fU 
                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffffff3ffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((0xcU == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (0xbU == (0x3fU 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 0xaU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fffffcfffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((0xeU == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (0xdU == (0x3fU 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 0xcU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fffff3fffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((0x10U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (0xfU == (0x3fU 
                                                   & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 0xeU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffffcffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((0x12U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (0x11U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffff3ffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((0x14U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (0x13U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 0x12U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fffcfffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((0x16U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (0x15U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 0x14U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fff3fffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((0x18U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (0x17U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 0x16U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ffcffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((0x1aU == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (0x19U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7ff3ffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((0x1cU == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (0x1bU == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 0x1aU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7fcfffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((0x1eU == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (0x1dU == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7f3fffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((0x20U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (0x1fU == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x7cffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((0x22U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (0x21U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x73ffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((0x24U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (0x23U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 0x22U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x4fffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((((0x26U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))) 
                                << 1U) | (0x25U == 
                                          (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check)))))) 
              << 0x24U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask 
        = ((0x3fffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__error_mask) 
           | ((QData)((IData)((0x27U == (0x3fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__ecc_check))))) 
              << 0x26U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__pcout 
        = ((0xfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__pcout) 
           | (0x7ffff000U & (((0xfffff000U & (((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                                >> 0xbU) 
                                                               ^ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__ibradder__DOT__cout)))))) 
                                               << 0xcU) 
                                              & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout)) 
                              | (((- (IData)(((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                  >> 0xbU)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__ibradder__DOT__cout)))) 
                                  & ((IData)(1U) + 
                                     (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout 
                                      >> 0xcU))) << 0xcU)) 
                             | (((- (IData)((IData)(
                                                    (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                      >> 0xbU) 
                                                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__ibradder__DOT__cout)))))) 
                                 & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout 
                                     >> 0xcU) - (IData)(1U))) 
                                << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__pcout 
        = ((0xfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__pcout) 
           | (0x7ffff000U & (((0xfffff000U & (((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                                >> 0xbU) 
                                                               ^ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__ibradder__DOT__cout)))))) 
                                               << 0xcU) 
                                              & vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout)) 
                              | (((- (IData)(((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                  >> 0xbU)) 
                                              & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__ibradder__DOT__cout)))) 
                                  & ((IData)(1U) + 
                                     (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout 
                                      >> 0xcU))) << 0xcU)) 
                             | (((- (IData)((IData)(
                                                    (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout) 
                                                      >> 0xbU) 
                                                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__ibradder__DOT__cout)))))) 
                                 & ((vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout 
                                     >> 0xcU) - (IData)(1U))) 
                                << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_expanded_f2 
        = (((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
                      >> 3U) & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2 
                                 >> 3U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2 
                                           >> 4U)))) 
            << 7U) | (((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
                                 >> 3U) & (~ ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2 
                                               >> 3U) 
                                              ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way0_f2 
                                                 >> 4U))))) 
                       << 6U) | ((0x20U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
                                            << 3U) 
                                           & ((0xffffffe0U 
                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2 
                                                  << 2U)) 
                                              ^ (0xffffffe0U 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2 
                                                    << 1U))))) 
                                 | ((0x10U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
                                               << 2U) 
                                              & ((~ 
                                                  ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2 
                                                    >> 3U) 
                                                   ^ 
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way0_f2 
                                                    >> 4U))) 
                                                 << 4U))) 
                                    | ((8U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
                                               << 2U) 
                                              & ((0xfffffff8U 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2) 
                                                 ^ 
                                                 (0x7ffffff8U 
                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2 
                                                     >> 1U))))) 
                                       | ((4U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
                                                  << 1U) 
                                                 & ((~ 
                                                     ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2 
                                                       >> 3U) 
                                                      ^ 
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way0_f2 
                                                       >> 4U))) 
                                                    << 2U))) 
                                          | ((2U & 
                                              (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
                                                << 1U) 
                                               & ((0x3ffffffeU 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2 
                                                      >> 2U)) 
                                                  ^ 
                                                  (0x1ffffffeU 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2 
                                                      >> 3U))))) 
                                             | (1U 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way0_f2) 
                                                   & (~ 
                                                      ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2 
                                                        >> 3U) 
                                                       ^ 
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way0_f2 
                                                        >> 4U))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_expanded_f2 
        = (((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2) 
                      >> 3U) & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2 
                                 >> 3U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2 
                                           >> 4U)))) 
            << 7U) | (((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2) 
                                 >> 3U) & (~ ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2 
                                               >> 3U) 
                                              ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_rd_data_way1_f2 
                                                 >> 4U))))) 
                       << 6U) | ((0x20U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2) 
                                            << 3U) 
                                           & ((0xffffffe0U 
                                               & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2 
                                                  << 2U)) 
                                              ^ (0xffffffe0U 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2 
                                                    << 1U))))) 
                                 | ((0x10U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2) 
                                               << 2U) 
                                              & ((~ 
                                                  ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2 
                                                    >> 3U) 
                                                   ^ 
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_rd_data_way1_f2 
                                                    >> 4U))) 
                                                 << 4U))) 
                                    | ((8U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2) 
                                               << 2U) 
                                              & ((0xfffffff8U 
                                                  & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2) 
                                                 ^ 
                                                 (0x7ffffff8U 
                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2 
                                                     >> 1U))))) 
                                       | ((4U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2) 
                                                  << 1U) 
                                                 & ((~ 
                                                     ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2 
                                                       >> 3U) 
                                                      ^ 
                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_rd_data_way1_f2 
                                                       >> 4U))) 
                                                    << 2U))) 
                                          | ((2U & 
                                              (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2) 
                                                << 1U) 
                                               & ((0x3ffffffeU 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2 
                                                      >> 2U)) 
                                                  ^ 
                                                  (0x1ffffffeU 
                                                   & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2 
                                                      >> 3U))))) 
                                             | (1U 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_f2) 
                                                   & (~ 
                                                      ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2 
                                                        >> 3U) 
                                                       ^ 
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_rd_data_way1_f2 
                                                        >> 4U))))))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0sel 
        = (((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)) 
            << 7U) | (((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)) 
                       << 6U) | (((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)) 
                                  << 5U) | (((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)) 
                                             << 4U) 
                                            | (((3U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)) 
                                                << 3U) 
                                               | (((2U 
                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)) 
                                                   << 2U) 
                                                  | (((1U 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)) 
                                                      << 1U) 
                                                     | (0U 
                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ptr)))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1sel 
        = (((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)) 
            << 7U) | (((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)) 
                       << 6U) | (((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)) 
                                  << 5U) | (((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)) 
                                             << 4U) 
                                            | (((3U 
                                                 == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)) 
                                                << 3U) 
                                               | (((2U 
                                                    == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)) 
                                                   << 2U) 
                                                  | (((1U 
                                                       == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)) 
                                                      << 1U) 
                                                     | (0U 
                                                        == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ptr)))))))));
    __Vtemp_h568f474f__0[2U] = ((((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
                                  & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1) 
                                      >> 0xdU) | ((IData)(
                                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1 
                                                           >> 0x20U)) 
                                                  << 0x13U))) 
                                 | ((- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                   >> 1U)))) 
                                    & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2) 
                                        >> 0xdU) | 
                                       ((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2 
                                                 >> 0x20U)) 
                                        << 0x13U)))) 
                                | ((- (IData)((1U & 
                                               ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                >> 2U)))) 
                                   & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0) 
                                       >> 0xdU) | ((IData)(
                                                           (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0 
                                                            >> 0x20U)) 
                                                   << 0x13U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1eff 
        = (0x7ffffffffffffULL & (((QData)((IData)((
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1 
                                                                 >> 0x20U)) 
                                                        >> 0xdU)) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                                      >> 1U)))) 
                                                       & ((IData)(
                                                                  (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2 
                                                                   >> 0x20U)) 
                                                          >> 0xdU))) 
                                                   | ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                                     >> 2U)))) 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0 
                                                                  >> 0x20U)) 
                                                         >> 0xdU))))) 
                                  << 0x2dU) | (((QData)((IData)(
                                                                __Vtemp_h568f474f__0[2U])) 
                                                << 0xdU) 
                                               | ((QData)((IData)(
                                                                  ((((- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
                                                                     & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1) 
                                                                         << 0x13U) 
                                                                        | (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0 
                                                                                >> 0x20U)))) 
                                                                    | ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                                                >> 1U)))) 
                                                                       & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2) 
                                                                           << 0x13U) 
                                                                          | (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1 
                                                                                >> 0x20U))))) 
                                                                   | ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                                                >> 2U)))) 
                                                                      & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0) 
                                                                          << 0x13U) 
                                                                         | (IData)(
                                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2 
                                                                                >> 0x20U))))))) 
                                                  >> 0x13U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0eff 
        = ((((((QData)((IData)((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))))) 
               << 0x20U) | (QData)((IData)((- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren))))))) 
             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0) 
            | ((((QData)((IData)((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                   >> 1U)))))) 
                 << 0x20U) | (QData)((IData)((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                            >> 1U))))))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1)) 
           | ((((QData)((IData)((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                  >> 2U)))))) 
                << 0x20U) | (QData)((IData)((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                           >> 2U))))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1eff 
        = (((QData)((IData)(((((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
                               & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1 
                                          >> 0x20U))) 
                              | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                   >> 1U)))) 
                                 & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2 
                                            >> 0x20U)))) 
                             | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                  >> 2U)))) 
                                & (IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0 
                                           >> 0x20U)))))) 
            << 0x20U) | (QData)((IData)(((((- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
                                           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1)) 
                                          | ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                            >> 1U)))) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2))) 
                                         | ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                           >> 2U)))) 
                                            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0eff 
        = ((((((QData)((IData)((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))))) 
               << 0x20U) | (QData)((IData)((- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren))))))) 
             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0) 
            | ((((QData)((IData)((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                   >> 1U)))))) 
                 << 0x20U) | (QData)((IData)((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                            >> 1U))))))) 
               & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1)) 
           | ((((QData)((IData)((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                  >> 2U)))))) 
                << 0x20U) | (QData)((IData)((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                           >> 2U))))))) 
              & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityeff 
        = (0xffU & (((((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
                       >> 8U) & ((0xffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parity)) 
                                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parity) 
                                    >> 8U))) | (((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                                                >> 1U)))) 
                                                 >> 8U) 
                                                & ((0xffffffU 
                                                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parity)) 
                                                   | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parity) 
                                                      >> 8U)))) 
                    | (((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                          >> 2U)))) 
                        >> 8U) & ((0xffffffU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parity)) 
                                  | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parity) 
                                     >> 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityeff 
        = (0xffffU & ((((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
                        & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parity)) 
                       | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                            >> 1U)))) 
                          & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parity))) 
                      | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                           >> 2U)))) 
                         & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parity))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff[0U] 
        = ((((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[0U]) 
            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                 >> 1U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[0U])) 
           | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                >> 2U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[0U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff[1U] 
        = ((((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[1U]) 
            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                 >> 1U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[1U])) 
           | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                >> 2U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[1U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff[2U] 
        = ((((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[2U]) 
            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                 >> 1U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[2U])) 
           | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                >> 2U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[2U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1eff[3U] 
        = ((((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[3U]) 
            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                 >> 1U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[3U])) 
           | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                >> 2U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[3U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff[0U] 
        = ((((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[0U]) 
            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                 >> 1U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[0U])) 
           | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                >> 2U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[0U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff[1U] 
        = ((((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[1U]) 
            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                 >> 1U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[1U])) 
           | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                >> 2U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[1U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff[2U] 
        = ((((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[2U]) 
            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                 >> 1U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[2U])) 
           | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                >> 2U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[2U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0eff[3U] 
        = ((((- (IData)((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren)))) 
             & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[3U]) 
            | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                 >> 1U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[3U])) 
           | ((- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__qren) 
                                >> 2U)))) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[3U]));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc2_clken 
        = (1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc1_clken_q)) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__isldst_dc1 
        = (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
           & (0U != (0x6000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_offset_dc1 
        = (0x1fffU & (((0x1000U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1) 
                                   << 1U)) | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1)) 
                      + (7U & (((1U & (- (IData)((1U 
                                                  & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                                                     >> 0x11U))))) 
                                | (3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                                                       >> 0x10U)))))) 
                               | (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                                                   >> 0xfU))))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_wen_wb)
            ? (((0xfU & ((- (IData)((1U & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__smallnumff__dout) 
                                           >> 4U)))) 
                         & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__smallnumff__dout))) 
                | ((- (IData)((1U & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout)))) 
                   & ((IData)((0xaU == (0xaU & (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout))))
                       ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff_c__DOT__dout_temp 
                           << 1U) | (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))
                       : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff)))) 
               | ((- (IData)((1U & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__smallnumff__dout) 
                                        >> 4U)) & (~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout)))))) 
                  & ((1U & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout) 
                             >> 1U) & (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout) 
                                        >> 3U) ^ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout) 
                                                  >> 2U))))
                      ? ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff_c__DOT__dout_temp 
                          << 1U) | (1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)))
                      : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff))))
            : vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_raw);
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__aout 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__a_ff 
            + vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__bm) 
           + (IData)((QData)((IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout 
                                            >> 7U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                  >> 0x16U) & (~ (IData)((0xffffffffU 
                                          == ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                  >> 4U) & (~ (IData)((0xffffffffU 
                                       == vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                  >> 0xaU) & (~ (IData)((0xffffffffU 
                                         == ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                              << 0x1aU) 
                                             | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                >> 6U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                  >> 0x10U) & (~ (IData)((0xffffffffU 
                                          == ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i1_match__DOT__masken_or_fullmask 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                  >> 4U) & (~ (IData)((0xffffffffU 
                                       == vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i1_match__DOT__masken_or_fullmask 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                  >> 0xaU) & (~ (IData)((0xffffffffU 
                                         == ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                              << 0x1aU) 
                                             | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                >> 6U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i1_match__DOT__masken_or_fullmask 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                  >> 0x10U) & (~ (IData)((0xffffffffU 
                                          == ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i1_match__DOT__masken_or_fullmask 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                  >> 0x16U) & (~ (IData)((0xffffffffU 
                                          == ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__dec_i1_match_data[0U] 
        = ((- (IData)((IData)((2U == (0x22U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U]))))) 
           & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                        >> 1U)) << 1U) | (1U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__dec_i1_match_data[1U] 
        = ((- (IData)((IData)((0x80U == (0x880U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U]))))) 
           & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                        >> 1U)) << 1U) | (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                >> 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__dec_i1_match_data[2U] 
        = ((- (IData)((IData)((0x2000U == (0x22000U 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U]))))) 
           & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                        >> 1U)) << 1U) | (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                >> 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__dec_i1_match_data[3U] 
        = ((- (IData)((IData)((0x80000U == (0x880000U 
                                            & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U]))))) 
           & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                        >> 1U)) << 1U) | (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                >> 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                  >> 4U) & (~ (IData)((0xffffffffU 
                                       == vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                  >> 0xaU) & (~ (IData)((0xffffffffU 
                                         == ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                              << 0x1aU) 
                                             | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                >> 6U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                  >> 0x10U) & (~ (IData)((0xffffffffU 
                                          == ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_i0_match__DOT__masken_or_fullmask 
        = (1U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                  >> 0x16U) & (~ (IData)((0xffffffffU 
                                          == ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[0U] 
        = ((- (IData)((IData)((2U == (0x22U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U]))))) 
           & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                        >> 1U)) << 1U) | (1U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[1U] 
        = ((- (IData)((IData)((0x80U == (0x880U & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U]))))) 
           & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                        >> 1U)) << 1U) | (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                >> 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[2U] 
        = ((- (IData)((IData)((0x2000U == (0x22000U 
                                           & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U]))))) 
           & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                        >> 1U)) << 1U) | (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                >> 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_trigger__DOT__dec_i0_match_data[3U] 
        = ((- (IData)((IData)((0x80000U == (0x880000U 
                                            & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U]))))) 
           & (((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                        >> 1U)) << 1U) | (1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                >> 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3 
        = ((0xffffffffffffff00ULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3) 
           | (IData)((IData)((0xffU & ((1U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3))
                                        ? (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3)
                                        : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                            ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3
                                            : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_dout_dc3)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3 
        = ((0xffffffffffff00ffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3) 
           | ((QData)((IData)((0xffU & ((2U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3))
                                         ? (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3 
                                                    >> 8U))
                                         : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                             ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                >> 8U)
                                             : (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_dout_dc3 
                                                        >> 8U))))))) 
              << 8U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3 
        = ((0xffffffffff00ffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3) 
           | ((QData)((IData)((0xffU & ((4U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3))
                                         ? (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3 
                                                    >> 0x10U))
                                         : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                             ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                >> 0x10U)
                                             : (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_dout_dc3 
                                                        >> 0x10U))))))) 
              << 0x10U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3 
        = ((0xffffffff00ffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3) 
           | ((QData)((IData)((0xffU & ((8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3))
                                         ? (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3 
                                                    >> 0x18U))
                                         : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                             ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                >> 0x18U)
                                             : (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_dout_dc3 
                                                        >> 0x18U))))))) 
              << 0x18U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3 
        = ((0xffffff00ffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3) 
           | ((QData)((IData)((0xffU & ((0x10U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3))
                                         ? (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3 
                                                    >> 0x20U))
                                         : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                             ? vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3
                                             : (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_dout_dc3 
                                                        >> 0x20U))))))) 
              << 0x20U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3 
        = ((0xffff00ffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3) 
           | ((QData)((IData)((0xffU & ((0x20U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3))
                                         ? (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3 
                                                    >> 0x28U))
                                         : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                             ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                >> 8U)
                                             : (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_dout_dc3 
                                                        >> 0x28U))))))) 
              << 0x28U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3 
        = ((0xff00ffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3) 
           | ((QData)((IData)((0xffU & ((0x40U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3))
                                         ? (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3 
                                                    >> 0x30U))
                                         : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                             ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                >> 0x10U)
                                             : (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_dout_dc3 
                                                        >> 0x30U))))))) 
              << 0x30U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3 
        = ((0xffffffffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_dc3) 
           | ((QData)((IData)((0xffU & ((0x80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3))
                                         ? (IData)(
                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3 
                                                    >> 0x38U))
                                         : ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                             ? (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                >> 0x18U)
                                             : (IData)(
                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_dout_dc3 
                                                        >> 0x38U))))))) 
              << 0x38U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret_case 
        = (IData)(((0x400000800000ULL == (0x400000800000ULL 
                                          & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp_raw)) 
                   & (0x400U == (0x7c1fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall_12b_offset 
        = ((0x800U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall_imm)
            ? (0xffU == (0xffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall_imm 
                                  >> 0xcU))) : (0U 
                                                == 
                                                (0xffU 
                                                 & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall_imm 
                                                    >> 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
           & (0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rresp_q)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error 
        = ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
           & (0U != (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bresp_q)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc5_clken 
        = (1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc4_clken_q)) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc5_in 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc5_in 
        = ((0x7fffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc5_in) 
           | (1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4 
                    & (~ (((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                           >> 2U) & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4 
                                        >> 0xbU)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc4_clken 
        = (1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc3_clken_q)) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid 
        = (IData)((0x4801U == (0x4801U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ldst_dc3 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
            & (IData)((0U != (0x6000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3)))) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc3) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__is_ldst_dc3 
        = (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
             & (IData)((0U != (0x6000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3)))) 
            & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc3)) 
           & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_dccm_rden_dc3));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn 
        = (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3) 
            & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
               >> 0xeU)) & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3 
        = (0xffU & (((((1U & (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                               >> 0x12U))))) 
                       | (3U & (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                 >> 0x11U)))))) 
                      | (0xfU & (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                  >> 0x10U)))))) 
                     | (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                         >> 0xfU))))) 
                    << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3 
        = (0xffU & ((((((1U & (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                >> 0x12U))))) 
                        | (3U & (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                  >> 0x11U)))))) 
                       | (0xfU & (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                   >> 0x10U)))))) 
                      | (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                          >> 0xfU))))) 
                     & (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                         >> 0xdU))))) 
                    << (3U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
        = vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_out;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__aout 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__a_ff 
            + vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__bm) 
           + (IData)((QData)((IData)((1U & (vlSelf->swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout 
                                            >> 7U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc3_clken 
        = (1U & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                  | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc2_clken_q)) 
                 | ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 4U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | (((((0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
                             >> 2U)) == (0x3fffU & 
                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                          >> 2U))) 
                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld) 
                   | (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                         >> 0xbU)))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld))) 
              & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2)) 
                 | ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic)) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (2U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                      << 1U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (4U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                      << 2U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                      << 3U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
                   >> 0x12U) == (0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                            >> 2U))) 
                 << 1U) & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 1U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 1U)) << 1U)) & ((0xfffffffeU 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 1U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 1U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x10U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         << 3U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x20U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         << 4U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffffffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                     >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x40U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         << 5U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffffffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                     >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x80U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         << 6U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffffff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                     >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                           >> 2U))) 
                 << 2U) & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 2U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 2U)) << 2U)) & ((0xfffffffcU 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 2U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 2U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x100U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                          << 6U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x200U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                          << 7U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfffffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                    >> 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x400U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                          << 8U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfffffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                    >> 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x800U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                          << 9U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 9U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfffff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                    >> 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                   >> 0x12U) == (0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                            >> 2U))) 
                 << 3U) & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 3U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 3U)) << 3U)) & ((0xfffffff8U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 3U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 3U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x1000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                           << 9U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 9U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x2000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                           << 0xaU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                   >> 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x4000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                           << 0xbU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xbU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                   >> 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x8000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                           << 0xcU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                   >> 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                           >> 2U))) 
                 << 4U) & ((0xfffffff0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 4U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 4U)) << 4U)) & ((0xfffffff0U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 4U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 4U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x10000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                            << 0xcU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x20000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                            << 0xdU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xdU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                  >> 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x40000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                            << 0xeU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xeU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                  >> 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x80000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                            << 0xfU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xfU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                  >> 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
                   >> 0x12U) == (0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                            >> 2U))) 
                 << 5U) & ((0xffffffe0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 5U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 5U)) << 5U)) & ((0xffffffe0U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 5U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 5U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x100000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                             << 0xfU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0xfU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 0x14U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x200000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                             << 0x10U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                 >> 0x14U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xffbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x400000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                             << 0x11U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x11U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                 >> 0x14U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x800000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                             << 0x12U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                 >> 0x14U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[3U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                           >> 2U))) 
                 << 6U) & ((0xffffffc0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 6U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 6U)) << 6U)) & ((0xffffffc0U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 6U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 6U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x1000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                              << 0x12U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 0x18U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x2000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                              << 0x13U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x13U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                >> 0x18U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xfbffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x4000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                              << 0x14U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x14U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xfcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                >> 0x18U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | (0x8000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                              << 0x15U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x15U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xf8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                >> 0x18U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi)) 
           | ((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[3U] 
                   >> 0x12U) == (0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc2 
                                            >> 2U))) 
                 << 7U) & ((0xffffff80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 7U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 7U)) << 7U)) & ((0xffffff80U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 7U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 7U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1cU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                       >> 0x1cU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1dU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                               >> 0x1cU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0xbfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1eU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
                    | (0xcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                               >> 0x1cU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1fU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2)) 
           | ((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2) 
                        >> 3U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_hi 
                                  >> 0x1fU))) << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_cmpen_dc2 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
            & (IData)((0U != (0x6000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2)))) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ldst_dc2 
        = ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
            & (IData)((0U != (0x6000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2)))) 
           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2) 
              | (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_dc2 
        = (0xfU & (((1U & (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                            >> 0x12U))))) 
                    | (3U & (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                              >> 0x11U)))))) 
                   | (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                       >> 0x10U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 = 0U;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | (((((0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
                             >> 2U)) == (0x3fffU & 
                                         (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                          >> 2U))) 
                & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld) 
                   | (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                         >> 0xbU)))) & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld))) 
              & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                  & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2)) 
                 | ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic)) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffffeU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                     & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (2U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                      << 1U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (4U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                      << 2U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffff7U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (8U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                      << 3U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                    & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                       << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[0U] 
                   >> 0x12U) == (0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                            >> 2U))) 
                 << 1U) & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 1U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 1U)) << 1U)) & ((0xfffffffeU 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 1U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 1U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffffefU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x10U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         << 3U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffffdfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x20U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         << 4U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffffffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                     >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffffbfU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x40U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         << 5U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffffffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                     >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffff7fU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x80U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         << 6U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                       & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                          << 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffffff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                     >> 4U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                           >> 2U))) 
                 << 2U) & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 2U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 2U)) << 2U)) & ((0xfffffffcU 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 2U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 2U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffeffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x100U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                          << 6U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffdffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x200U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                          << 7U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfffffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                    >> 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffffbffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x400U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                          << 8U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 8U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfffffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                    >> 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffff7ffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x800U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                          << 9U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                        & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                           << 9U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfffff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                    >> 8U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[1U] 
                   >> 0x12U) == (0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                            >> 2U))) 
                 << 3U) & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 3U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 3U)) << 3U)) & ((0xfffffff8U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 3U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 3U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 3U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffefffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x1000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                           << 9U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 9U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffdfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x2000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                           << 0xaU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xaU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                   >> 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffffbfffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x4000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                           << 0xbU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xbU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                   >> 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffff7fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x8000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                           << 0xcU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                         & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                            << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                   >> 0xcU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                           >> 2U))) 
                 << 4U) & ((0xfffffff0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 4U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 4U)) << 4U)) & ((0xfffffff0U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 4U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 4U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 4U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffeffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x10000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                            << 0xcU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffdffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x20000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                            << 0xdU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xdU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                  >> 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x40000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                            << 0xeU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xeU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                  >> 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfff7ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x80000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                            << 0xfU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                             << 0xfU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                  >> 0x10U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[2U] 
                   >> 0x12U) == (0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                            >> 2U))) 
                 << 5U) & ((0xffffffe0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 5U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 5U)) << 5U)) & ((0xffffffe0U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 5U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 5U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 5U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffefffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x100000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                             << 0xfU) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0xfU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 0x14U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffdfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x200000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                             << 0x10U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                 >> 0x14U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xffbfffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x400000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                             << 0x11U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x11U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xffcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                 >> 0x14U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x800000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                             << 0x12U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                           & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                              << 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xff8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                 >> 0x14U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[3U] 
                              >> 2U)) == (0x3fffU & 
                                          (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                           >> 2U))) 
                 << 6U) & ((0xffffffc0U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 6U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 6U)) << 6U)) & ((0xffffffc0U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 6U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 6U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 6U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x1000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                              << 0x12U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 0x18U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x2000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                              << 0x13U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x13U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                >> 0x18U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xfbffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x4000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                              << 0x14U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x14U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xfcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                >> 0x18U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xf7ffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | (0x8000000U & ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                              << 0x15U) & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen) 
                            & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                               << 0x15U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xf8U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                >> 0x18U)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo)) 
           | ((((((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr[3U] 
                   >> 0x12U) == (0x3fffU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                                            >> 2U))) 
                 << 7U) & ((0xffffff80U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_vld)) 
                           | ((~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                  >> 0xbU)) << 7U))) 
               & ((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_vld) 
                      >> 7U)) << 7U)) & ((0xffffff80U 
                                          & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                             & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2) 
                                                << 7U))) 
                                         | (((~ ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addr_in_pic) 
                                                 >> 7U)) 
                                             & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2)) 
                                            << 7U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xefffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1cU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1cU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                    | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                       >> 0x1cU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xdfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1dU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1dU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xeU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                               >> 0x1cU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0xbfffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1eU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1eU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((0xbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
                    | (0xcU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                               >> 0x1cU)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
        = ((0x7fffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo) 
           | ((IData)(((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo) 
                         >> 7U) & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteen 
                                   >> 0x1fU)) & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_vld) 
                                                 >> 7U))) 
              << 0x1fU));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2 
        = ((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2)) 
           | ((IData)((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2) 
                        >> 3U) | (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteenvec_lo 
                                  >> 0x1fU))) << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1t_in 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e1ff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1t_in 
        = ((0x3f0ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1t_in) 
           | (0xf0000U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e1ff__dout 
                          & ((~ (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)))) 
                             << 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1t_in 
        = ((0x3ff0fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1t_in) 
           | (0xf000U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e1ff__dout 
                         & ((~ (- (IData)((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)))) 
                            << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[0U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[0U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[2U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U] 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U]) 
           | (0x2000000U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                            & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                               << 0x19U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U]) 
           | (4U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                    & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                       << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U]) 
           | (0x1000000U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                            & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                               << 0x18U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U] 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U]) 
           | (2U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                    & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                       << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U] 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U]) 
           | (0x800000U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                           & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                              << 0x17U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[0U] 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[0U]) 
           | (0x40000U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[0U] 
                          & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                             << 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2t_in 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e2ff__dout;
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2t_in 
        = ((0x3f0ffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2t_in) 
           | (0xf0000U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e2ff__dout 
                          & ((~ (- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3) 
                                                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                     >> 2U)))))) 
                             << 0x10U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2t_in 
        = ((0x3ff0fffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2t_in) 
           | (0xf000U & (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e2ff__dout 
                         & ((~ (- (IData)((1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3) 
                                                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                    >> 2U)))))) 
                            << 0xcU))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[0U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[2U] 
        = vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U];
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U] 
        = ((0xfdffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U]) 
           | (0x2000000U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                             & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                                << 0x19U)) & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                  >> 2U)) 
                                              << 0x19U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U]) 
           | (4U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                     & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                        << 2U)) & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                       >> 2U)) << 2U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U]) 
           | (0x1000000U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                             & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                                << 0x18U)) & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                  >> 2U)) 
                                              << 0x18U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U] 
        = ((0xfffffffdU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U]) 
           | (2U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                     & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                        << 1U)) & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                       >> 2U)) << 1U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U] 
        = ((0xff7fffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U]) 
           | (0x800000U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                            & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                               << 0x17U)) & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                 >> 2U)) 
                                             << 0x17U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[0U] 
        = ((0xfffbffffU & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[0U]) 
           | (0x40000U & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                           & ((~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3)) 
                              << 0x12U)) & ((~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                >> 2U)) 
                                            << 0x12U))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc3 
        = (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3) 
                  & ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout) 
                     >> 1U)) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc2_up 
        = (1U & (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__flush_final_e3) 
                  | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout) 
                     >> 1U)) | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 2U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en 
        = ((0xfeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en)) 
           | (((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc5) 
               & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                     >> 0xbU))) & ((0U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
                                   | ((0U == (7U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                                      & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5)))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en 
        = ((0xfdU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc5) 
                & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                      >> 0xbU))) & ((1U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
                                    | ((1U == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5)))) 
              << 1U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en 
        = ((0xfbU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc5) 
                & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                      >> 0xbU))) & ((2U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
                                    | ((2U == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5)))) 
              << 2U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en 
        = ((0xf7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc5) 
                & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                      >> 0xbU))) & ((3U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
                                    | ((3U == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5)))) 
              << 3U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en 
        = ((0xefU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc5) 
                & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                      >> 0xbU))) & ((4U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
                                    | ((4U == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5)))) 
              << 4U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en 
        = ((0xdfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc5) 
                & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                      >> 0xbU))) & ((5U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
                                    | ((5U == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5)))) 
              << 5U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en 
        = ((0xbfU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc5) 
                & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                      >> 0xbU))) & ((6U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
                                    | ((6U == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5)))) 
              << 6U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en 
        = ((0x7fU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en)) 
           | ((((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc5) 
                & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                      >> 0xbU))) & ((7U == (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)) 
                                    | ((7U == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr_dc5)))) 
                                       & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc5)))) 
              << 7U));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_dc5 
        = (0xfU & (((1U & (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                            >> 0x12U))))) 
                    | (3U & (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                              >> 0x11U)))))) 
                   | (- (IData)((1U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                       >> 0x10U))))));
    vlSelf->__PVT__swerv_eh1__DOT__ic_debug_way = (
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                                 >> 0x10U)))) 
                                                    << 3U) 
                                                   | (((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                                    >> 0x10U)))) 
                                                       << 2U) 
                                                      | (((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                                       >> 0x10U)))) 
                                                          << 1U) 
                                                         | (0U 
                                                            == 
                                                            (3U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                                        >> 0x10U)))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1 
        = ((IData)(((8U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
                    & (0x2080000U == (0xff080000U & vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg)))) 
           & (~ (IData)((0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                      >> 8U))))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0 
        = (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
              & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
             & (0x1400000000ULL == (0x1fc00000000ULL 
                                    & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
            & (2U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                 >> 0xcU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0 
        = (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
              & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
             & (0x1000000000ULL == (0x1fc00000000ULL 
                                    & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
            & (2U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                 >> 0xcU)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg_dma_bubble 
        = (((3U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (~ (IData)((0U != (7U & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                       >> 8U)))))) 
           | (4U == (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)));
    vlSelf->swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_abstractauto_reg__DOT____Vcellinp__dffs__din 
        = (3U & (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                   & (0x6000000000ULL == (0x1fc00000000ULL 
                                          & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                  & (~ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                        >> 0xcU))) ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U))
                  : (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg)));
    vlSelf->__PVT__gpio_module__DOT__extc_in = ((vlSelf->__PVT__gpio_module__DOT__in_lach 
                                                 & vlSelf->__PVT__gpio_module__DOT__ext_pad_s) 
                                                | ((~ vlSelf->__PVT__gpio_module__DOT__in_lach) 
                                                   & vlSelf->__PVT__gpio_module__DOT__pextc_sampled));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstret_enable 
        = (1U & ((IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_valid_no_ebreak_ecall_wb) 
                 | ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                    >> 5U)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__iir_read 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__re_o) 
            & (2U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__msr_read 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__re_o) 
            & (6U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__fifo_read 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__re_o) 
            & (0U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lsr_mask_condition 
        = (((IData)(vlSelf->__PVT__uart16550_0__DOT__re_o) 
            & (5U == (IData)(vlSelf->__PVT__uart16550_0__DOT__wb_interface__DOT__wb_adr_is))) 
           & (~ ((IData)(vlSelf->__PVT__uart16550_0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    if (vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__lsu_freeze_dc3_q) {
        vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_lo 
            = (0x7fffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_lo_q);
        vlSelf->__PVT__swerv_eh1__DOT__dccm_rd_data_hi 
            = (0x7fffffffffULL & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hi_q);
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
    }
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdpc_hash 
        = (3U & (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdpc 
                   >> 3U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdpc 
                             >> 5U)) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdpc 
                                        >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdbrtag_hash 
        = (0x1ffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdpc 
                      >> 0xeU) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdpc 
                                  >> 5U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc_hash 
        = (3U & (((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc 
                   >> 3U) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc 
                             >> 5U)) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc 
                                        >> 7U)));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondbrtag_hash 
        = (0x1ffU & ((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc 
                      >> 0xeU) ^ (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc 
                                  >> 5U)));
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
    vlSelf->__PVT__axi_intercon__DOT__masters_req[0U] 
        = ((7U & vlSelf->__PVT__axi_intercon__DOT__masters_req[0U]) 
           | ((IData)((((QData)((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_req_addr_f2 
                                         << 3U))) << 0x1dU) 
                       | (QData)((IData)((0xd7c00U 
                                          | (0xfU & 
                                             (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_req_addr_f2 
                                              >> 0x19U))))))) 
              << 3U));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[1U] 
        = (((IData)((((QData)((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_req_addr_f2 
                                       << 3U))) << 0x1dU) 
                     | (QData)((IData)((0xd7c00U | 
                                        (0xfU & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_req_addr_f2 
                                                 >> 0x19U))))))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_req_addr_f2 
                                                     << 3U))) 
                                    << 0x1dU) | (QData)((IData)(
                                                                (0xd7c00U 
                                                                 | (0xfU 
                                                                    & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_req_addr_f2 
                                                                       >> 0x19U)))))) 
                                  >> 0x20U)) << 3U));
    vlSelf->__PVT__axi_intercon__DOT__masters_req[2U] 
        = ((0xfffffff0U & vlSelf->__PVT__axi_intercon__DOT__masters_req[2U]) 
           | (((7U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count)) 
               | ((IData)(((((QData)((IData)((vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_req_addr_f2 
                                              << 3U))) 
                             << 0x1dU) | (QData)((IData)(
                                                         (0xd7c00U 
                                                          | (0xfU 
                                                             & (vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_req_addr_f2 
                                                                >> 0x19U)))))) 
                           >> 0x20U)) >> 0x1dU)) | 
              (0xfffffff8U & (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count))));
    vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb 
        = (1U & (((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                   >> 0x19U) & (~ ((((~ (IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout)) 
                                     & (~ (IData)(vlSelf->__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_load_kill_wen))) 
                                    & (0x2000004U == 
                                       (0x2000004U 
                                        & vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U]))) 
                                   & ((0x1fU & ((vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 6U)))))) 
                 & (~ ((IData)(vlSelf->swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                       >> 1U))));
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
    vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr 
        = ((0xeU & (IData)(vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr)) 
           | (1U & VL_REDXOR_32((0x1fffffU & vlSelf->__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U]))));
}
